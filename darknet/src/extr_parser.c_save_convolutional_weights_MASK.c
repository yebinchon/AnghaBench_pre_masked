
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nweights; int n; int weights; int rolling_variance; int rolling_mean; int scales; scalar_t__ batch_normalize; int biases; scalar_t__ binary; } ;
typedef TYPE_1__ layer ;
typedef int FILE ;


 int FUNC_0 (int ,int,int,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__) ;

void FUNC_2(layer VAR_1, FILE *VAR_2)
{
    if(VAR_1.binary){


    }





    int VAR_3 = VAR_1.nweights;
    FUNC_0(VAR_1.biases, sizeof(float), VAR_1.n, VAR_2);
    if (VAR_1.batch_normalize){
        FUNC_0(VAR_1.scales, sizeof(float), VAR_1.n, VAR_2);
        FUNC_0(VAR_1.rolling_mean, sizeof(float), VAR_1.n, VAR_2);
        FUNC_0(VAR_1.rolling_variance, sizeof(float), VAR_1.n, VAR_2);
    }
    FUNC_0(VAR_1.weights, sizeof(float), VAR_3, VAR_2);
}
