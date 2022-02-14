
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int inputs; int n; TYPE_1__* layers; } ;
typedef TYPE_2__ network ;
struct TYPE_5__ {float temperature; } ;


 char* FUNC_0 (char*) ;
 float* FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,char*) ;
 TYPE_2__* FUNC_3 (char*,char*,int ) ;
 float* FUNC_4 (TYPE_2__*,float*) ;
 int FUNC_5 (int,char**) ;
 int FUNC_6 (char*) ;
 char** FUNC_7 (char*,size_t*) ;
 int FUNC_8 (float*,int) ;
 int FUNC_9 (int) ;
 int VAR_0 ;
 int FUNC_10 (char*) ;

void FUNC_11(char *VAR_1, char *VAR_2, int VAR_3, char *VAR_4, float VAR_5, int VAR_6, char *VAR_7)
{
    char **VAR_8 = 0;
    if(VAR_7){
        size_t VAR_9;
        VAR_8 = FUNC_7(VAR_7, &VAR_9);
    }

    FUNC_9(VAR_6);
    char *VAR_10 = FUNC_0(VAR_1);
    FUNC_2(VAR_0, "%s\n", VAR_10);

    network *VAR_11 = FUNC_3(VAR_1, VAR_2, 0);
    int VAR_12 = VAR_11->inputs;

    int VAR_13, VAR_14;
    for(VAR_13 = 0; VAR_13 < VAR_11->n; ++VAR_13) VAR_11->layers[VAR_13].temperature = VAR_5;
    int VAR_15 = 0;
    int VAR_16 = FUNC_10(VAR_4);
    float *VAR_17 = FUNC_1(VAR_12, sizeof(float));
    for(VAR_13 = 0; VAR_13 < VAR_16-1; ++VAR_13){
        VAR_15 = VAR_4[VAR_13];
        VAR_17[VAR_15] = 1;
        FUNC_4(VAR_11, VAR_17);
        VAR_17[VAR_15] = 0;
        FUNC_5(VAR_15, VAR_8);
    }
    if(VAR_16) VAR_15 = VAR_4[VAR_16-1];
    FUNC_5(VAR_15, VAR_8);
    for(VAR_13 = 0; VAR_13 < VAR_3; ++VAR_13){
        VAR_17[VAR_15] = 1;
        float *VAR_18 = FUNC_4(VAR_11, VAR_17);
        VAR_17[VAR_15] = 0;
        for(VAR_14 = 32; VAR_14 < 127; ++VAR_14){

        }
        for(VAR_14 = 0; VAR_14 < VAR_12; ++VAR_14){
            if (VAR_18[VAR_14] < .0001) VAR_18[VAR_14] = 0;
        }
        VAR_15 = FUNC_8(VAR_18, VAR_12);
        FUNC_5(VAR_15, VAR_8);
    }
    FUNC_6("\n");
}
