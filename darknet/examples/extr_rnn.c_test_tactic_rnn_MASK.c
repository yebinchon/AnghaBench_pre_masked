
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int inputs; int n; TYPE_1__* layers; } ;
typedef TYPE_2__ network ;
struct TYPE_5__ {float temperature; } ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 float* FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (char*,char*,int ) ;
 float* FUNC_5 (TYPE_2__*,float*) ;
 int FUNC_6 (int,char**) ;
 int FUNC_7 (char*) ;
 char** FUNC_8 (char*,size_t*) ;
 int FUNC_9 (float*,int) ;
 int FUNC_10 (int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_11(char *VAR_3, char *VAR_4, int VAR_5, float VAR_6, int VAR_7, char *VAR_8)
{
    char **VAR_9 = 0;
    if(VAR_8){
        size_t VAR_10;
        VAR_9 = FUNC_8(VAR_8, &VAR_10);
    }

    FUNC_10(VAR_7);
    char *VAR_11 = FUNC_0(VAR_3);
    FUNC_2(VAR_1, "%s\n", VAR_11);

    network *VAR_12 = FUNC_4(VAR_3, VAR_4, 0);
    int VAR_13 = VAR_12->inputs;

    int VAR_14, VAR_15;
    for(VAR_14 = 0; VAR_14 < VAR_12->n; ++VAR_14) VAR_12->layers[VAR_14].temperature = VAR_6;
    int VAR_16 = 0;
    float *VAR_17 = FUNC_1(VAR_13, sizeof(float));
    float *VAR_18 = 0;

    while((VAR_16 = FUNC_3(VAR_2)) != VAR_0){
        VAR_17[VAR_16] = 1;
        VAR_18 = FUNC_5(VAR_12, VAR_17);
        VAR_17[VAR_16] = 0;
    }
    for(VAR_14 = 0; VAR_14 < VAR_5; ++VAR_14){
        for(VAR_15 = 0; VAR_15 < VAR_13; ++VAR_15){
            if (VAR_18[VAR_15] < .0001) VAR_18[VAR_15] = 0;
        }
        int VAR_19 = FUNC_9(VAR_18, VAR_13);
        if(VAR_16 == '.' && VAR_19 == '\n') break;
        VAR_16 = VAR_19;
        FUNC_6(VAR_16, VAR_9);

        VAR_17[VAR_16] = 1;
        VAR_18 = FUNC_5(VAR_12, VAR_17);
        VAR_17[VAR_16] = 0;
    }
    FUNC_7("\n");
}
