
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {int w; int h; int hierarchy; int outputs; } ;
typedef TYPE_1__ network ;
struct TYPE_23__ {int size; } ;
typedef TYPE_2__ list ;
struct TYPE_24__ {int w; int h; scalar_t__ data; } ;
typedef TYPE_3__ image ;


 int FUNC_0 (int,int,float*,int,float*,int) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int,float*,int,float*,int) ;
 TYPE_3__ FUNC_4 (TYPE_3__,int,int,int,int) ;
 int FUNC_5 (TYPE_3__) ;
 int FUNC_6 (TYPE_2__*) ;
 char** FUNC_7 (char*) ;
 TYPE_2__* FUNC_8 (char*) ;
 int FUNC_9 (float*,int ,int ,int,int) ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 TYPE_3__ FUNC_11 (char*,int ,int ) ;
 TYPE_1__* FUNC_12 (char*,char*,int ) ;
 float* FUNC_13 (TYPE_1__*,scalar_t__) ;
 int FUNC_14 (TYPE_2__*,char*,int) ;
 char* FUNC_15 (TYPE_2__*,char*,char*) ;
 int FUNC_16 (char*,...) ;
 TYPE_2__* FUNC_17 (char*) ;
 TYPE_3__ FUNC_18 (TYPE_3__,int,int) ;
 TYPE_3__ FUNC_19 (TYPE_3__,int) ;
 int FUNC_20 (TYPE_1__*,int) ;
 int FUNC_21 (TYPE_3__,char*) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (char*,char*) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (float*,int,int,int*) ;

void FUNC_26(char *VAR_0, char *VAR_1, char *VAR_2)
{
    int VAR_3, VAR_4;
    network *VAR_5 = FUNC_12(VAR_1, VAR_2, 0);
    FUNC_20(VAR_5, 1);
    FUNC_22(FUNC_24(0));

    list *VAR_6 = FUNC_17(VAR_0);

    char *VAR_7 = FUNC_15(VAR_6, "labels", "data/labels.list");
    char *VAR_8 = FUNC_15(VAR_6, "leaves", 0);
    if(VAR_8) FUNC_2(VAR_5->hierarchy, VAR_8);
    char *VAR_9 = FUNC_15(VAR_6, "valid", "data/train.list");
    int VAR_10 = FUNC_14(VAR_6, "classes", 2);
    int VAR_11 = FUNC_14(VAR_6, "top", 1);

    char **VAR_12 = FUNC_7(VAR_7);
    list *VAR_13 = FUNC_8(VAR_9);

    char **VAR_14 = (char **)FUNC_10(VAR_13);
    int VAR_15 = VAR_13->size;
    FUNC_6(VAR_13);

    float VAR_16 = 0;
    float VAR_17 = 0;
    int *VAR_18 = FUNC_1(VAR_11, sizeof(int));
    int VAR_19 = 4;
    int VAR_20 = 2;
    int VAR_21 = 0;
    float *VAR_22 = FUNC_1(VAR_10, sizeof(float));
    int *VAR_23 = FUNC_1(VAR_19*VAR_19, sizeof(int));

    for(VAR_3 = 0; VAR_3 < VAR_15; ++VAR_3){
        int VAR_24 = -1;
        char *VAR_25 = VAR_14[VAR_3];
        for(VAR_4 = 0; VAR_4 < VAR_10; ++VAR_4){
            if(FUNC_23(VAR_25, VAR_12[VAR_4])){
                VAR_24 = VAR_4;
                break;
            }
        }
        image VAR_26 = FUNC_11(VAR_14[VAR_3], 0, 0);
        image VAR_27 = FUNC_19(VAR_26, VAR_5->w*VAR_19/VAR_20);
        image VAR_28 = FUNC_4(VAR_27, (VAR_27.w - VAR_5->w*VAR_19/VAR_20)/2, (VAR_27.h - VAR_5->h*VAR_19/VAR_20)/2, VAR_5->w*VAR_19/VAR_20, VAR_5->h*VAR_19/VAR_20);
        image VAR_29 = FUNC_18(VAR_28, VAR_5->w, VAR_5->h);



        float *VAR_30 = FUNC_13(VAR_5, VAR_29.data);

        for(VAR_4 = 0; VAR_4 < VAR_19*VAR_19; ++VAR_4){
            FUNC_16("%.2f ", VAR_30[VAR_10 + VAR_4]);
            if((VAR_4+1)%VAR_19 == 0) FUNC_16("\n");
        }
        FUNC_16("\n");
        FUNC_3(VAR_10, VAR_30, 1, VAR_22, 1);
        FUNC_25(VAR_30 + VAR_10, VAR_19*VAR_19, VAR_19*VAR_19, VAR_23);
        FUNC_21(VAR_28, "crop");
        for(VAR_4 = 0; VAR_4 < VAR_21; ++VAR_4){
            int VAR_31 = VAR_23[VAR_4];
            int VAR_32 = VAR_31 / VAR_19;
            int VAR_33 = VAR_31 % VAR_19;
            int VAR_34 = VAR_32 * VAR_28.h / VAR_19 - (VAR_5->h - VAR_28.h/VAR_19)/2;
            int VAR_35 = VAR_33 * VAR_28.w / VAR_19 - (VAR_5->w - VAR_28.w/VAR_19)/2;
            FUNC_16("%d %d %d %d\n", VAR_32, VAR_33, VAR_34, VAR_35);
            image VAR_36 = FUNC_4(VAR_28, VAR_35, VAR_34, VAR_5->w, VAR_5->h);
            float *VAR_37 = FUNC_13(VAR_5, VAR_36.data);
            FUNC_0(VAR_10, 1., VAR_37, 1, VAR_22, 1);
            FUNC_21(VAR_36, "tile");

        }
        if(VAR_5->hierarchy) FUNC_9(VAR_30, VAR_5->outputs, VAR_5->hierarchy, 1, 1);

        if(VAR_29.data != VAR_27.data) FUNC_5(VAR_29);
        if(VAR_27.data != VAR_26.data) FUNC_5(VAR_27);
        FUNC_5(VAR_26);
        FUNC_5(VAR_28);
        FUNC_25(VAR_30, VAR_10, VAR_11, VAR_18);

        if(VAR_18[0] == VAR_24) VAR_16 += 1;
        for(VAR_4 = 0; VAR_4 < VAR_11; ++VAR_4){
            if(VAR_18[VAR_4] == VAR_24) VAR_17 += 1;
        }

        FUNC_16("%d: top 1: %f, top %d: %f\n", VAR_3, VAR_16/(VAR_3+1), VAR_11, VAR_17/(VAR_3+1));
    }
}
