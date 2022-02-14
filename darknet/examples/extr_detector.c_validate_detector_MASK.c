
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_16__ {double learning_rate; double momentum; double decay; int n; int h; int w; TYPE_4__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_17__ {char* path; TYPE_5__* resized; TYPE_5__* im; int type; int h; int w; int member_0; } ;
typedef TYPE_2__ load_args ;
struct TYPE_18__ {int size; } ;
typedef TYPE_3__ list ;
struct TYPE_19__ {int classes; } ;
typedef TYPE_4__ layer ;
struct TYPE_20__ {float* data; int w; int h; } ;
typedef TYPE_5__ image ;
typedef int detection ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int *,int,int,float) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_5__) ;
 int FUNC_9 (int *,int,int ) ;
 char** FUNC_10 (char*) ;
 int * FUNC_11 (TYPE_1__*,int,int,float,double,int*,int ,int*) ;
 TYPE_3__* FUNC_12 (char*) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_2__) ;
 TYPE_1__* FUNC_15 (char*,char*,int ) ;
 int FUNC_16 (TYPE_1__*,float*) ;
 char* FUNC_17 (TYPE_3__*,char*,char*) ;
 int FUNC_18 (int *,char*,int *,int,int,int,int) ;
 int FUNC_19 (int **,char*,int *,int,int,int,int) ;
 int FUNC_20 (int *,int,int *,int,int,int,int) ;
 int FUNC_21 (int ,int ) ;
 TYPE_3__* FUNC_22 (char*) ;
 int* FUNC_23 (char*) ;
 int FUNC_24 (TYPE_1__*,int) ;
 int FUNC_25 (char*,int,char*,char*,char*,...) ;
 int FUNC_26 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_27 (char*,char*) ;
 int FUNC_28 (int ) ;
 double FUNC_29 () ;

void FUNC_30(char *VAR_3, char *VAR_4, char *VAR_5, char *VAR_6)
{
    int VAR_7;
    list *VAR_8 = FUNC_22(VAR_3);
    char *VAR_9 = FUNC_17(VAR_8, "valid", "data/train.list");
    char *VAR_10 = FUNC_17(VAR_8, "names", "data/names.list");
    char *VAR_11 = FUNC_17(VAR_8, "results", "results");
    char **VAR_12 = FUNC_10(VAR_10);
    char *VAR_13 = FUNC_17(VAR_8, "map", 0);
    int *VAR_14 = 0;
    if (VAR_13) VAR_14 = FUNC_23(VAR_13);

    network *VAR_15 = FUNC_15(VAR_4, VAR_5, 0);
    FUNC_24(VAR_15, 1);
    FUNC_5(VAR_2, "Learning Rate: %g, Momentum: %g, Decay: %g\n", VAR_15->learning_rate, VAR_15->momentum, VAR_15->decay);
    FUNC_26(FUNC_28(0));

    list *VAR_16 = FUNC_12(VAR_9);
    char **VAR_17 = (char **)FUNC_13(VAR_16);

    layer VAR_18 = VAR_15->layers[VAR_15->n-1];
    int VAR_19 = VAR_18.classes;

    char VAR_20[1024];
    char *VAR_21 = FUNC_17(VAR_8, "eval", "voc");
    FILE *VAR_22 = 0;
    FILE **VAR_23 = 0;
    int VAR_24 = 0;
    int VAR_25 = 0;
    if(0==FUNC_27(VAR_21, "coco")){
        if(!VAR_6) VAR_6 = "coco_results";
        FUNC_25(VAR_20, 1024, "%s/%s.json", VAR_11, VAR_6);
        VAR_22 = FUNC_4(VAR_20, "w");
        FUNC_5(*VAR_22, "[\n");
        VAR_24 = 1;
    } else if(0==FUNC_27(VAR_21, "imagenet")){
        if(!VAR_6) VAR_6 = "imagenet-detection";
        FUNC_25(VAR_20, 1024, "%s/%s.txt", VAR_11, VAR_6);
        VAR_22 = FUNC_4(VAR_20, "w");
        VAR_25 = 1;
        VAR_19 = 200;
    } else {
        if(!VAR_6) VAR_6 = "comp4_det_test_";
        VAR_23 = FUNC_1(VAR_19, sizeof(FILE *));
        for(VAR_7 = 0; VAR_7 < VAR_19; ++VAR_7){
            FUNC_25(VAR_20, 1024, "%s/%s%s.txt", VAR_11, VAR_6, VAR_12[VAR_7]);
            VAR_23[VAR_7] = FUNC_4(VAR_20, "w");
        }
    }


    int VAR_26 = VAR_16->size;
    int VAR_27=0;
    int VAR_28;

    float VAR_29 = .005;
    float VAR_30 = .45;

    int VAR_31 = 4;
    image *VAR_32 = FUNC_1(VAR_31, sizeof(image));
    image *VAR_33 = FUNC_1(VAR_31, sizeof(image));
    image *VAR_34 = FUNC_1(VAR_31, sizeof(image));
    image *VAR_35 = FUNC_1(VAR_31, sizeof(image));
    pthread_t *VAR_36 = FUNC_1(VAR_31, sizeof(pthread_t));

    load_args VAR_37 = {0};
    VAR_37.w = VAR_15->w;
    VAR_37.h = VAR_15->h;

    VAR_37.type = VAR_0;

    for(VAR_28 = 0; VAR_28 < VAR_31; ++VAR_28){
        VAR_37.path = VAR_17[VAR_27+VAR_28];
        VAR_37.im = &VAR_34[VAR_28];
        VAR_37.resized = &VAR_35[VAR_28];
        VAR_36[VAR_28] = FUNC_14(VAR_37);
    }
    double VAR_38 = FUNC_29();
    for(VAR_27 = VAR_31; VAR_27 < VAR_26+VAR_31; VAR_27 += VAR_31){
        FUNC_5(VAR_2, "%d\n", VAR_27);
        for(VAR_28 = 0; VAR_28 < VAR_31 && VAR_27+VAR_28-VAR_31 < VAR_26; ++VAR_28){
            FUNC_21(VAR_36[VAR_28], 0);
            VAR_32[VAR_28] = VAR_34[VAR_28];
            VAR_33[VAR_28] = VAR_35[VAR_28];
        }
        for(VAR_28 = 0; VAR_28 < VAR_31 && VAR_27+VAR_28 < VAR_26; ++VAR_28){
            VAR_37.path = VAR_17[VAR_27+VAR_28];
            VAR_37.im = &VAR_34[VAR_28];
            VAR_37.resized = &VAR_35[VAR_28];
            VAR_36[VAR_28] = FUNC_14(VAR_37);
        }
        for(VAR_28 = 0; VAR_28 < VAR_31 && VAR_27+VAR_28-VAR_31 < VAR_26; ++VAR_28){
            char *VAR_39 = VAR_17[VAR_27+VAR_28-VAR_31];
            char *VAR_40 = FUNC_0(VAR_39);
            float *VAR_41 = VAR_33[VAR_28].data;
            FUNC_16(VAR_15, VAR_41);
            int VAR_42 = VAR_32[VAR_28].w;
            int VAR_43 = VAR_32[VAR_28].h;
            int VAR_44 = 0;
            detection *VAR_45 = FUNC_11(VAR_15, VAR_42, VAR_43, VAR_29, .5, VAR_14, 0, &VAR_44);
            if (VAR_30) FUNC_2(VAR_45, VAR_44, VAR_19, VAR_30);
            if (VAR_24){
                FUNC_18(VAR_22, VAR_39, VAR_45, VAR_44, VAR_19, VAR_42, VAR_43);
            } else if (VAR_25){
                FUNC_20(VAR_22, VAR_27+VAR_28-VAR_31+1, VAR_45, VAR_44, VAR_19, VAR_42, VAR_43);
            } else {
                FUNC_19(VAR_23, VAR_40, VAR_45, VAR_44, VAR_19, VAR_42, VAR_43);
            }
            FUNC_7(VAR_45, VAR_44);
            FUNC_6(VAR_40);
            FUNC_8(VAR_32[VAR_28]);
            FUNC_8(VAR_33[VAR_28]);
        }
    }
    for(VAR_7 = 0; VAR_7 < VAR_19; ++VAR_7){
        if(VAR_23) FUNC_3(VAR_23[VAR_7]);
    }
    if(VAR_24){
        FUNC_9(VAR_22, -2, VAR_1);
        FUNC_5(*VAR_22, "\n]\n");
        FUNC_3(VAR_22);
    }
    FUNC_5(VAR_2, "Total Detection Time: %f Seconds\n", FUNC_29() - VAR_38);
}
