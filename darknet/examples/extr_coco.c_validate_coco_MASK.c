
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int pthread_t ;
struct TYPE_14__ {double learning_rate; double momentum; double decay; int n; int h; int w; TYPE_4__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_15__ {char* path; TYPE_5__* resized; TYPE_5__* im; int type; int h; int w; int member_0; } ;
typedef TYPE_2__ load_args ;
struct TYPE_16__ {int size; } ;
typedef TYPE_3__ list ;
struct TYPE_17__ {int classes; int side; int n; } ;
typedef TYPE_4__ layer ;
struct TYPE_18__ {float* data; int w; int h; } ;
typedef TYPE_5__ image ;
typedef int detection ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int *,int,int,float) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (TYPE_5__) ;
 int FUNC_7 (int *,int,int ) ;
 int FUNC_8 (char*) ;
 int * FUNC_9 (TYPE_1__*,int,int,float,int ,int ,int ,int*) ;
 TYPE_3__* FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_2__) ;
 TYPE_1__* FUNC_13 (char*,char*,int ) ;
 int FUNC_14 (TYPE_1__*,float*) ;
 int FUNC_15 (int *,int,int *,int,int,int,int) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (TYPE_1__*,int) ;
 int FUNC_18 (char*,int,char*,char*) ;
 int FUNC_19 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_20 (int ) ;

void FUNC_21(char *VAR_3, char *VAR_4)
{
    network *VAR_5 = FUNC_13(VAR_3, VAR_4, 0);
    FUNC_17(VAR_5, 1);
    FUNC_4(VAR_2, "Learning Rate: %g, Momentum: %g, Decay: %g\n", VAR_5->learning_rate, VAR_5->momentum, VAR_5->decay);
    FUNC_19(FUNC_20(0));

    char *VAR_6 = "results/";
    list *VAR_7 = FUNC_10("data/coco_val_5k.list");


    char **VAR_8 = (char **)FUNC_11(VAR_7);

    layer VAR_9 = VAR_5->layers[VAR_5->n-1];
    int VAR_10 = VAR_9.classes;

    char VAR_11[1024];
    FUNC_18(VAR_11, 1024, "%s/coco_results.json", VAR_6);
    FILE *VAR_12 = FUNC_3(VAR_11, "w");
    FUNC_4(*VAR_12, "[\n");

    int VAR_13 = VAR_7->size;
    int VAR_14=0;
    int VAR_15;

    float VAR_16 = .01;
    int VAR_17 = 1;
    float VAR_18 = .5;

    int VAR_19 = 8;
    image *VAR_20 = FUNC_0(VAR_19, sizeof(image));
    image *VAR_21 = FUNC_0(VAR_19, sizeof(image));
    image *VAR_22 = FUNC_0(VAR_19, sizeof(image));
    image *VAR_23 = FUNC_0(VAR_19, sizeof(image));
    pthread_t *VAR_24 = FUNC_0(VAR_19, sizeof(pthread_t));

    load_args VAR_25 = {0};
    VAR_25.w = VAR_5->w;
    VAR_25.h = VAR_5->h;
    VAR_25.type = VAR_0;

    for(VAR_15 = 0; VAR_15 < VAR_19; ++VAR_15){
        VAR_25.path = VAR_8[VAR_14+VAR_15];
        VAR_25.im = &VAR_22[VAR_15];
        VAR_25.resized = &VAR_23[VAR_15];
        VAR_24[VAR_15] = FUNC_12(VAR_25);
    }
    time_t VAR_26 = FUNC_20(0);
    for(VAR_14 = VAR_19; VAR_14 < VAR_13+VAR_19; VAR_14 += VAR_19){
        FUNC_4(VAR_2, "%d\n", VAR_14);
        for(VAR_15 = 0; VAR_15 < VAR_19 && VAR_14+VAR_15-VAR_19 < VAR_13; ++VAR_15){
            FUNC_16(VAR_24[VAR_15], 0);
            VAR_20[VAR_15] = VAR_22[VAR_15];
            VAR_21[VAR_15] = VAR_23[VAR_15];
        }
        for(VAR_15 = 0; VAR_15 < VAR_19 && VAR_14+VAR_15 < VAR_13; ++VAR_15){
            VAR_25.path = VAR_8[VAR_14+VAR_15];
            VAR_25.im = &VAR_22[VAR_15];
            VAR_25.resized = &VAR_23[VAR_15];
            VAR_24[VAR_15] = FUNC_12(VAR_25);
        }
        for(VAR_15 = 0; VAR_15 < VAR_19 && VAR_14+VAR_15-VAR_19 < VAR_13; ++VAR_15){
            char *VAR_27 = VAR_8[VAR_14+VAR_15-VAR_19];
            int VAR_28 = FUNC_8(VAR_27);
            float *VAR_29 = VAR_21[VAR_15].data;
            FUNC_14(VAR_5, VAR_29);
            int VAR_30 = VAR_20[VAR_15].w;
            int VAR_31 = VAR_20[VAR_15].h;
            int VAR_32 = 0;
            detection *VAR_33 = FUNC_9(VAR_5, VAR_30, VAR_31, VAR_16, 0, 0, 0, &VAR_32);
            if (VAR_17) FUNC_1(VAR_33, VAR_9.side*VAR_9.side*VAR_9.n, VAR_10, VAR_18);
            FUNC_15(VAR_12, VAR_28, VAR_33, VAR_9.side*VAR_9.side*VAR_9.n, VAR_10, VAR_30, VAR_31);
            FUNC_5(VAR_33, VAR_32);
            FUNC_6(VAR_20[VAR_15]);
            FUNC_6(VAR_21[VAR_15]);
        }
    }
    FUNC_7(VAR_12, -2, VAR_1);
    FUNC_4(*VAR_12, "\n]\n");
    FUNC_2(VAR_12);

    FUNC_4(VAR_2, "Total Detection Time: %f Seconds\n", (double)(FUNC_20(0) - VAR_26));
}
