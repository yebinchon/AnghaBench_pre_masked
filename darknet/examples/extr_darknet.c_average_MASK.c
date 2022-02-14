
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int n; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_7__ {scalar_t__ type; int n; int c; int size; int outputs; int inputs; int weights; int biases; int rolling_variance; int rolling_mean; int scales; scalar_t__ batch_normalize; } ;
typedef TYPE_2__ layer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int,int ,int,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 TYPE_1__* FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (int,int,int ,int) ;

void FUNC_5(int VAR_3, char *VAR_4[])
{
    char *VAR_5 = VAR_4[2];
    char *VAR_6 = VAR_4[3];
    VAR_2 = -1;
    network *VAR_7 = FUNC_2(VAR_5);
    network *VAR_8 = FUNC_2(VAR_5);

    char *VAR_9 = VAR_4[4];
    FUNC_1(VAR_8, VAR_9);

    int VAR_10, VAR_11;
    int VAR_12 = VAR_3 - 5;
    for(VAR_10 = 0; VAR_10 < VAR_12; ++VAR_10){
        VAR_9 = VAR_4[VAR_10+5];
        FUNC_1(VAR_7, VAR_9);
        for(VAR_11 = 0; VAR_11 < VAR_7->n; ++VAR_11){
            layer VAR_13 = VAR_7->layers[VAR_11];
            layer VAR_14 = VAR_8->layers[VAR_11];
            if(VAR_13.type == VAR_1){
                int VAR_15 = VAR_13.n*VAR_13.c*VAR_13.size*VAR_13.size;
                FUNC_0(VAR_13.n, 1, VAR_13.biases, 1, VAR_14.biases, 1);
                FUNC_0(VAR_15, 1, VAR_13.weights, 1, VAR_14.weights, 1);
                if(VAR_13.batch_normalize){
                    FUNC_0(VAR_13.n, 1, VAR_13.scales, 1, VAR_14.scales, 1);
                    FUNC_0(VAR_13.n, 1, VAR_13.rolling_mean, 1, VAR_14.rolling_mean, 1);
                    FUNC_0(VAR_13.n, 1, VAR_13.rolling_variance, 1, VAR_14.rolling_variance, 1);
                }
            }
            if(VAR_13.type == VAR_0){
                FUNC_0(VAR_13.outputs, 1, VAR_13.biases, 1, VAR_14.biases, 1);
                FUNC_0(VAR_13.outputs*VAR_13.inputs, 1, VAR_13.weights, 1, VAR_14.weights, 1);
            }
        }
    }
    VAR_12 = VAR_12+1;
    for(VAR_11 = 0; VAR_11 < VAR_7->n; ++VAR_11){
        layer VAR_16 = VAR_8->layers[VAR_11];
        if(VAR_16.type == VAR_1){
            int VAR_17 = VAR_16.n*VAR_16.c*VAR_16.size*VAR_16.size;
            FUNC_4(VAR_16.n, 1./VAR_12, VAR_16.biases, 1);
            FUNC_4(VAR_17, 1./VAR_12, VAR_16.weights, 1);
                if(VAR_16.batch_normalize){
                    FUNC_4(VAR_16.n, 1./VAR_12, VAR_16.scales, 1);
                    FUNC_4(VAR_16.n, 1./VAR_12, VAR_16.rolling_mean, 1);
                    FUNC_4(VAR_16.n, 1./VAR_12, VAR_16.rolling_variance, 1);
                }
        }
        if(VAR_16.type == VAR_0){
            FUNC_4(VAR_16.outputs, 1./VAR_12, VAR_16.biases, 1);
            FUNC_4(VAR_16.outputs*VAR_16.inputs, 1./VAR_12, VAR_16.weights, 1);
        }
    }
    FUNC_3(VAR_8, VAR_6);
}
