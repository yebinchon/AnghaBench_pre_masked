
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


struct TYPE_16__ {int len; int str; } ;
struct TYPE_18__ {TYPE_14__ buffer; int ass_ctx; } ;
typedef TYPE_2__ WebVTTContext ;
struct TYPE_21__ {int text; int style; } ;
struct TYPE_20__ {TYPE_2__* priv_data; } ;
struct TYPE_19__ {int num_rects; TYPE_1__** rects; } ;
struct TYPE_17__ {char* ass; scalar_t__ type; } ;
typedef TYPE_3__ AVSubtitle ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ ASSDialog ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_14__*) ;
 int FUNC_2 (TYPE_14__*) ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 int FUNC_4 (TYPE_5__**) ;
 TYPE_5__* FUNC_5 (int ,char const*,int ,int*) ;
 TYPE_5__* FUNC_6 (int ,char const*) ;
 int FUNC_7 (int *,TYPE_2__*,int ) ;
 int FUNC_8 (unsigned char*,int ,int) ;
 int FUNC_9 (char const*,char*,int) ;
 int VAR_4 ;
 int FUNC_10 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_5,
                               unsigned char *VAR_6, int VAR_7, const AVSubtitle *VAR_8)
{
    WebVTTContext *VAR_9 = VAR_5->priv_data;
    ASSDialog *VAR_10;
    int VAR_11;

    FUNC_1(&VAR_9->buffer);

    for (VAR_11=0; VAR_11<VAR_8->num_rects; VAR_11++) {
        const char *VAR_12 = VAR_8->rects[VAR_11]->ass;

        if (VAR_8->rects[VAR_11]->type != VAR_3) {
            FUNC_3(VAR_5, VAR_0, "Only SUBTITLE_ASS type supported.\n");
            return FUNC_0(VAR_2);
        }
            VAR_10 = FUNC_6(VAR_9->ass_ctx, VAR_12);
            if (!VAR_10)
                return FUNC_0(VAR_1);
            FUNC_10(VAR_9, VAR_10->style);
            FUNC_7(&VAR_4, VAR_9, VAR_10->text);
            FUNC_4(&VAR_10);



    }

    if (!FUNC_2(&VAR_9->buffer))
        return FUNC_0(VAR_1);
    if (!VAR_9->buffer.len)
        return 0;

    if (VAR_9->buffer.len > VAR_7) {
        FUNC_3(VAR_5, VAR_0, "Buffer too small for ASS event.\n");
        return -1;
    }
    FUNC_8(VAR_6, VAR_9->buffer.str, VAR_9->buffer.len);

    return VAR_9->buffer.len;
}
