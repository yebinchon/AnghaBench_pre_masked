
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int row; int col; int value; int mcts; int member_0; } ;
typedef TYPE_2__ move ;
struct TYPE_8__ {int* visit_count; double result; int* mean; double* prior; TYPE_1__** children; int board; } ;
typedef TYPE_3__ mcts_tree ;
struct TYPE_6__ {double result; } ;


 int FUNC_0 (int ,char*,int,int,double,double,float,int,double,int) ;
 int FUNC_1 (float*,int) ;
 int VAR_0 ;
 double FUNC_2 (int,int) ;
 int FUNC_3 (int ,int ,int,int*) ;
 int FUNC_4 (float*,int) ;
 int VAR_1 ;
 int FUNC_5 (float*,int,int,int*) ;

move FUNC_6(mcts_tree *VAR_2, float VAR_3, int VAR_4)
{
    int VAR_5;
    float VAR_6[19*19+1] = {0};
    move VAR_7 = {0};
    double VAR_8 = 0;






    for(VAR_5 = 0; VAR_5 < 19*19+1; ++VAR_5){
        VAR_8 += FUNC_2(VAR_2->visit_count[VAR_5], 1./VAR_3);
    }
    for(VAR_5 = 0; VAR_5 < 19*19+1; ++VAR_5){
        VAR_6[VAR_5] = FUNC_2(VAR_2->visit_count[VAR_5], 1./VAR_3) / VAR_8;
    }

    int VAR_9 = FUNC_4(VAR_6, 19*19+1);
    VAR_7.row = VAR_9 / 19;
    VAR_7.col = VAR_9 % 19;
    VAR_7.value = (VAR_2->result+1.)/2.;
    VAR_7.mcts = (VAR_2->mean[VAR_9]+1.)/2.;

    int VAR_10[VAR_0];
    FUNC_5(VAR_6, 19*19+1, VAR_0, VAR_10);
    FUNC_3(VAR_1, VAR_2->board, VAR_4, VAR_10);

    FUNC_0(VAR_1, "%d %d, Result: %f, Prior: %f, Prob: %f, Mean Value: %d, Child Result: %f, Visited: %d\n", VAR_9/19, VAR_9%19, VAR_2->result, VAR_2->prior[VAR_9], VAR_6[VAR_9], VAR_2->mean[VAR_9], (VAR_2->children[VAR_9])?VAR_2->children[VAR_9]->result:0, VAR_2->visit_count[VAR_9]);
    int VAR_11 = FUNC_1(VAR_6, 19*19+1);
    FUNC_0(VAR_1, "%d %d, Result: %f, Prior: %f, Prob: %f, Mean Value: %d, Child Result: %f, Visited: %d\n", VAR_11/19, VAR_11%19, VAR_2->result, VAR_2->prior[VAR_11], VAR_6[VAR_11], VAR_2->mean[VAR_11], (VAR_2->children[VAR_11])?VAR_2->children[VAR_11]->result:0, VAR_2->visit_count[VAR_11]);
    VAR_11 = FUNC_1(VAR_2->prior, 19*19+1);
    FUNC_0(VAR_1, "%d %d, Result: %f, Prior: %f, Prob: %f, Mean Value: %d, Child Result: %f, Visited: %d\n", VAR_11/19, VAR_11%19, VAR_2->result, VAR_2->prior[VAR_11], VAR_6[VAR_11], VAR_2->mean[VAR_11], (VAR_2->children[VAR_11])?VAR_2->children[VAR_11]->result:0, VAR_2->visit_count[VAR_11]);
    return VAR_7;
}
