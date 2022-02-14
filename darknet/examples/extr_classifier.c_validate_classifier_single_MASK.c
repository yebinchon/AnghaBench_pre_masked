
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int hierarchy; int outputs; int h; int w; } ;
typedef TYPE_1__ network ;
struct TYPE_18__ {int size; } ;
typedef TYPE_2__ list ;
struct TYPE_19__ {int data; } ;
typedef TYPE_3__ image ;


 int* FUNC_0 (int,int) ;
 TYPE_3__ FUNC_1 (TYPE_3__,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_3__) ;
 int FUNC_4 (TYPE_2__*) ;
 char** FUNC_5 (char*) ;
 TYPE_2__* FUNC_6 (char*) ;
 int FUNC_7 (float*,int ,int ,int,int) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 TYPE_3__ FUNC_9 (char*,int ,int ) ;
 TYPE_1__* FUNC_10 (char*,char*,int ) ;
 float* FUNC_11 (TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_2__*,char*,int) ;
 char* FUNC_13 (TYPE_2__*,char*,char*) ;
 int FUNC_14 (char*,...) ;
 TYPE_2__* FUNC_15 (char*) ;
 int FUNC_16 (TYPE_1__*,int) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (char*,char*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (float*,int,int,int*) ;

void FUNC_21(char *VAR_0, char *VAR_1, char *VAR_2)
{
    int VAR_3, VAR_4;
    network *VAR_5 = FUNC_10(VAR_1, VAR_2, 0);
    FUNC_16(VAR_5, 1);
    FUNC_17(FUNC_19(0));

    list *VAR_6 = FUNC_15(VAR_0);

    char *VAR_7 = FUNC_13(VAR_6, "labels", "data/labels.list");
    char *VAR_8 = FUNC_13(VAR_6, "leaves", 0);
    if(VAR_8) FUNC_2(VAR_5->hierarchy, VAR_8);
    char *VAR_9 = FUNC_13(VAR_6, "valid", "data/train.list");
    int VAR_10 = FUNC_12(VAR_6, "classes", 2);
    int VAR_11 = FUNC_12(VAR_6, "top", 1);

    char **VAR_12 = FUNC_5(VAR_7);
    list *VAR_13 = FUNC_6(VAR_9);

    char **VAR_14 = (char **)FUNC_8(VAR_13);
    int VAR_15 = VAR_13->size;
    FUNC_4(VAR_13);

    float VAR_16 = 0;
    float VAR_17 = 0;
    int *VAR_18 = FUNC_0(VAR_11, sizeof(int));

    for(VAR_3 = 0; VAR_3 < VAR_15; ++VAR_3){
        int VAR_19 = -1;
        char *VAR_20 = VAR_14[VAR_3];
        for(VAR_4 = 0; VAR_4 < VAR_10; ++VAR_4){
            if(FUNC_18(VAR_20, VAR_12[VAR_4])){
                VAR_19 = VAR_4;
                break;
            }
        }
        image VAR_21 = FUNC_9(VAR_14[VAR_3], 0, 0);
        image VAR_22 = FUNC_1(VAR_21, VAR_5->w, VAR_5->h);




        float *VAR_23 = FUNC_11(VAR_5, VAR_22.data);
        if(VAR_5->hierarchy) FUNC_7(VAR_23, VAR_5->outputs, VAR_5->hierarchy, 1, 1);

        FUNC_3(VAR_21);
        FUNC_3(VAR_22);
        FUNC_20(VAR_23, VAR_10, VAR_11, VAR_18);

        if(VAR_18[0] == VAR_19) VAR_16 += 1;
        for(VAR_4 = 0; VAR_4 < VAR_11; ++VAR_4){
            if(VAR_18[VAR_4] == VAR_19) VAR_17 += 1;
        }

        FUNC_14("%s, %d, %f, %f, \n", VAR_14[VAR_3], VAR_19, VAR_23[0], VAR_23[1]);
        FUNC_14("%d: top 1: %f, top %d: %f\n", VAR_3, VAR_16/(VAR_3+1), VAR_11, VAR_17/(VAR_3+1));
    }
}
