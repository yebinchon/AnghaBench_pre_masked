
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


struct TYPE_21__ {int text; int style; } ;
struct TYPE_20__ {scalar_t__ codec_id; TYPE_2__* priv_data; } ;
struct TYPE_19__ {int num_rects; TYPE_1__** rects; } ;
struct TYPE_16__ {int len; int str; } ;
struct TYPE_18__ {TYPE_14__ buffer; scalar_t__ alignment_applied; int ass_ctx; } ;
struct TYPE_17__ {char* ass; scalar_t__ type; } ;
typedef TYPE_2__ SRTContext ;
typedef TYPE_3__ AVSubtitle ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ ASSDialog ;
typedef int ASSCodesCallbacks ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_14__*) ;
 int FUNC_2 (TYPE_14__*) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 int FUNC_4 (TYPE_5__**) ;
 TYPE_5__* FUNC_5 (int ,char const*,int ,int*) ;
 TYPE_5__* FUNC_6 (int ,char const*) ;
 int FUNC_7 (int const*,TYPE_2__*,int ) ;
 int FUNC_8 (unsigned char*,int ,int) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_5,
                        unsigned char *VAR_6, int VAR_7, const AVSubtitle *VAR_8,
                        const ASSCodesCallbacks *VAR_9)
{
    SRTContext *VAR_10 = VAR_5->priv_data;
    ASSDialog *VAR_11;
    int VAR_12;

    FUNC_1(&VAR_10->buffer);

    for (VAR_12=0; VAR_12<VAR_8->num_rects; VAR_12++) {
        const char *VAR_13 = VAR_8->rects[VAR_12]->ass;

        if (VAR_8->rects[VAR_12]->type != VAR_4) {
            FUNC_3(VAR_5, VAR_1, "Only SUBTITLE_ASS type supported.\n");
            return FUNC_0(VAR_3);
        }
            VAR_11 = FUNC_6(VAR_10->ass_ctx, VAR_13);
            if (!VAR_11)
                return FUNC_0(VAR_2);
            VAR_10->alignment_applied = 0;
            if (VAR_5->codec_id == VAR_0)
                FUNC_9(VAR_10, VAR_11->style);
            FUNC_7(VAR_9, VAR_10, VAR_11->text);
            FUNC_4(&VAR_11);



    }

    if (!FUNC_2(&VAR_10->buffer))
        return FUNC_0(VAR_2);
    if (!VAR_10->buffer.len)
        return 0;

    if (VAR_10->buffer.len > VAR_7) {
        FUNC_3(VAR_5, VAR_1, "Buffer too small for ASS event.\n");
        return -1;
    }
    FUNC_8(VAR_6, VAR_10->buffer.str, VAR_10->buffer.len);

    return VAR_10->buffer.len;
}
