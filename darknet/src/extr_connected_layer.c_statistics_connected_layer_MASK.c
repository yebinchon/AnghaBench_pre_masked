
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int outputs; int weights; int biases; int scales; scalar_t__ batch_normalize; } ;
typedef TYPE_1__ layer ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;

void FUNC_2(layer VAR_0)
{
    if(VAR_0.batch_normalize){
        FUNC_1("Scales ");
        FUNC_0(VAR_0.scales, VAR_0.outputs);






    }
    FUNC_1("Biases ");
    FUNC_0(VAR_0.biases, VAR_0.outputs);
    FUNC_1("Weights ");
    FUNC_0(VAR_0.weights, VAR_0.outputs);
}
