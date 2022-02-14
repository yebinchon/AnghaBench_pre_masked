
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_side_data; int * side_data; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(AVFrame *VAR_0)
{
    int VAR_1;

    for (VAR_1 = 0; VAR_1 < VAR_0->nb_side_data; VAR_1++) {
        FUNC_1(&VAR_0->side_data[VAR_1]);
    }
    VAR_0->nb_side_data = 0;

    FUNC_0(&VAR_0->side_data);
}
