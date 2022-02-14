
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int inputs; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_7__ {double* output; int outputs; int output_gpu; } ;
typedef TYPE_2__ layer ;


 char* FUNC_0 (char*) ;
 float* FUNC_1 (int,int) ;
 int FUNC_2 (int ,double*,int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,char*) ;
 TYPE_1__* FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (TYPE_1__*,float*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

void FUNC_11(char *VAR_2, char *VAR_3, char *VAR_4)
{
    char *VAR_5 = FUNC_0(VAR_2);
    FUNC_4(VAR_0, "%s\n", VAR_5);

    network *VAR_6 = FUNC_5(VAR_2, VAR_3, 0);
    int VAR_7 = VAR_6->inputs;

    int VAR_8;
    int VAR_9 = FUNC_10(VAR_4);
    float *VAR_10 = FUNC_1(VAR_7, sizeof(float));
    int VAR_11;
    char *VAR_12;
    while((VAR_12=FUNC_3(VAR_1)) != 0){
        FUNC_8(VAR_6, 0);
        for(VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11){
            VAR_8 = VAR_4[VAR_11];
            VAR_10[(int)VAR_8] = 1;
            FUNC_6(VAR_6, VAR_10);
            VAR_10[(int)VAR_8] = 0;
        }
        FUNC_9(VAR_12);
        int VAR_13 = FUNC_10(VAR_12);
        for(VAR_11 = 0; VAR_11 < VAR_13; ++VAR_11){
            VAR_8 = VAR_12[VAR_11];
            VAR_10[(int)VAR_8] = 1;
            FUNC_6(VAR_6, VAR_10);
            VAR_10[(int)VAR_8] = 0;
        }
        VAR_8 = ' ';
        VAR_10[(int)VAR_8] = 1;
        FUNC_6(VAR_6, VAR_10);
        VAR_10[(int)VAR_8] = 0;

        layer VAR_14 = VAR_6->layers[0];



        FUNC_7("%s", VAR_12);
        for(VAR_11 = 0; VAR_11 < VAR_14.outputs; ++VAR_11){
            FUNC_7(",%g", VAR_14.output[VAR_11]);
        }
        FUNC_7("\n");
    }
}
