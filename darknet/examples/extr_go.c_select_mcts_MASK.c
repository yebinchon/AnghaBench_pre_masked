
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int network ;
struct TYPE_4__ {int done; float result; float* prob; float* mean; float* prior; int* visit_count; float* board; int* value; int pass; struct TYPE_4__** children; int total_count; } ;
typedef TYPE_1__ mcts_tree ;


 float* FUNC_0 (float*) ;
 TYPE_1__* FUNC_1 (float*,float*,int *) ;
 int FUNC_2 (float*) ;
 int FUNC_3 (float*,float*,int,int,int) ;
 int FUNC_4 (float*,int,int,int) ;
 float FUNC_5 (int ) ;

float FUNC_6(mcts_tree *VAR_0, network *VAR_1, float *VAR_2, float VAR_3)
{
    if(VAR_0->done) return -VAR_0->result;
    int VAR_4;
    float VAR_5 = -1000;
    int VAR_6 = 0;
    for(VAR_4 = 0; VAR_4 < 19*19+1; ++VAR_4){
        VAR_0->prob[VAR_4] = VAR_0->mean[VAR_4] + VAR_3*VAR_0->prior[VAR_4] * FUNC_5(VAR_0->total_count) / (1. + VAR_0->visit_count[VAR_4]);
        if(VAR_0->prob[VAR_4] > VAR_5){
            VAR_5 = VAR_0->prob[VAR_4];
            VAR_6 = VAR_4;
        }
    }
    float VAR_7;
    VAR_4 = VAR_6;
    VAR_0->visit_count[VAR_4]++;
    VAR_0->total_count++;
    if (VAR_0->children[VAR_4]) {
        VAR_7 = FUNC_6(VAR_0->children[VAR_4], VAR_1, VAR_0->board, VAR_3);
    } else {
        if(VAR_6 < 19*19 && !FUNC_3(VAR_0->board, VAR_2, 1, VAR_6/19, VAR_6%19)) {
            VAR_0->mean[VAR_4] = -1;
            VAR_0->value[VAR_4] = -1;
            VAR_0->prior[VAR_4] = 0;
            --VAR_0->total_count;
            return FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3);


        } else {
            float *VAR_8 = FUNC_0(VAR_0->board);
            if (VAR_6 < 19*19) {
                FUNC_4(VAR_8, 1, VAR_6 / 19, VAR_6 % 19);
            }
            FUNC_2(VAR_8);
            VAR_0->children[VAR_4] = FUNC_1(VAR_8, VAR_0->board, VAR_1);
            VAR_7 = -VAR_0->children[VAR_4]->result;
            if(VAR_6 == 19*19){
                VAR_0->children[VAR_4]->pass = 1;
                if (VAR_0->pass){
                    VAR_0->children[VAR_4]->done = 1;
                }
            }
        }
    }
    VAR_0->value[VAR_4] += VAR_7;
    VAR_0->mean[VAR_4] = VAR_0->value[VAR_4]/VAR_0->visit_count[VAR_4];
    return -VAR_7;
}
