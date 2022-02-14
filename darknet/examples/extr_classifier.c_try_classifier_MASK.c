
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
typedef int list ;
struct TYPE_15__ {int c; double* rolling_mean; double* rolling_variance; double* scales; double* output; int outputs; int output_gpu; } ;
typedef TYPE_2__ layer ;
struct TYPE_16__ {int w; int h; float* data; } ;
typedef TYPE_3__ image ;
typedef scalar_t__ clock_t ;


 int* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 () ;
 TYPE_3__ FUNC_2 (TYPE_3__,int,int,int,int) ;
 int FUNC_3 (int ,double*,int) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (char*,int,int ) ;
 int FUNC_6 (TYPE_3__) ;
 char** FUNC_7 (char*) ;
 TYPE_3__ FUNC_8 (char*,int ,int ) ;
 TYPE_1__* FUNC_9 (char*,char*,int ) ;
 float* FUNC_10 (TYPE_1__*,float*) ;
 int FUNC_11 (float*,float*,float*,int,int,int) ;
 int FUNC_12 (int *,char*,int) ;
 char* FUNC_13 (int *,char*,char*) ;
 int FUNC_14 (char*,...) ;
 int * FUNC_15 (char*) ;
 TYPE_3__ FUNC_16 (TYPE_3__,int) ;
 double FUNC_17 (scalar_t__) ;
 int FUNC_18 (TYPE_1__*,int) ;
 int FUNC_19 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_20 (char*,char*,int) ;
 int FUNC_21 (char*,char*) ;
 int FUNC_22 (TYPE_1__*,int,int*) ;

void FUNC_23(char *VAR_2, char *VAR_3, char *VAR_4, char *VAR_5, int VAR_6)
{
    network *VAR_7 = FUNC_9(VAR_3, VAR_4, 0);
    FUNC_18(VAR_7, 1);
    FUNC_19(2222222);

    list *VAR_8 = FUNC_15(VAR_2);

    char *VAR_9 = FUNC_13(VAR_8, "names", 0);
    if(!VAR_9) VAR_9 = FUNC_13(VAR_8, "labels", "data/labels.list");
    int VAR_10 = FUNC_12(VAR_8, "top", 1);

    int VAR_11 = 0;
    char **VAR_12 = FUNC_7(VAR_9);
    clock_t VAR_13;
    int *VAR_14 = FUNC_0(VAR_10, sizeof(int));
    char VAR_15[256];
    char *VAR_16 = VAR_15;
    while(1){
        if(VAR_5){
            FUNC_20(VAR_16, VAR_5, 256);
        }else{
            FUNC_14("Enter Image Path: ");
            FUNC_4(VAR_1);
            VAR_16 = FUNC_5(VAR_16, 256, VAR_0);
            if(!VAR_16) return;
            FUNC_21(VAR_16, "\n");
        }
        image VAR_17 = FUNC_8(VAR_16, 0, 0);
        image VAR_18 = FUNC_16(VAR_17, 256);
        image VAR_19 = FUNC_2(VAR_18, (VAR_18.w - 224 - 1)/2 + 1, (VAR_18.h - 224 - 1)/2 + 1, 224, 224);
        float VAR_20[] = {0.48263312050943, 0.45230225481413, 0.40099074308742};
        float VAR_21[] = {0.22590347483426, 0.22120921437787, 0.22103996251583};
        float VAR_22[3];
        VAR_22[0] = VAR_21[0]*VAR_21[0];
        VAR_22[1] = VAR_21[1]*VAR_21[1];
        VAR_22[2] = VAR_21[2]*VAR_21[2];

        FUNC_11(VAR_19.data, VAR_20, VAR_22, 1, 3, VAR_19.w*VAR_19.h);

        float *VAR_23 = VAR_19.data;
        VAR_13=FUNC_1();
        float *VAR_24 = FUNC_10(VAR_7, VAR_23);

        layer VAR_25 = VAR_7->layers[VAR_6];
        for(VAR_11 = 0; VAR_11 < VAR_25.c; ++VAR_11){
            if(VAR_25.rolling_mean) FUNC_14("%f %f %f\n", VAR_25.rolling_mean[VAR_11], VAR_25.rolling_variance[VAR_11], VAR_25.scales[VAR_11]);
        }



        for(VAR_11 = 0; VAR_11 < VAR_25.outputs; ++VAR_11){
            FUNC_14("%f\n", VAR_25.output[VAR_11]);
        }
        FUNC_22(VAR_7, VAR_10, VAR_14);
        FUNC_14("%s: Predicted in %f seconds.\n", VAR_16, FUNC_17(FUNC_1()-VAR_13));
        for(VAR_11 = 0; VAR_11 < VAR_10; ++VAR_11){
            int VAR_26 = VAR_14[VAR_11];
            FUNC_14("%s: %f\n", VAR_12[VAR_26], VAR_24[VAR_26]);
        }
        FUNC_6(VAR_19);
        if (VAR_5) break;
    }
}
