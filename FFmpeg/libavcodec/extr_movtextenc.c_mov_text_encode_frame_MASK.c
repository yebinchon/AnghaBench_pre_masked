
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;
typedef struct TYPE_17__ TYPE_13__ ;


struct TYPE_23__ {int text; } ;
struct TYPE_22__ {TYPE_2__* priv_data; } ;
struct TYPE_21__ {int num_rects; TYPE_1__** rects; } ;
struct TYPE_18__ {int len; int str; } ;
struct TYPE_20__ {TYPE_15__ buffer; scalar_t__ byte_count; int ass_ctx; scalar_t__ style_entries; scalar_t__ box_flags; scalar_t__ count; scalar_t__ text_pos; } ;
struct TYPE_19__ {char* ass; scalar_t__ type; } ;
struct TYPE_17__ {int type; int (* encode ) (TYPE_2__*,int ) ;} ;
typedef TYPE_2__ MovTextContext ;
typedef TYPE_3__ AVSubtitle ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ ASSDialog ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_15__*) ;
 int FUNC_3 (TYPE_15__*) ;
 int FUNC_4 (TYPE_4__*,int ,char*) ;
 size_t VAR_5 ;
 TYPE_13__* VAR_6 ;
 int FUNC_5 (TYPE_5__**) ;
 TYPE_5__* FUNC_6 (int ,char const*,int ,int*) ;
 TYPE_5__* FUNC_7 (int ,char const*) ;
 int FUNC_8 (int *,TYPE_2__*,int ) ;
 int FUNC_9 (unsigned char*,int ,int) ;
 int VAR_7 ;
 int FUNC_10 (char const*,char*,int) ;
 int FUNC_11 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_12(AVCodecContext *VAR_8, unsigned char *VAR_9,
                                 int VAR_10, const AVSubtitle *VAR_11)
{
    MovTextContext *VAR_12 = VAR_8->priv_data;
    ASSDialog *VAR_13;
    int VAR_14, VAR_15;
    size_t VAR_16;

    VAR_12->byte_count = 0;
    VAR_12->text_pos = 0;
    VAR_12->count = 0;
    VAR_12->box_flags = 0;
    VAR_12->style_entries = 0;
    for (VAR_14 = 0; VAR_14 < VAR_11->num_rects; VAR_14++) {
        const char *VAR_17 = VAR_11->rects[VAR_14]->ass;

        if (VAR_11->rects[VAR_14]->type != VAR_4) {
            FUNC_4(VAR_8, VAR_0, "Only SUBTITLE_ASS type supported.\n");
            return FUNC_0(VAR_3);
        }
            VAR_13 = FUNC_7(VAR_12->ass_ctx, VAR_17);
            if (!VAR_13)
                return FUNC_0(VAR_2);
            FUNC_8(&VAR_7, VAR_12, VAR_13->text);
            FUNC_5(&VAR_13);




        for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
            VAR_6[VAR_16].encode(VAR_12, VAR_6[VAR_16].type);
        }
    }

    FUNC_1(VAR_9, VAR_12->byte_count);
    VAR_9 += 2;

    if (!FUNC_3(&VAR_12->buffer)) {
        VAR_15 = FUNC_0(VAR_2);
        goto exit;
    }

    if (!VAR_12->buffer.len) {
        VAR_15 = 0;
        goto exit;
    }

    if (VAR_12->buffer.len > VAR_10 - 3) {
        FUNC_4(VAR_8, VAR_0, "Buffer too small for ASS event.\n");
        VAR_15 = FUNC_0(VAR_1);
        goto exit;
    }

    FUNC_9(VAR_9, VAR_12->buffer.str, VAR_12->buffer.len);
    VAR_15 = VAR_12->buffer.len + 2;

exit:
    FUNC_2(&VAR_12->buffer);
    return VAR_15;
}
