
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int network ;
struct TYPE_3__ {float* board; float* mean; int* value; int total_count; float result; scalar_t__* prior; scalar_t__* visit_count; void* prob; void* children; } ;
typedef TYPE_1__ mcts_tree ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int,float*,int,scalar_t__*,int) ;
 float* FUNC_2 (int *,float*) ;
 scalar_t__ FUNC_3 (float*,int) ;

mcts_tree *FUNC_4(float *VAR_0, float *VAR_1, network *VAR_2)
{
    mcts_tree *VAR_3 = FUNC_0(1, sizeof(mcts_tree));
    VAR_3->board = VAR_0;
    VAR_3->children = FUNC_0(19*19+1, sizeof(mcts_tree*));
    VAR_3->prior = FUNC_0(19*19 + 1, sizeof(float));
    VAR_3->prob = FUNC_0(19*19 + 1, sizeof(float));
    VAR_3->mean = FUNC_0(19*19 + 1, sizeof(float));
    VAR_3->value = FUNC_0(19*19 + 1, sizeof(float));
    VAR_3->visit_count = FUNC_0(19*19 + 1, sizeof(int));
    VAR_3->total_count = 1;
    int VAR_4;
    float *VAR_5 = FUNC_2(VAR_2, VAR_0);
    FUNC_1(19*19+1, VAR_5, 1, VAR_3->prior, 1);
    float VAR_6 = 2*VAR_5[19*19 + 1] - 1;
    VAR_3->result = VAR_6;
    for(VAR_4 = 0; VAR_4 < 19*19+1; ++VAR_4) {
        VAR_3->visit_count[VAR_4] = 0;
        VAR_3->value[VAR_4] = 0;
        VAR_3->mean[VAR_4] = VAR_6;
        if(VAR_4 < 19*19 && FUNC_3(VAR_0, VAR_4)){
            VAR_3->value[VAR_4] = -1;
            VAR_3->mean[VAR_4] = -1;
            VAR_3->prior[VAR_4] = 0;
        }
    }

    return VAR_3;
}
