
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {TYPE_3__* internal; } ;
struct TYPE_7__ {int bsf; int * pkt; scalar_t__ inited; } ;
struct TYPE_9__ {TYPE_2__* avctx; TYPE_1__ extract_extradata; } ;
struct TYPE_8__ {int extradata_size; scalar_t__ extradata; } ;
typedef TYPE_3__ AVStreamInternal ;
typedef TYPE_4__ AVStream ;
typedef int AVPacket ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int * FUNC_5 (int *,int ,int*) ;
 int FUNC_6 (int *,int const*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_10(AVStream *VAR_6, const AVPacket *VAR_7)
{
    AVStreamInternal *VAR_8 = VAR_6->internal;
    AVPacket *VAR_9;
    int VAR_10;

    if (!VAR_8->extract_extradata.inited) {
        VAR_10 = FUNC_8(VAR_6);
        if (VAR_10 < 0)
            return VAR_10;
    }

    if (VAR_8->extract_extradata.inited && !VAR_8->extract_extradata.bsf)
        return 0;

    VAR_9 = VAR_8->extract_extradata.pkt;
    VAR_10 = FUNC_6(VAR_9, VAR_7);
    if (VAR_10 < 0)
        return VAR_10;

    VAR_10 = FUNC_3(VAR_8->extract_extradata.bsf, VAR_9);
    if (VAR_10 < 0) {
        FUNC_7(VAR_9);
        return VAR_10;
    }

    while (VAR_10 >= 0 && !VAR_8->avctx->extradata) {
        int VAR_11;
        uint8_t *VAR_12;

        VAR_10 = FUNC_2(VAR_8->extract_extradata.bsf, VAR_9);
        if (VAR_10 < 0) {
            if (VAR_10 != FUNC_0(VAR_3) && VAR_10 != VAR_0)
                return VAR_10;
            continue;
        }

        VAR_12 = FUNC_5(VAR_9, VAR_2,
                                            &VAR_11);

        if (VAR_12) {
            FUNC_1(!VAR_8->avctx->extradata);
            if ((unsigned)VAR_11 < VAR_5)
                VAR_8->avctx->extradata = FUNC_4(VAR_11 + VAR_1);
            if (!VAR_8->avctx->extradata) {
                FUNC_7(VAR_9);
                return FUNC_0(VAR_4);
            }
            FUNC_9(VAR_8->avctx->extradata, VAR_12, VAR_11);
            VAR_8->avctx->extradata_size = VAR_11;
        }
        FUNC_7(VAR_9);
    }

    return 0;
}
