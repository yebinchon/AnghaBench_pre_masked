
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int w; int h; int hierarchy; int outputs; } ;
typedef TYPE_1__ network ;
struct TYPE_19__ {int size; } ;
typedef TYPE_2__ list ;
struct TYPE_20__ {int data; } ;
typedef TYPE_3__ image ;


 int FUNC_0 (int,int,float*,int,float*,int) ;
 void* FUNC_1 (int,int) ;
 TYPE_3__ FUNC_2 (TYPE_3__,int,int,int,int) ;
 int FUNC_3 (TYPE_3__) ;
 int FUNC_4 (float*) ;
 int FUNC_5 (TYPE_3__) ;
 int FUNC_6 (TYPE_2__*) ;
 char** FUNC_7 (char*) ;
 TYPE_2__* FUNC_8 (char*) ;
 int FUNC_9 (float*,int ,int ,int,int) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 TYPE_3__ FUNC_11 (char*,int,int) ;
 TYPE_1__* FUNC_12 (char*,char*,int ) ;
 float* FUNC_13 (TYPE_1__*,int ) ;
 int FUNC_14 (TYPE_2__*,char*,int) ;
 char* FUNC_15 (TYPE_2__*,char*,char*) ;
 int FUNC_16 (char*,int,float,int,float) ;
 TYPE_2__* FUNC_17 (char*) ;
 int FUNC_18 (TYPE_1__*,int) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (char*,char*) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (float*,int,int,int*) ;

void FUNC_23(char *VAR_0, char *VAR_1, char *VAR_2)
{
    int VAR_3, VAR_4;
    network *VAR_5 = FUNC_12(VAR_1, VAR_2, 0);
    FUNC_18(VAR_5, 1);
    FUNC_19(FUNC_21(0));

    list *VAR_6 = FUNC_17(VAR_0);

    char *VAR_7 = FUNC_15(VAR_6, "labels", "data/labels.list");
    char *VAR_8 = FUNC_15(VAR_6, "valid", "data/train.list");
    int VAR_9 = FUNC_14(VAR_6, "classes", 2);
    int VAR_10 = FUNC_14(VAR_6, "top", 1);

    char **VAR_11 = FUNC_7(VAR_7);
    list *VAR_12 = FUNC_8(VAR_8);

    char **VAR_13 = (char **)FUNC_10(VAR_12);
    int VAR_14 = VAR_12->size;
    FUNC_6(VAR_12);

    float VAR_15 = 0;
    float VAR_16 = 0;
    int *VAR_17 = FUNC_1(VAR_10, sizeof(int));

    for(VAR_3 = 0; VAR_3 < VAR_14; ++VAR_3){
        int VAR_18 = -1;
        char *VAR_19 = VAR_13[VAR_3];
        for(VAR_4 = 0; VAR_4 < VAR_9; ++VAR_4){
            if(FUNC_20(VAR_19, VAR_11[VAR_4])){
                VAR_18 = VAR_4;
                break;
            }
        }
        int VAR_20 = VAR_5->w;
        int VAR_21 = VAR_5->h;
        int VAR_22 = 32;
        image VAR_23 = FUNC_11(VAR_13[VAR_3], VAR_20+VAR_22, VAR_21+VAR_22);
        image VAR_24[10];
        VAR_24[0] = FUNC_2(VAR_23, -VAR_22, -VAR_22, VAR_20, VAR_21);
        VAR_24[1] = FUNC_2(VAR_23, VAR_22, -VAR_22, VAR_20, VAR_21);
        VAR_24[2] = FUNC_2(VAR_23, 0, 0, VAR_20, VAR_21);
        VAR_24[3] = FUNC_2(VAR_23, -VAR_22, VAR_22, VAR_20, VAR_21);
        VAR_24[4] = FUNC_2(VAR_23, VAR_22, VAR_22, VAR_20, VAR_21);
        FUNC_3(VAR_23);
        VAR_24[5] = FUNC_2(VAR_23, -VAR_22, -VAR_22, VAR_20, VAR_21);
        VAR_24[6] = FUNC_2(VAR_23, VAR_22, -VAR_22, VAR_20, VAR_21);
        VAR_24[7] = FUNC_2(VAR_23, 0, 0, VAR_20, VAR_21);
        VAR_24[8] = FUNC_2(VAR_23, -VAR_22, VAR_22, VAR_20, VAR_21);
        VAR_24[9] = FUNC_2(VAR_23, VAR_22, VAR_22, VAR_20, VAR_21);
        float *VAR_25 = FUNC_1(VAR_9, sizeof(float));
        for(VAR_4 = 0; VAR_4 < 10; ++VAR_4){
            float *VAR_26 = FUNC_13(VAR_5, VAR_24[VAR_4].data);
            if(VAR_5->hierarchy) FUNC_9(VAR_26, VAR_5->outputs, VAR_5->hierarchy, 1, 1);
            FUNC_0(VAR_9, 1, VAR_26, 1, VAR_25, 1);
            FUNC_5(VAR_24[VAR_4]);
        }
        FUNC_5(VAR_23);
        FUNC_22(VAR_25, VAR_9, VAR_10, VAR_17);
        FUNC_4(VAR_25);
        if(VAR_17[0] == VAR_18) VAR_15 += 1;
        for(VAR_4 = 0; VAR_4 < VAR_10; ++VAR_4){
            if(VAR_17[VAR_4] == VAR_18) VAR_16 += 1;
        }

        FUNC_16("%d: top 1: %f, top %d: %f\n", VAR_3, VAR_15/(VAR_3+1), VAR_10, VAR_16/(VAR_3+1));
    }
}
