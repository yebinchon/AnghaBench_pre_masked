
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int n; int h; int w; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_18__ {int side; int n; int classes; } ;
typedef TYPE_2__ layer ;
struct TYPE_19__ {float* data; } ;
typedef TYPE_3__ image ;
typedef int detection ;
typedef scalar_t__ clock_t ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,int,int ,float) ;
 int FUNC_2 (TYPE_3__,int *,int,float,int ,TYPE_3__**,int) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_3__) ;
 int * FUNC_7 (TYPE_1__*,int,int,float,int ,int ,int ,int*) ;
 TYPE_3__** FUNC_8 () ;
 TYPE_3__ FUNC_9 (char*,int ,int ) ;
 TYPE_1__* FUNC_10 (char*,char*,int ) ;
 int FUNC_11 (TYPE_1__*,float*) ;
 int FUNC_12 (char*,...) ;
 TYPE_3__ FUNC_13 (TYPE_3__,int ,int ) ;
 int FUNC_14 (TYPE_3__,char*) ;
 double FUNC_15 (scalar_t__) ;
 int FUNC_16 (TYPE_1__*,int) ;
 int FUNC_17 (TYPE_3__,char*,int ) ;
 int FUNC_18 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_19 (char*,char*,int) ;
 int FUNC_20 (char*,char*) ;

void FUNC_21(char *VAR_3, char *VAR_4, char *VAR_5, float VAR_6)
{
    image **VAR_7 = FUNC_8();
    network *VAR_8 = FUNC_10(VAR_3, VAR_4, 0);
    layer VAR_9 = VAR_8->layers[VAR_8->n-1];
    FUNC_16(VAR_8, 1);
    FUNC_18(2222222);
    float VAR_10 = .4;
    clock_t VAR_11;
    char VAR_12[256];
    char *VAR_13 = VAR_12;
    while(1){
        if(VAR_5){
            FUNC_19(VAR_13, VAR_5, 256);
        } else {
            FUNC_12("Enter Image Path: ");
            FUNC_3(VAR_2);
            VAR_13 = FUNC_4(VAR_13, 256, VAR_1);
            if(!VAR_13) return;
            FUNC_20(VAR_13, "\n");
        }
        image VAR_14 = FUNC_9(VAR_13,0,0);
        image VAR_15 = FUNC_13(VAR_14, VAR_8->w, VAR_8->h);
        float *VAR_16 = VAR_15.data;
        VAR_11=FUNC_0();
        FUNC_11(VAR_8, VAR_16);
        FUNC_12("%s: Predicted in %f seconds.\n", VAR_13, FUNC_15(FUNC_0()-VAR_11));

        int VAR_17 = 0;
        detection *VAR_18 = FUNC_7(VAR_8, 1, 1, VAR_6, 0, 0, 0, &VAR_17);
        if (VAR_10) FUNC_1(VAR_18, VAR_9.side*VAR_9.side*VAR_9.n, VAR_9.classes, VAR_10);

        FUNC_2(VAR_14, VAR_18, VAR_9.side*VAR_9.side*VAR_9.n, VAR_6, VAR_0, VAR_7, 80);
        FUNC_14(VAR_14, "prediction");
        FUNC_17(VAR_14, "predictions", 0);
        FUNC_5(VAR_18, VAR_17);
        FUNC_6(VAR_14);
        FUNC_6(VAR_15);
        if (VAR_5) break;
    }
}
