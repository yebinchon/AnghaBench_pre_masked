
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int h; int w; } ;
typedef TYPE_1__ network ;
struct TYPE_11__ {float* data; } ;
typedef TYPE_2__ image ;
typedef scalar_t__ clock_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (char*,int,int ) ;
 int FUNC_3 (TYPE_2__) ;
 TYPE_2__ FUNC_4 (TYPE_2__,int ,int ) ;
 TYPE_2__ FUNC_5 (char*,int ,int ) ;
 TYPE_1__* FUNC_6 (char*,char*,int ) ;
 float* FUNC_7 (TYPE_1__*,float*) ;
 int FUNC_8 (char*,...) ;
 double FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (char*,char*) ;

void FUNC_14(char *VAR_2, char *VAR_3, char *VAR_4)
{
    network *VAR_5 = FUNC_6(VAR_2, VAR_3, 0);
    FUNC_10(VAR_5, 1);
    FUNC_11(2222222);

    clock_t VAR_6;
    char VAR_7[256];
    char *VAR_8 = VAR_7;
    while(1){
        if(VAR_4){
            FUNC_12(VAR_8, VAR_4, 256);
        }else{
            FUNC_8("Enter Image Path: ");
            FUNC_1(VAR_1);
            VAR_8 = FUNC_2(VAR_8, 256, VAR_0);
            if(!VAR_8) return;
            FUNC_13(VAR_8, "\n");
        }
        image VAR_9 = FUNC_5(VAR_8, 0, 0);
        image VAR_10 = FUNC_4(VAR_9, VAR_5->w, VAR_5->h);

        float *VAR_11 = VAR_10.data;
        VAR_6=FUNC_0();
        float *VAR_12 = FUNC_7(VAR_5, VAR_11);
        FUNC_8("Predicted: %f\n", VAR_12[0]);
        FUNC_8("%s: Predicted in %f seconds.\n", VAR_8, FUNC_9(FUNC_0()-VAR_6));
        FUNC_3(VAR_9);
        FUNC_3(VAR_10);
        if (VAR_4) break;
    }
}
