
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int columns; int rows; int * color_map; int pgno; TYPE_2__* text; } ;
typedef TYPE_1__ vbi_page ;
struct TYPE_15__ {scalar_t__ opacity; } ;
typedef TYPE_2__ vbi_char ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_16__ {int opacity; scalar_t__ y_offset; int x_offset; } ;
typedef TYPE_3__ TeletextContext ;
struct TYPE_17__ {int* linesize; int w; int h; int nb_colors; int type; void** data; scalar_t__ y; int x; } ;
typedef TYPE_4__ AVSubtitleRect ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (void**) ;
 int FUNC_7 (TYPE_3__*,int ,char*,int ) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (TYPE_3__*,char*,int ) ;
 int FUNC_10 (TYPE_3__*,TYPE_4__*,TYPE_1__*,int,int,int) ;
 int FUNC_11 (TYPE_1__*,int ,void*,int,int ,int,int,int,int,int) ;

__attribute__((used)) static int FUNC_12(TeletextContext *VAR_11, AVSubtitleRect *VAR_12, vbi_page *VAR_13, int VAR_14)
{
    int VAR_15 = VAR_13->columns * VAR_3;
    int VAR_16 = (VAR_13->rows - VAR_14) * VAR_2;
    uint8_t VAR_17;
    vbi_char *VAR_18 = VAR_13->text + (VAR_14 * VAR_13->columns);
    vbi_char *VAR_19 = VAR_13->text + (VAR_13->rows * VAR_13->columns);

    for (; VAR_18 < VAR_19; VAR_18++) {
        if (VAR_18->opacity != VAR_10)
            break;
    }

    if (VAR_18 >= VAR_19) {
        FUNC_7(VAR_11, VAR_1, "dropping empty page %3x\n", VAR_13->pgno);
        VAR_12->type = VAR_6;
        return 0;
    }

    VAR_12->data[0] = FUNC_8(VAR_15 * VAR_16);
    VAR_12->linesize[0] = VAR_15;
    if (!VAR_12->data[0])
        return FUNC_0(VAR_4);

    FUNC_11(VAR_13, VAR_8,
                            VAR_12->data[0], VAR_12->linesize[0],
                            0, VAR_14, VAR_13->columns, VAR_13->rows - VAR_14,
                                       1, 1);

    FUNC_10(VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16);
    VAR_12->x = VAR_11->x_offset;
    VAR_12->y = VAR_11->y_offset + VAR_14 * VAR_2;
    VAR_12->w = VAR_15;
    VAR_12->h = VAR_16;
    VAR_12->nb_colors = VAR_11->opacity > 0 && VAR_11->opacity < 255 ? 2 * VAR_7 : VAR_7;
    VAR_12->data[1] = FUNC_8(VAR_0);
    if (!VAR_12->data[1]) {
        FUNC_6(&VAR_12->data[0]);
        return FUNC_0(VAR_4);
    }
    for (VAR_17 = 0; VAR_17 < VAR_7; VAR_17++) {
        int VAR_20, VAR_21, VAR_22, VAR_23;

        VAR_20 = FUNC_5(VAR_13->color_map[VAR_17]);
        VAR_21 = FUNC_4(VAR_13->color_map[VAR_17]);
        VAR_22 = FUNC_3(VAR_13->color_map[VAR_17]);
        VAR_23 = FUNC_2(VAR_13->color_map[VAR_17]);
        ((uint32_t *)VAR_12->data[1])[VAR_17] = FUNC_1(VAR_20, VAR_21, VAR_22, VAR_23);
        ((uint32_t *)VAR_12->data[1])[VAR_17 + VAR_7] = FUNC_1(VAR_20, VAR_21, VAR_22, VAR_11->opacity);
        FUNC_9(VAR_11, "palette %0x\n", ((uint32_t *)VAR_12->data[1])[VAR_17]);
    }
    ((uint32_t *)VAR_12->data[1])[VAR_9] = FUNC_1(0, 0, 0, 0);
    ((uint32_t *)VAR_12->data[1])[VAR_9 + VAR_7] = FUNC_1(0, 0, 0, 0);
    VAR_12->type = VAR_5;
    return 0;
}
