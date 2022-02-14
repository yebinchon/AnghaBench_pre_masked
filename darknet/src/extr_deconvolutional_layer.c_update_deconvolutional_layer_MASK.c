
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {float learning_rate; float momentum; float decay; int batch; } ;
typedef TYPE_1__ update_args ;
struct TYPE_6__ {float learning_rate_scale; int size; int c; int n; int weight_updates; int weights; int scale_updates; int scales; int bias_updates; int biases; } ;
typedef TYPE_2__ layer ;


 int FUNC_0 (int,float,int ,int,int ,int) ;
 int FUNC_1 (int,float,int ,int) ;

void FUNC_2(layer VAR_0, update_args VAR_1)
{
    float VAR_2 = VAR_1.learning_rate*VAR_0.learning_rate_scale;
    float VAR_3 = VAR_1.momentum;
    float VAR_4 = VAR_1.decay;
    int VAR_5 = VAR_1.batch;

    int VAR_6 = VAR_0.size*VAR_0.size*VAR_0.c*VAR_0.n;
    FUNC_0(VAR_0.n, VAR_2/VAR_5, VAR_0.bias_updates, 1, VAR_0.biases, 1);
    FUNC_1(VAR_0.n, VAR_3, VAR_0.bias_updates, 1);

    if(VAR_0.scales){
        FUNC_0(VAR_0.n, VAR_2/VAR_5, VAR_0.scale_updates, 1, VAR_0.scales, 1);
        FUNC_1(VAR_0.n, VAR_3, VAR_0.scale_updates, 1);
    }

    FUNC_0(VAR_6, -VAR_4*VAR_5, VAR_0.weights, 1, VAR_0.weight_updates, 1);
    FUNC_0(VAR_6, VAR_2/VAR_5, VAR_0.weight_updates, 1, VAR_0.weights, 1);
    FUNC_1(VAR_6, VAR_3, VAR_0.weight_updates, 1);
}
