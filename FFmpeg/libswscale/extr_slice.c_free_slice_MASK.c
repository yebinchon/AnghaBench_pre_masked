
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* plane; scalar_t__ should_free_lines; } ;
struct TYPE_5__ {int * tmp; int line; } ;
typedef TYPE_2__ SwsSlice ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(SwsSlice *VAR_0)
{
    int VAR_1;
    if (VAR_0) {
        if (VAR_0->should_free_lines)
            FUNC_1(VAR_0);
        for (VAR_1 = 0; VAR_1 < 4; ++VAR_1) {
            FUNC_0(&VAR_0->plane[VAR_1].line);
            VAR_0->plane[VAR_1].tmp = ((void*)0);
        }
    }
}
