
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef int network ;
struct TYPE_10__ {int w; int h; int c; float* data; } ;
typedef TYPE_1__ image ;
typedef scalar_t__ clock_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (char*,int,int ) ;
 int FUNC_5 (TYPE_1__) ;
 TYPE_1__ FUNC_6 (int ) ;
 TYPE_1__ FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int ,float*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,...) ;
 TYPE_1__ FUNC_12 (TYPE_1__,int,int) ;
 int FUNC_13 (int *,int,int) ;
 double FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (TYPE_1__,char*) ;
 int FUNC_17 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_18 (char*,char*,int) ;
 int FUNC_19 (char*,char*) ;
 TYPE_1__ FUNC_20 (TYPE_1__,double) ;

void FUNC_21(char *VAR_2, char *VAR_3, char *VAR_4)
{
    network VAR_5 = FUNC_10(VAR_2);
    if(VAR_3){
        FUNC_8(&VAR_5, VAR_3);
    }
    FUNC_15(&VAR_5, 1);
    FUNC_17(2222222);
    clock_t VAR_6;
    char VAR_7[256];
    char *VAR_8 = VAR_7;
    while(1){
        if(VAR_4){
            FUNC_18(VAR_8, VAR_4, 256);
        }else{
            FUNC_11("Enter Image Path: ");
            FUNC_3(VAR_1);
            VAR_8 = FUNC_4(VAR_8, 256, VAR_0);
            if(!VAR_8) return;
            FUNC_19(VAR_8, "\n");
        }

        image VAR_9 = FUNC_7(VAR_8, 0, 0);
        FUNC_13(&VAR_5, VAR_9.w, VAR_9.h);
        FUNC_11("%d %d %d\n", VAR_9.h, VAR_9.w, VAR_9.c);
        float *VAR_10 = VAR_9.data;
        VAR_6=FUNC_0();
        FUNC_9(VAR_5, VAR_10);
        FUNC_11("%s: Predicted in %f seconds.\n", VAR_8, FUNC_14(FUNC_0()-VAR_6));
        image VAR_11 = FUNC_6(VAR_5);

        image VAR_12 = FUNC_12(VAR_11, VAR_9.w, VAR_9.h);
        image VAR_13 = FUNC_20(VAR_12, .5);
        VAR_11 = VAR_13;

        FUNC_16(VAR_11, "prediction");
        FUNC_16(VAR_9, "orig");





        FUNC_5(VAR_12);
        FUNC_5(VAR_13);
        FUNC_5(VAR_9);
        if (VAR_4) break;
    }
}
