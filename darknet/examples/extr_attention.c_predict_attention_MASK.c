
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int outputs; int hierarchy; int h; int w; } ;
typedef TYPE_1__ network ;
typedef int list ;
struct TYPE_11__ {float* data; } ;
typedef TYPE_2__ image ;
typedef scalar_t__ clock_t ;


 int* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char*,int,int ) ;
 int FUNC_4 (int ,char*,char*,double) ;
 int FUNC_5 (TYPE_2__) ;
 char** FUNC_6 (char*) ;
 int FUNC_7 (float*,int ,int ,int,int) ;
 TYPE_2__ FUNC_8 (TYPE_2__,int ,int ) ;
 TYPE_2__ FUNC_9 (char*,int ,int ) ;
 TYPE_1__* FUNC_10 (char*,char*,int ) ;
 float* FUNC_11 (TYPE_1__*,float*) ;
 int FUNC_12 (int *,char*,int) ;
 char* FUNC_13 (int *,char*,char*) ;
 int FUNC_14 (char*,...) ;
 int * FUNC_15 (char*) ;
 double FUNC_16 (scalar_t__) ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_19 (char*,char*,int) ;
 int FUNC_20 (char*,char*) ;
 int FUNC_21 (float*,int ,int,int*) ;

void FUNC_22(char *VAR_3, char *VAR_4, char *VAR_5, char *VAR_6, int VAR_7)
{
    network *VAR_8 = FUNC_10(VAR_4, VAR_5, 0);
    FUNC_17(VAR_8, 1);
    FUNC_18(2222222);

    list *VAR_9 = FUNC_15(VAR_3);

    char *VAR_10 = FUNC_13(VAR_9, "names", 0);
    if(!VAR_10) VAR_10 = FUNC_13(VAR_9, "labels", "data/labels.list");
    if(VAR_7 == 0) VAR_7 = FUNC_12(VAR_9, "top", 1);

    int VAR_11 = 0;
    char **VAR_12 = FUNC_6(VAR_10);
    clock_t VAR_13;
    int *VAR_14 = FUNC_0(VAR_7, sizeof(int));
    char VAR_15[256];
    char *VAR_16 = VAR_15;
    while(1){
        if(VAR_6){
            FUNC_19(VAR_16, VAR_6, 256);
        }else{
            FUNC_14("Enter Image Path: ");
            FUNC_2(VAR_2);
            VAR_16 = FUNC_3(VAR_16, 256, VAR_1);
            if(!VAR_16) return;
            FUNC_20(VAR_16, "\n");
        }
        image VAR_17 = FUNC_9(VAR_16, 0, 0);
        image VAR_18 = FUNC_8(VAR_17, VAR_8->w, VAR_8->h);



        float *VAR_19 = VAR_18.data;
        VAR_13=FUNC_1();
        float *VAR_20 = FUNC_11(VAR_8, VAR_19);
        if(VAR_8->hierarchy) FUNC_7(VAR_20, VAR_8->outputs, VAR_8->hierarchy, 1, 1);
        FUNC_21(VAR_20, VAR_8->outputs, VAR_7, VAR_14);
        FUNC_4(VAR_0, "%s: Predicted in %f seconds.\n", VAR_16, FUNC_16(FUNC_1()-VAR_13));
        for(VAR_11 = 0; VAR_11 < VAR_7; ++VAR_11){
            int VAR_21 = VAR_14[VAR_11];


            FUNC_14("%5.2f%%: %s\n", VAR_20[VAR_21]*100, VAR_12[VAR_21]);
        }
        if(VAR_18.data != VAR_17.data) FUNC_5(VAR_18);
        FUNC_5(VAR_17);
        if (VAR_6) break;
    }
}
