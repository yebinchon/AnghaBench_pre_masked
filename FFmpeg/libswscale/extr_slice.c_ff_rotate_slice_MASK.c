
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* plane; } ;
struct TYPE_4__ {int available_lines; int sliceY; int sliceH; } ;
typedef TYPE_2__ SwsSlice ;



int FUNC_0(SwsSlice *VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3;
    if (VAR_1) {
        for (VAR_3 = 0; VAR_3 < 4; VAR_3+=3) {
            int VAR_4 = VAR_0->plane[VAR_3].available_lines;
            int VAR_5 = VAR_1 - VAR_0->plane[VAR_3].sliceY;

            if (VAR_5 >= VAR_4 * 2) {
                VAR_0->plane[VAR_3].sliceY += VAR_4;
                VAR_0->plane[VAR_3].sliceH -= VAR_4;
            }
        }
    }
    if (VAR_2) {
        for (VAR_3 = 1; VAR_3 < 3; ++VAR_3) {
            int VAR_6 = VAR_0->plane[VAR_3].available_lines;
            int VAR_7 = VAR_2 - VAR_0->plane[VAR_3].sliceY;

            if (VAR_7 >= VAR_6 * 2) {
                VAR_0->plane[VAR_3].sliceY += VAR_6;
                VAR_0->plane[VAR_3].sliceH -= VAR_6;
            }
        }
    }
    return 0;
}
