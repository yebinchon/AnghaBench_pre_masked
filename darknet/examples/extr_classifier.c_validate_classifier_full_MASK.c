
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int w; int hierarchy; int outputs; } ;
typedef TYPE_1__ network ;
struct TYPE_19__ {int size; } ;
typedef TYPE_2__ list ;
struct TYPE_20__ {int data; int h; int w; } ;
typedef TYPE_3__ image ;


 int* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__) ;
 int FUNC_2 (TYPE_2__*) ;
 char** FUNC_3 (char*) ;
 TYPE_2__* FUNC_4 (char*) ;
 int FUNC_5 (float*,int ,int ,int,int) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 TYPE_3__ FUNC_7 (char*,int ,int ) ;
 TYPE_1__* FUNC_8 (char*,char*,int ) ;
 float* FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_2__*,char*,int) ;
 char* FUNC_11 (TYPE_2__*,char*,char*) ;
 int FUNC_12 (char*,int,float,int,float) ;
 TYPE_2__* FUNC_13 (char*) ;
 TYPE_3__ FUNC_14 (TYPE_3__,int) ;
 int FUNC_15 (TYPE_1__*,int ,int ) ;
 int FUNC_16 (TYPE_1__*,int) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (char*,char*) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (float*,int,int,int*) ;

void FUNC_21(char *VAR_0, char *VAR_1, char *VAR_2)
{
    int VAR_3, VAR_4;
    network *VAR_5 = FUNC_8(VAR_1, VAR_2, 0);
    FUNC_16(VAR_5, 1);
    FUNC_17(FUNC_19(0));

    list *VAR_6 = FUNC_13(VAR_0);

    char *VAR_7 = FUNC_11(VAR_6, "labels", "data/labels.list");
    char *VAR_8 = FUNC_11(VAR_6, "valid", "data/train.list");
    int VAR_9 = FUNC_10(VAR_6, "classes", 2);
    int VAR_10 = FUNC_10(VAR_6, "top", 1);

    char **VAR_11 = FUNC_3(VAR_7);
    list *VAR_12 = FUNC_4(VAR_8);

    char **VAR_13 = (char **)FUNC_6(VAR_12);
    int VAR_14 = VAR_12->size;
    FUNC_2(VAR_12);

    float VAR_15 = 0;
    float VAR_16 = 0;
    int *VAR_17 = FUNC_0(VAR_10, sizeof(int));

    int VAR_18 = VAR_5->w;
    for(VAR_3 = 0; VAR_3 < VAR_14; ++VAR_3){
        int VAR_19 = -1;
        char *VAR_20 = VAR_13[VAR_3];
        for(VAR_4 = 0; VAR_4 < VAR_9; ++VAR_4){
            if(FUNC_18(VAR_20, VAR_11[VAR_4])){
                VAR_19 = VAR_4;
                break;
            }
        }
        image VAR_21 = FUNC_7(VAR_13[VAR_3], 0, 0);
        image VAR_22 = FUNC_14(VAR_21, VAR_18);
        FUNC_15(VAR_5, VAR_22.w, VAR_22.h);



        float *VAR_23 = FUNC_9(VAR_5, VAR_22.data);
        if(VAR_5->hierarchy) FUNC_5(VAR_23, VAR_5->outputs, VAR_5->hierarchy, 1, 1);

        FUNC_1(VAR_21);
        FUNC_1(VAR_22);
        FUNC_20(VAR_23, VAR_9, VAR_10, VAR_17);

        if(VAR_17[0] == VAR_19) VAR_15 += 1;
        for(VAR_4 = 0; VAR_4 < VAR_10; ++VAR_4){
            if(VAR_17[VAR_4] == VAR_19) VAR_16 += 1;
        }

        FUNC_12("%d: top 1: %f, top %d: %f\n", VAR_3, VAR_15/(VAR_3+1), VAR_10, VAR_16/(VAR_3+1));
    }
}
