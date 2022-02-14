
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * index_run; int * max_level; int * max_run; } ;
typedef TYPE_1__ RLTable ;


 int FUNC_0 (int *) ;

void FUNC_1(RLTable *VAR_0)
{
    int VAR_1;

    for (VAR_1 = 0; VAR_1 < 2; VAR_1++) {
        FUNC_0(&VAR_0->max_run[VAR_1]);
        FUNC_0(&VAR_0->max_level[VAR_1]);
        FUNC_0(&VAR_0->index_run[VAR_1]);
    }
}
