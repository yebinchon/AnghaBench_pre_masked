
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int network ;
struct TYPE_6__ {int total_count; } ;
typedef TYPE_1__ mcts_tree ;


 int FUNC_0 (int ,char*,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int *,float*,float*,int,int,float,double) ;
 int VAR_0 ;
 int FUNC_2 () ;
 double FUNC_3 () ;

mcts_tree *FUNC_4(mcts_tree *VAR_1, network *VAR_2, float *VAR_3, float *VAR_4, int VAR_5, float VAR_6)
{
    double VAR_7 = FUNC_3();
    int VAR_8 = 0;
    if (VAR_1) VAR_8 = VAR_1->total_count;
    while(!FUNC_2()){
        if (FUNC_3() - VAR_7 > 120) break;
        VAR_1 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, 100000, VAR_6, .1);
    }
    FUNC_0(VAR_0, "Pondered %d moves...\n", VAR_1->total_count - VAR_8);
    return VAR_1;
}
