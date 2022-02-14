
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int h; int w; } ;
typedef TYPE_1__ network ;
struct TYPE_16__ {float* data; } ;
typedef TYPE_2__ image ;
typedef scalar_t__ clock_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*,int,int ) ;
 int FUNC_3 (TYPE_2__) ;
 TYPE_2__ FUNC_4 (TYPE_1__*) ;
 TYPE_2__ FUNC_5 (TYPE_2__,int ,int ) ;
 TYPE_2__ FUNC_6 (char*,int ,int ) ;
 TYPE_1__* FUNC_7 (char*,char*,int ) ;
 TYPE_2__ FUNC_8 (TYPE_2__) ;
 float* FUNC_9 (TYPE_1__*,float*) ;
 int FUNC_10 (char*,...) ;
 double FUNC_11 (scalar_t__) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_2__,char*,int) ;
 int FUNC_14 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (char*,char*) ;

void FUNC_17(char *VAR_2, char *VAR_3, char *VAR_4, char *VAR_5)
{
    network *VAR_6 = FUNC_7(VAR_3, VAR_4, 0);
    FUNC_12(VAR_6, 1);
    FUNC_14(2222222);

    clock_t VAR_7;
    char VAR_8[256];
    char *VAR_9 = VAR_8;
    while(1){
        if(VAR_5){
            FUNC_15(VAR_9, VAR_5, 256);
        }else{
            FUNC_10("Enter Image Path: ");
            FUNC_1(VAR_1);
            VAR_9 = FUNC_2(VAR_9, 256, VAR_0);
            if(!VAR_9) return;
            FUNC_16(VAR_9, "\n");
        }
        image VAR_10 = FUNC_6(VAR_9, 0, 0);
        image VAR_11 = FUNC_5(VAR_10, VAR_6->w, VAR_6->h);

        float *VAR_12 = VAR_11.data;
        VAR_7=FUNC_0();
        float *VAR_13 = FUNC_9(VAR_6, VAR_12);
        image VAR_14 = FUNC_4(VAR_6);
        image VAR_15 = FUNC_8(VAR_14);
        FUNC_10("Predicted: %f\n", VAR_13[0]);
        FUNC_10("%s: Predicted in %f seconds.\n", VAR_9, FUNC_11(FUNC_0()-VAR_7));
        FUNC_13(VAR_11, "orig", 1);
        FUNC_13(VAR_15, "pred", 0);
        FUNC_3(VAR_10);
        FUNC_3(VAR_11);
        FUNC_3(VAR_15);
        if (VAR_5) break;
    }
}
