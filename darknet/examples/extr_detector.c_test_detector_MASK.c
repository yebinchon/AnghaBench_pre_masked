
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int n; TYPE_2__* layers; int h; int w; } ;
typedef TYPE_1__ network ;
typedef int list ;
struct TYPE_18__ {int classes; } ;
typedef TYPE_2__ layer ;
struct TYPE_19__ {float* data; int h; int w; } ;
typedef TYPE_3__ image ;
typedef int detection ;


 int FUNC_0 (int *,int,int ,float) ;
 int FUNC_1 (TYPE_3__,int *,int,float,char**,TYPE_3__**,int ) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char*,int,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_3__) ;
 char** FUNC_6 (char*) ;
 int * FUNC_7 (TYPE_1__*,int ,int ,float,float,int ,int,int*) ;
 TYPE_3__ FUNC_8 (TYPE_3__,int ,int ) ;
 TYPE_3__** FUNC_9 () ;
 TYPE_3__ FUNC_10 (char*,int ,int ) ;
 TYPE_1__* FUNC_11 (char*,char*,int ) ;
 int FUNC_12 (char*,int,int,int ) ;
 int FUNC_13 (TYPE_1__*,float*) ;
 char* FUNC_14 (int *,char*,char*) ;
 int FUNC_15 (char*,...) ;
 int * FUNC_16 (char*) ;
 int FUNC_17 (TYPE_3__,char*) ;
 int FUNC_18 (TYPE_1__*,int) ;
 int FUNC_19 (TYPE_3__,char*,int ) ;
 int FUNC_20 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_21 (char*,char*,int) ;
 int FUNC_22 (char*,char*) ;
 double FUNC_23 () ;

void FUNC_24(char *VAR_2, char *VAR_3, char *VAR_4, char *VAR_5, float VAR_6, float VAR_7, char *VAR_8, int VAR_9)
{
    list *VAR_10 = FUNC_16(VAR_2);
    char *VAR_11 = FUNC_14(VAR_10, "names", "data/names.list");
    char **VAR_12 = FUNC_6(VAR_11);

    image **VAR_13 = FUNC_9();
    network *VAR_14 = FUNC_11(VAR_3, VAR_4, 0);
    FUNC_18(VAR_14, 1);
    FUNC_20(2222222);
    double VAR_15;
    char VAR_16[256];
    char *VAR_17 = VAR_16;
    float VAR_18=.45;
    while(1){
        if(VAR_5){
            FUNC_21(VAR_17, VAR_5, 256);
        } else {
            FUNC_15("Enter Image Path: ");
            FUNC_2(VAR_1);
            VAR_17 = FUNC_3(VAR_17, 256, VAR_0);
            if(!VAR_17) return;
            FUNC_22(VAR_17, "\n");
        }
        image VAR_19 = FUNC_10(VAR_17,0,0);
        image VAR_20 = FUNC_8(VAR_19, VAR_14->w, VAR_14->h);




        layer VAR_21 = VAR_14->layers[VAR_14->n-1];


        float *VAR_22 = VAR_20.data;
        VAR_15=FUNC_23();
        FUNC_13(VAR_14, VAR_22);
        FUNC_15("%s: Predicted in %f seconds.\n", VAR_17, FUNC_23()-VAR_15);
        int VAR_23 = 0;
        detection *VAR_24 = FUNC_7(VAR_14, VAR_19.w, VAR_19.h, VAR_6, VAR_7, 0, 1, &VAR_23);


        if (VAR_18) FUNC_0(VAR_24, VAR_23, VAR_21.classes, VAR_18);
        FUNC_1(VAR_19, VAR_24, VAR_23, VAR_6, VAR_12, VAR_13, VAR_21.classes);
        FUNC_4(VAR_24, VAR_23);
        if(VAR_8){
            FUNC_17(VAR_19, VAR_8);
        }
        else{
            FUNC_17(VAR_19, "predictions");




        }

        FUNC_5(VAR_19);
        FUNC_5(VAR_20);
        if (VAR_5) break;
    }
}
