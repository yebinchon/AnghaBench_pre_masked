
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_37__ {int learning_rate; int w; int h; int batch; int subdivisions; double momentum; double decay; int* seen; int max_batches; int c; int hue; int saturation; int exposure; int aspect; int angle; int max_crop; int min_crop; } ;
typedef TYPE_3__ network ;
struct TYPE_38__ {int w; int h; int threads; int scale; int num_boxes; int size; int classes; char** paths; int n; int m; TYPE_7__* d; int type; int hue; int saturation; int exposure; int aspect; int angle; int max; int min; int member_0; } ;
typedef TYPE_4__ load_args ;
struct TYPE_39__ {int size; } ;
typedef TYPE_5__ list ;
struct TYPE_40__ {int c; int data; int w; int h; } ;
typedef TYPE_6__ image ;
struct TYPE_36__ {int * vals; } ;
struct TYPE_35__ {int * vals; } ;
struct TYPE_41__ {TYPE_2__ X; TYPE_1__ y; } ;
typedef TYPE_7__ data ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 TYPE_3__** FUNC_2 (int,int) ;
 TYPE_6__ FUNC_3 (TYPE_6__) ;
 int FUNC_4 (int) ;
 TYPE_6__ FUNC_5 (int,int,int,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_7__) ;
 int FUNC_8 (TYPE_6__) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (void**,int) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 TYPE_6__ FUNC_14 (TYPE_3__*) ;
 TYPE_5__* FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (TYPE_5__*) ;
 int FUNC_17 (TYPE_4__) ;
 TYPE_3__* FUNC_18 (char*,char*,int) ;
 TYPE_6__ FUNC_19 (TYPE_6__) ;
 int FUNC_20 (TYPE_6__) ;
 char* FUNC_21 (TYPE_5__*,char*,char*) ;
 int FUNC_22 (char*,...) ;
 int FUNC_23 (int ,int ) ;
 int FUNC_24 () ;
 TYPE_5__* FUNC_25 (char*) ;
 int FUNC_26 (TYPE_3__*,char*) ;
 int FUNC_27 (TYPE_6__,char*,int) ;
 int FUNC_28 (char*,char*,char*,char*,...) ;
 int FUNC_29 (int) ;
 int FUNC_30 (int ) ;
 float FUNC_31 (TYPE_3__*,TYPE_7__) ;
 float FUNC_32 (TYPE_3__**,int,TYPE_7__,int) ;
 double FUNC_33 () ;

void FUNC_34(char *VAR_1, char *VAR_2, char *VAR_3, int *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8;

    float VAR_9 = -1;
    char *VAR_10 = FUNC_1(VAR_2);
    FUNC_22("%s\n", VAR_10);
    FUNC_22("%d\n", VAR_5);
    network **VAR_11 = FUNC_2(VAR_5, sizeof(network*));

    FUNC_29(FUNC_30(0));
    int VAR_12 = FUNC_24();
    for(VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8){
        FUNC_29(VAR_12);



        VAR_11[VAR_8] = FUNC_18(VAR_2, VAR_3, VAR_6);
        VAR_11[VAR_8]->learning_rate *= VAR_5;
    }
    FUNC_29(FUNC_30(0));
    network *VAR_13 = VAR_11[0];
    image VAR_14 = FUNC_14(VAR_13);

    image VAR_15 = VAR_14;
    VAR_15.c = 3;
    VAR_15.data += VAR_15.w*VAR_15.h*80;

    int VAR_16 = VAR_13->w/VAR_14.w;
    FUNC_0(VAR_14.w * VAR_16 == VAR_13->w);
    FUNC_0(VAR_14.h * VAR_16 == VAR_13->h);

    int VAR_17 = VAR_13->batch * VAR_13->subdivisions * VAR_5;

    FUNC_22("Learning Rate: %g, Momentum: %g, Decay: %g\n", VAR_13->learning_rate, VAR_13->momentum, VAR_13->decay);
    list *VAR_18 = FUNC_25(VAR_1);

    char *VAR_19 = FUNC_21(VAR_18, "backup", "/backup/");
    char *VAR_20 = FUNC_21(VAR_18, "train", "data/train.list");

    list *VAR_21 = FUNC_15(VAR_20);
    char **VAR_22 = (char **)FUNC_16(VAR_21);
    FUNC_22("%d\n", VAR_21->size);
    int VAR_23 = VAR_21->size;

    load_args VAR_24 = {0};
    VAR_24.w = VAR_13->w;
    VAR_24.h = VAR_13->h;
    VAR_24.threads = 32;
    VAR_24.scale = VAR_16;
    VAR_24.num_boxes = 90;

    VAR_24.min = VAR_13->min_crop;
    VAR_24.max = VAR_13->max_crop;
    VAR_24.angle = VAR_13->angle;
    VAR_24.aspect = VAR_13->aspect;
    VAR_24.exposure = VAR_13->exposure;
    VAR_24.saturation = VAR_13->saturation;
    VAR_24.hue = VAR_13->hue;
    VAR_24.size = VAR_13->w;
    VAR_24.classes = 80;

    VAR_24.paths = VAR_22;
    VAR_24.n = VAR_17;
    VAR_24.m = VAR_23;
    VAR_24.type = VAR_0;

    data VAR_25;
    data VAR_26;
    pthread_t VAR_27;
    VAR_24.d = &VAR_26;
    VAR_27 = FUNC_17(VAR_24);

    int VAR_28 = (*VAR_13->seen)/VAR_23;
    while(FUNC_12(VAR_13) < VAR_13->max_batches || VAR_13->max_batches == 0){
        double VAR_29 = FUNC_33();

        FUNC_23(VAR_27, 0);
        VAR_25 = VAR_26;
        VAR_27 = FUNC_17(VAR_24);

        FUNC_22("Loaded: %lf seconds\n", FUNC_33()-VAR_29);
        VAR_29 = FUNC_33();

        float VAR_30 = 0;







        VAR_30 = FUNC_31(VAR_13, VAR_25);

        if(VAR_7){
            image VAR_31 = FUNC_5(VAR_13->w/VAR_16, VAR_13->h/VAR_16, 80, VAR_25.y.vals[VAR_13->batch*(VAR_13->subdivisions-1)]);
            image VAR_32 = FUNC_5(VAR_13->w, VAR_13->h, VAR_13->c, VAR_25.X.vals[VAR_13->batch*(VAR_13->subdivisions-1)]);
            VAR_14.c = 80;
            image VAR_33 = FUNC_19(VAR_31);
            image VAR_34 = FUNC_19(VAR_14);
            image VAR_35 = FUNC_3(VAR_15);
            FUNC_20(VAR_35);
            FUNC_27(VAR_35, "embed", 1);
            FUNC_8(VAR_35);

            FUNC_27(VAR_32, "input", 1);
            FUNC_27(VAR_34, "pred", 1);
            FUNC_27(VAR_33, "truth", 100);
            FUNC_8(VAR_33);
            FUNC_8(VAR_34);
        }
        if(VAR_9 == -1) VAR_9 = VAR_30;
        VAR_9 = VAR_9*.9 + VAR_30*.1;
        FUNC_22("%ld, %.3f: %f, %f avg, %f rate, %lf seconds, %ld images\n", FUNC_12(VAR_13), (float)(*VAR_13->seen)/VAR_23, VAR_30, VAR_9, FUNC_13(VAR_13), FUNC_33()-VAR_29, *VAR_13->seen);
        FUNC_7(VAR_25);
        if(*VAR_13->seen/VAR_23 > VAR_28){
            VAR_28 = *VAR_13->seen/VAR_23;
            char VAR_36[256];
            FUNC_28(VAR_36, "%s/%s_%d.weights",VAR_19,VAR_10, VAR_28);
            FUNC_26(VAR_13, VAR_36);
        }
        if(FUNC_12(VAR_13)%100 == 0){
            char VAR_37[256];
            FUNC_28(VAR_37, "%s/%s.backup",VAR_19,VAR_10);
            FUNC_26(VAR_13, VAR_37);
        }
    }
    char VAR_38[256];
    FUNC_28(VAR_38, "%s/%s.weights", VAR_19, VAR_10);
    FUNC_26(VAR_13, VAR_38);

    FUNC_10(VAR_13);
    FUNC_11((void**)VAR_22, VAR_21->size);
    FUNC_9(VAR_21);
    FUNC_6(VAR_10);
}
