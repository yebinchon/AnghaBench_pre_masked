
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {int font_height; int palette; TYPE_5__* frame; scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_1__ XbinContext ;
struct TYPE_12__ {int palette_has_changed; int * data; int pict_type; } ;
struct TYPE_11__ {int width; int height; scalar_t__ codec_id; TYPE_1__* priv_data; } ;
struct TYPE_10__ {int* data; int size; } ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,int const,int const) ;
 int FUNC_2 (TYPE_3__*,TYPE_5__*,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_5,
                            void *VAR_6, int *VAR_7,
                            AVPacket *VAR_8)
{
    XbinContext *VAR_9 = VAR_5->priv_data;
    const uint8_t *VAR_10 = VAR_8->data;
    int VAR_11 = VAR_8->size;
    const uint8_t *VAR_12 = VAR_10+VAR_11;
    int VAR_13;

    if ((VAR_5->width / VAR_4) * (VAR_5->height / VAR_9->font_height) / 256 > VAR_11)
        return VAR_0;

    VAR_9->frame = VAR_6;
    VAR_9->x = VAR_9->y = 0;
    if ((VAR_13 = FUNC_2(VAR_5, VAR_9->frame, 0)) < 0)
        return VAR_13;
    VAR_9->frame->pict_type = VAR_3;
    VAR_9->frame->palette_has_changed = 1;
    FUNC_3(VAR_9->frame->data[1], VAR_9->palette, 16 * 4);

    if (VAR_5->codec_id == VAR_2) {
        while (VAR_10 + 2 < VAR_12) {
            int VAR_14,VAR_15,VAR_16;
            int VAR_17 = *VAR_10 >> 6;
            int VAR_18 = (*VAR_10 & 0x3F) + 1;
            VAR_10++;
            switch (VAR_17) {
            case 0:
                for (VAR_14 = 0; VAR_14 < VAR_18 && VAR_10 + 1 < VAR_12; VAR_14++) {
                    FUNC_1(VAR_5, VAR_10[0], VAR_10[1]);
                    VAR_10 += 2;
                }
                break;
            case 1:
                VAR_15 = *VAR_10++;
                for (VAR_14 = 0; VAR_14 < VAR_18 && VAR_10 < VAR_12; VAR_14++)
                    FUNC_1(VAR_5, VAR_15, *VAR_10++);
                break;
            case 2:
                VAR_16 = *VAR_10++;
                for (VAR_14 = 0; VAR_14 < VAR_18 && VAR_10 < VAR_12; VAR_14++)
                    FUNC_1(VAR_5, *VAR_10++, VAR_16);
                break;
            case 3:
                VAR_15 = *VAR_10++;
                VAR_16 = *VAR_10++;
                for (VAR_14 = 0; VAR_14 < VAR_18 && VAR_10 < VAR_12; VAR_14++)
                    FUNC_1(VAR_5, VAR_15, VAR_16);
                break;
            }
        }
    } else if (VAR_5->codec_id == VAR_1) {
        while (VAR_10 + 2 < VAR_12) {
            if (FUNC_0(VAR_10) == 1) {
               int VAR_19;
               if (VAR_10 + 6 > VAR_12)
                   break;
               for (VAR_19 = 0; VAR_19 < VAR_10[2]; VAR_19++)
                   FUNC_1(VAR_5, VAR_10[4], VAR_10[5]);
               VAR_10 += 6;
            } else {
               FUNC_1(VAR_5, VAR_10[0], VAR_10[1]);
               VAR_10 += 2;
            }
        }
    } else {
        while (VAR_10 + 1 < VAR_12) {
            FUNC_1(VAR_5, VAR_10[0], VAR_10[1]);
            VAR_10 += 2;
        }
    }

    *VAR_7 = 1;
    return VAR_11;
}
