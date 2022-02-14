
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int scales ;
struct TYPE_19__ {int hierarchy; int outputs; } ;
typedef TYPE_1__ network ;
struct TYPE_20__ {int size; } ;
typedef TYPE_2__ list ;
struct TYPE_21__ {scalar_t__ data; int h; int w; } ;
typedef TYPE_3__ image ;


 int FUNC_0 (int,int,float*,int,float*,int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__) ;
 int FUNC_3 (float*) ;
 int FUNC_4 (TYPE_3__) ;
 int FUNC_5 (TYPE_2__*) ;
 char** FUNC_6 (char*) ;
 TYPE_2__* FUNC_7 (char*) ;
 int FUNC_8 (float*,int ,int ,int,int) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 TYPE_3__ FUNC_10 (char*,int ,int ) ;
 TYPE_1__* FUNC_11 (char*,char*,int ) ;
 float* FUNC_12 (TYPE_1__*,scalar_t__) ;
 int FUNC_13 (TYPE_2__*,char*,int) ;
 char* FUNC_14 (TYPE_2__*,char*,char*) ;
 int FUNC_15 (char*,int,float,int,float) ;
 TYPE_2__* FUNC_16 (char*) ;
 TYPE_3__ FUNC_17 (TYPE_3__,int) ;
 int FUNC_18 (TYPE_1__*,int ,int ) ;
 int FUNC_19 (TYPE_1__*,int) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (char*,char*) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (float*,int,int,int*) ;

void FUNC_24(char *VAR_0, char *VAR_1, char *VAR_2)
{
    int VAR_3, VAR_4;
    network *VAR_5 = FUNC_11(VAR_1, VAR_2, 0);
    FUNC_19(VAR_5, 1);
    FUNC_20(FUNC_22(0));

    list *VAR_6 = FUNC_16(VAR_0);

    char *VAR_7 = FUNC_14(VAR_6, "labels", "data/labels.list");
    char *VAR_8 = FUNC_14(VAR_6, "valid", "data/train.list");
    int VAR_9 = FUNC_13(VAR_6, "classes", 2);
    int VAR_10 = FUNC_13(VAR_6, "top", 1);

    char **VAR_11 = FUNC_6(VAR_7);
    list *VAR_12 = FUNC_7(VAR_8);

    int VAR_13[] = {224, 256, 288, 320};
    int VAR_14 = sizeof(VAR_13)/sizeof(VAR_13[0]);

    char **VAR_15 = (char **)FUNC_9(VAR_12);
    int VAR_16 = VAR_12->size;
    FUNC_5(VAR_12);

    float VAR_17 = 0;
    float VAR_18 = 0;
    int *VAR_19 = FUNC_1(VAR_10, sizeof(int));

    for(VAR_3 = 0; VAR_3 < VAR_16; ++VAR_3){
        int VAR_20 = -1;
        char *VAR_21 = VAR_15[VAR_3];
        for(VAR_4 = 0; VAR_4 < VAR_9; ++VAR_4){
            if(FUNC_21(VAR_21, VAR_11[VAR_4])){
                VAR_20 = VAR_4;
                break;
            }
        }
        float *VAR_22 = FUNC_1(VAR_9, sizeof(float));
        image VAR_23 = FUNC_10(VAR_15[VAR_3], 0, 0);
        for(VAR_4 = 0; VAR_4 < VAR_14; ++VAR_4){
            image VAR_24 = FUNC_17(VAR_23, VAR_13[VAR_4]);
            FUNC_18(VAR_5, VAR_24.w, VAR_24.h);
            float *VAR_25 = FUNC_12(VAR_5, VAR_24.data);
            if(VAR_5->hierarchy) FUNC_8(VAR_25, VAR_5->outputs, VAR_5->hierarchy, 1 , 1);
            FUNC_0(VAR_9, 1, VAR_25, 1, VAR_22, 1);
            FUNC_2(VAR_24);
            VAR_25 = FUNC_12(VAR_5, VAR_24.data);
            FUNC_0(VAR_9, 1, VAR_25, 1, VAR_22, 1);
            if(VAR_24.data != VAR_23.data) FUNC_4(VAR_24);
        }
        FUNC_4(VAR_23);
        FUNC_23(VAR_22, VAR_9, VAR_10, VAR_19);
        FUNC_3(VAR_22);
        if(VAR_19[0] == VAR_20) VAR_17 += 1;
        for(VAR_4 = 0; VAR_4 < VAR_10; ++VAR_4){
            if(VAR_19[VAR_4] == VAR_20) VAR_18 += 1;
        }

        FUNC_15("%d: top 1: %f, top %d: %f\n", VAR_3, VAR_17/(VAR_3+1), VAR_10, VAR_18/(VAR_3+1));
    }
}
