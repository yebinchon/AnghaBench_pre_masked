
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct range_box {int len; int variance; int start; int color; } ;
struct color_ref {int count; int color; } ;
typedef int int64_t ;
struct TYPE_3__ {int nb_boxes; int max_colors; int reserve_transparent; struct color_ref** refs; struct range_box* boxes; } ;
typedef TYPE_1__ PaletteGenContext ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(PaletteGenContext *VAR_0)
{
    int VAR_1, VAR_2, VAR_3 = -1;
    int64_t VAR_4 = -1;

    if (VAR_0->nb_boxes == VAR_0->max_colors - VAR_0->reserve_transparent)
        return -1;

    for (VAR_1 = 0; VAR_1 < VAR_0->nb_boxes; VAR_1++) {
        struct range_box *VAR_5 = &VAR_0->boxes[VAR_1];

        if (VAR_0->boxes[VAR_1].len >= 2) {

            if (VAR_5->variance == -1) {
                int64_t VAR_6 = 0;

                for (VAR_2 = 0; VAR_2 < VAR_5->len; VAR_2++) {
                    const struct color_ref *VAR_7 = VAR_0->refs[VAR_5->start + VAR_2];
                    VAR_6 += FUNC_0(VAR_7->color, VAR_5->color) * VAR_7->count;
                }
                VAR_5->variance = VAR_6;
            }
            if (VAR_5->variance > VAR_4) {
                VAR_3 = VAR_1;
                VAR_4 = VAR_5->variance;
            }
        } else {
            VAR_5->variance = -1;
        }
    }
    return VAR_3;
}
