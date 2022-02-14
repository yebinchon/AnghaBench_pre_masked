
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int should_free_lines; int width; TYPE_1__* plane; scalar_t__ is_ring; } ;
struct TYPE_5__ {int available_lines; scalar_t__* line; } ;
typedef TYPE_2__ SwsSlice ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(SwsSlice *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;
    int VAR_5[2] = {3, 2};

    VAR_1->should_free_lines = 1;
    VAR_1->width = VAR_3;

    for (VAR_4 = 0; VAR_4 < 2; ++VAR_4) {
        int VAR_6 = VAR_1->plane[VAR_4].available_lines;
        int VAR_7;
        int VAR_8 = VAR_5[VAR_4];

        FUNC_1(VAR_6 == VAR_1->plane[VAR_8].available_lines);
        for (VAR_7 = 0; VAR_7 < VAR_6; ++VAR_7) {


            VAR_1->plane[VAR_4].line[VAR_7] = FUNC_2(VAR_2 * 2 + 32);
            if (!VAR_1->plane[VAR_4].line[VAR_7]) {
                FUNC_3(VAR_1);
                return FUNC_0(VAR_0);
            }
            VAR_1->plane[VAR_8].line[VAR_7] = VAR_1->plane[VAR_4].line[VAR_7] + VAR_2 + 16;
            if (VAR_1->is_ring) {
               VAR_1->plane[VAR_4].line[VAR_7+VAR_6] = VAR_1->plane[VAR_4].line[VAR_7];
               VAR_1->plane[VAR_8].line[VAR_7+VAR_6] = VAR_1->plane[VAR_8].line[VAR_7];
            }
        }
    }

    return 0;
}
