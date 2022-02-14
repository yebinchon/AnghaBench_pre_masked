
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int network ;
struct TYPE_6__ {int* visit_count; int board; } ;
typedef TYPE_1__ mcts_tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,float*) ;
 int FUNC_2 (float*) ;
 TYPE_1__* FUNC_3 (int ,float*,int *) ;
 int FUNC_4 (float*) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 (TYPE_1__*,int *,float*,float) ;
 double FUNC_7 () ;

mcts_tree *FUNC_8(mcts_tree *VAR_0, network *VAR_1, float *VAR_2, float *VAR_3, int VAR_4, int VAR_5, float VAR_6, float VAR_7)
{
    int VAR_8;
    double VAR_9 = FUNC_7();
    if(VAR_4 < 0) FUNC_4(VAR_2);
    if(!VAR_0) VAR_0 = FUNC_3(FUNC_2(VAR_2), VAR_3, VAR_1);
    FUNC_0(FUNC_1(VAR_0->board, VAR_2));
    for(VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8){
        if (VAR_7 > 0 && (FUNC_7() - VAR_9) > VAR_7) break;
        int VAR_10 = FUNC_5(VAR_0->visit_count, 19*19+1);
        if (VAR_0->visit_count[VAR_10] >= VAR_5) break;
        FUNC_6(VAR_0, VAR_1, VAR_3, VAR_6);
    }
    if(VAR_4 < 0) FUNC_4(VAR_2);

    return VAR_0;
}
