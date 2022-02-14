
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numload; int n; int c; int groups; int size; double* biases; double* scales; double* rolling_mean; double* rolling_variance; double* weights; scalar_t__ flipped; int dontloadscales; scalar_t__ batch_normalize; scalar_t__ binary; } ;
typedef TYPE_1__ layer ;
typedef int FILE ;


 int FUNC_0 (int,int ,double*,int) ;
 int FUNC_1 (double*,int,int,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__) ;
 int FUNC_4 (double*,int,int) ;

void FUNC_5(layer VAR_1, FILE *VAR_2)
{
    if(VAR_1.binary){


    }
    if(VAR_1.numload) VAR_1.n = VAR_1.numload;
    int VAR_3 = VAR_1.c/VAR_1.groups*VAR_1.n*VAR_1.size*VAR_1.size;
    FUNC_1(VAR_1.biases, sizeof(float), VAR_1.n, VAR_2);
    if (VAR_1.batch_normalize && (!VAR_1.dontloadscales)){
        FUNC_1(VAR_1.scales, sizeof(float), VAR_1.n, VAR_2);
        FUNC_1(VAR_1.rolling_mean, sizeof(float), VAR_1.n, VAR_2);
        FUNC_1(VAR_1.rolling_variance, sizeof(float), VAR_1.n, VAR_2);
        if(0){
            int VAR_4;
            for(VAR_4 = 0; VAR_4 < VAR_1.n; ++VAR_4){
                FUNC_2("%g, ", VAR_1.rolling_mean[VAR_4]);
            }
            FUNC_2("\n");
            for(VAR_4 = 0; VAR_4 < VAR_1.n; ++VAR_4){
                FUNC_2("%g, ", VAR_1.rolling_variance[VAR_4]);
            }
            FUNC_2("\n");
        }
        if(0){
            FUNC_0(VAR_1.n, 0, VAR_1.rolling_mean, 1);
            FUNC_0(VAR_1.n, 0, VAR_1.rolling_variance, 1);
        }
        if(0){
            int VAR_5;
            for(VAR_5 = 0; VAR_5 < VAR_1.n; ++VAR_5){
                FUNC_2("%g, ", VAR_1.rolling_mean[VAR_5]);
            }
            FUNC_2("\n");
            for(VAR_5 = 0; VAR_5 < VAR_1.n; ++VAR_5){
                FUNC_2("%g, ", VAR_1.rolling_variance[VAR_5]);
            }
            FUNC_2("\n");
        }
    }
    FUNC_1(VAR_1.weights, sizeof(float), VAR_3, VAR_2);

    if (VAR_1.flipped) {
        FUNC_4(VAR_1.weights, VAR_1.c*VAR_1.size*VAR_1.size, VAR_1.n);
    }






}
