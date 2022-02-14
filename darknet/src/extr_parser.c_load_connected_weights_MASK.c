
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int outputs; int inputs; int rolling_variance; int rolling_mean; int scales; int dontloadscales; scalar_t__ batch_normalize; int weights; int biases; } ;
typedef TYPE_1__ layer ;
typedef int FILE ;


 int FUNC_0 (int ,int,int,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (int ,int,int) ;

void FUNC_3(layer VAR_1, FILE *VAR_2, int VAR_3)
{
    FUNC_0(VAR_1.biases, sizeof(float), VAR_1.outputs, VAR_2);
    FUNC_0(VAR_1.weights, sizeof(float), VAR_1.outputs*VAR_1.inputs, VAR_2);
    if(VAR_3){
        FUNC_2(VAR_1.weights, VAR_1.inputs, VAR_1.outputs);
    }


    if (VAR_1.batch_normalize && (!VAR_1.dontloadscales)){
        FUNC_0(VAR_1.scales, sizeof(float), VAR_1.outputs, VAR_2);
        FUNC_0(VAR_1.rolling_mean, sizeof(float), VAR_1.outputs, VAR_2);
        FUNC_0(VAR_1.rolling_variance, sizeof(float), VAR_1.outputs, VAR_2);



    }





}
