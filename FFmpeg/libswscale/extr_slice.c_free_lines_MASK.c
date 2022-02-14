
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ should_free_lines; scalar_t__ is_ring; TYPE_1__* plane; } ;
struct TYPE_4__ {int available_lines; int ** line; } ;
typedef TYPE_2__ SwsSlice ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int **,int ,int) ;

__attribute__((used)) static void FUNC_2(SwsSlice *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < 2; ++VAR_1) {
        int VAR_2 = VAR_0->plane[VAR_1].available_lines;
        int VAR_3;
        for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
            FUNC_0(&VAR_0->plane[VAR_1].line[VAR_3]);
            if (VAR_0->is_ring)
               VAR_0->plane[VAR_1].line[VAR_3+VAR_2] = ((void*)0);
        }
    }

    for (VAR_1 = 0; VAR_1 < 4; ++VAR_1)
        FUNC_1(VAR_0->plane[VAR_1].line, 0, sizeof(uint8_t*) * VAR_0->plane[VAR_1].available_lines * (VAR_0->is_ring ? 3 : 1));
    VAR_0->should_free_lines = 0;
}
