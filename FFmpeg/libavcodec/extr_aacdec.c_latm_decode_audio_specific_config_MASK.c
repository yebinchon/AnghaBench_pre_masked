
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_22__ {TYPE_2__* oc; TYPE_5__* avctx; } ;
struct LATMContext {scalar_t__ initialized; TYPE_6__ aac_ctx; } ;
struct TYPE_21__ {int extradata_size; int * extradata; } ;
struct TYPE_20__ {int buffer; } ;
struct TYPE_19__ {scalar_t__ sample_rate; scalar_t__ chan_config; int member_0; } ;
struct TYPE_17__ {scalar_t__ sample_rate; scalar_t__ chan_config; } ;
struct TYPE_18__ {TYPE_1__ m4ac; } ;
typedef TYPE_3__ MPEG4AudioConfig ;
typedef TYPE_4__ GetBitContext ;
typedef TYPE_5__ AVCodecContext ;
typedef TYPE_6__ AACContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*,int ,char*,...) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,TYPE_5__*,TYPE_3__*,TYPE_4__*,int,int) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*) ;
 scalar_t__ FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int ,int) ;
 int FUNC_10 (int *,int ,scalar_t__) ;
 int FUNC_11 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_12(struct LATMContext *VAR_5,
                                             GetBitContext *VAR_6, int VAR_7)
{
    AACContext *VAR_8 = &VAR_5->aac_ctx;
    AVCodecContext *VAR_9 = VAR_8->avctx;
    MPEG4AudioConfig VAR_10 = { 0 };
    GetBitContext VAR_11;
    int VAR_12 = FUNC_7(VAR_6);
    int VAR_13 = 0;
    int VAR_14, VAR_15, VAR_16;

    if (VAR_7 > 0) {
        VAR_13 = 1;
        VAR_7 = FUNC_1(VAR_7, FUNC_8(VAR_6));
        FUNC_9(&VAR_11, VAR_6->buffer, VAR_12 + VAR_7);
        FUNC_11(&VAR_11, VAR_12);
    } else if (VAR_7 == 0) {
        VAR_11 = *VAR_6;
    } else {
        return VAR_0;
    }

    if (FUNC_8(VAR_6) <= 0)
        return VAR_0;

    VAR_14 = FUNC_5(((void*)0), VAR_9, &VAR_10,
                                                    &VAR_11, VAR_12,
                                                    VAR_13);

    if (VAR_14 < VAR_12)
        return VAR_0;
    VAR_14 -= VAR_12;

    if (VAR_7 == 0)
      VAR_7 = VAR_14;

    if (!VAR_5->initialized ||
        VAR_8->oc[1].m4ac.sample_rate != VAR_10.sample_rate ||
        VAR_8->oc[1].m4ac.chan_config != VAR_10.chan_config) {

        if (VAR_5->initialized) {
            FUNC_3(VAR_9, VAR_3, "audio config changed (sample_rate=%d, chan_config=%d)\n", VAR_10.sample_rate, VAR_10.chan_config);
        } else {
            FUNC_3(VAR_9, VAR_2, "initializing latmctx\n");
        }
        VAR_5->initialized = 0;

        VAR_15 = (VAR_7 + 7) / 8;

        if (VAR_9->extradata_size < VAR_15) {
            FUNC_2(VAR_9->extradata);
            VAR_9->extradata = FUNC_4(VAR_15 + VAR_1);
            if (!VAR_9->extradata)
                return FUNC_0(VAR_4);
        }

        VAR_9->extradata_size = VAR_15;
        VAR_11 = *VAR_6;
        for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
          VAR_9->extradata[VAR_16] = FUNC_6(&VAR_11, 8);
        }
        FUNC_10(VAR_9->extradata+VAR_15, 0, VAR_1);
    }
    FUNC_11(VAR_6, VAR_7);

    return 0;
}
