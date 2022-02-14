
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_7__ ;
typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_34__ {int learning_rate; int w; int h; int batch; int subdivisions; double momentum; double decay; int* seen; int max_batches; int c; int hue; int saturation; int exposure; int aspect; int angle; int max_crop; int min_crop; } ;
typedef TYPE_3__ network ;
struct TYPE_35__ {int w; int h; int threads; int scale; int size; int classes; char** paths; int n; int m; TYPE_7__* d; int type; int hue; int saturation; int exposure; int aspect; int angle; int max; int min; int member_0; } ;
typedef TYPE_4__ load_args ;
struct TYPE_36__ {int size; } ;
typedef TYPE_5__ list ;
struct TYPE_37__ {int w; int h; } ;
typedef TYPE_6__ image ;
struct TYPE_33__ {int * vals; } ;
struct TYPE_32__ {int * vals; } ;
struct TYPE_38__ {TYPE_2__ X; TYPE_1__ y; } ;
typedef TYPE_7__ data ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*) ;
 TYPE_3__** FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 TYPE_6__ FUNC_4 (int,int,int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_7__) ;
 int FUNC_7 (TYPE_6__) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (void**,int) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 TYPE_6__ FUNC_13 (TYPE_3__*) ;
 TYPE_5__* FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (TYPE_5__*) ;
 int FUNC_16 (TYPE_4__) ;
 TYPE_3__* FUNC_17 (char*,char*,int) ;
 TYPE_6__ FUNC_18 (TYPE_6__) ;
 char* FUNC_19 (TYPE_5__*,char*,char*) ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 () ;
 TYPE_5__* FUNC_23 (char*) ;
 int FUNC_24 (TYPE_3__*,char*) ;
 int FUNC_25 (TYPE_6__,char*,int) ;
 int FUNC_26 (char*,char*,char*,char*,...) ;
 int FUNC_27 (int) ;
 int FUNC_28 (int ) ;
 float FUNC_29 (TYPE_3__*,TYPE_7__) ;
 float FUNC_30 (TYPE_3__**,int,TYPE_7__,int) ;
 double FUNC_31 () ;

void FUNC_32(char *VAR_1, char *VAR_2, char *VAR_3, int *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8;

    float VAR_9 = -1;
    char *VAR_10 = FUNC_1(VAR_2);
    FUNC_20("%s\n", VAR_10);
    FUNC_20("%d\n", VAR_5);
    network **VAR_11 = FUNC_2(VAR_5, sizeof(network*));

    FUNC_27(FUNC_28(0));
    int VAR_12 = FUNC_22();
    for(VAR_8 = 0; VAR_8 < VAR_5; ++VAR_8){
        FUNC_27(VAR_12);



        VAR_11[VAR_8] = FUNC_17(VAR_2, VAR_3, VAR_6);
        VAR_11[VAR_8]->learning_rate *= VAR_5;
    }
    FUNC_27(FUNC_28(0));
    network *VAR_13 = VAR_11[0];
    image VAR_14 = FUNC_13(VAR_13);

    int VAR_15 = VAR_13->w/VAR_14.w;
    FUNC_0(VAR_14.w * VAR_15 == VAR_13->w);
    FUNC_0(VAR_14.h * VAR_15 == VAR_13->h);

    int VAR_16 = VAR_13->batch * VAR_13->subdivisions * VAR_5;

    FUNC_20("Learning Rate: %g, Momentum: %g, Decay: %g\n", VAR_13->learning_rate, VAR_13->momentum, VAR_13->decay);
    list *VAR_17 = FUNC_23(VAR_1);

    char *VAR_18 = FUNC_19(VAR_17, "backup", "/backup/");
    char *VAR_19 = FUNC_19(VAR_17, "train", "data/train.list");

    list *VAR_20 = FUNC_14(VAR_19);
    char **VAR_21 = (char **)FUNC_15(VAR_20);
    FUNC_20("%d\n", VAR_20->size);
    int VAR_22 = VAR_20->size;

    load_args VAR_23 = {0};
    VAR_23.w = VAR_13->w;
    VAR_23.h = VAR_13->h;
    VAR_23.threads = 32;
    VAR_23.scale = VAR_15;

    VAR_23.min = VAR_13->min_crop;
    VAR_23.max = VAR_13->max_crop;
    VAR_23.angle = VAR_13->angle;
    VAR_23.aspect = VAR_13->aspect;
    VAR_23.exposure = VAR_13->exposure;
    VAR_23.saturation = VAR_13->saturation;
    VAR_23.hue = VAR_13->hue;
    VAR_23.size = VAR_13->w;
    VAR_23.classes = 80;

    VAR_23.paths = VAR_21;
    VAR_23.n = VAR_16;
    VAR_23.m = VAR_22;
    VAR_23.type = VAR_0;

    data VAR_24;
    data VAR_25;
    pthread_t VAR_26;
    VAR_23.d = &VAR_25;
    VAR_26 = FUNC_16(VAR_23);

    int VAR_27 = (*VAR_13->seen)/VAR_22;
    while(FUNC_11(VAR_13) < VAR_13->max_batches || VAR_13->max_batches == 0){
        double VAR_28 = FUNC_31();

        FUNC_21(VAR_26, 0);
        VAR_24 = VAR_25;
        VAR_26 = FUNC_16(VAR_23);

        FUNC_20("Loaded: %lf seconds\n", FUNC_31()-VAR_28);
        VAR_28 = FUNC_31();

        float VAR_29 = 0;







        VAR_29 = FUNC_29(VAR_13, VAR_24);

        if(VAR_7){
            image VAR_30 = FUNC_4(VAR_13->w/VAR_15, VAR_13->h/VAR_15, 80, VAR_24.y.vals[VAR_13->batch*(VAR_13->subdivisions-1)]);
            image VAR_31 = FUNC_4(VAR_13->w, VAR_13->h, VAR_13->c, VAR_24.X.vals[VAR_13->batch*(VAR_13->subdivisions-1)]);
            image VAR_32 = FUNC_18(VAR_30);
            image VAR_33 = FUNC_18(VAR_14);
            FUNC_25(VAR_31, "input", 1);
            FUNC_25(VAR_33, "pred", 1);
            FUNC_25(VAR_32, "truth", 100);
            FUNC_7(VAR_32);
            FUNC_7(VAR_33);
        }
        if(VAR_9 == -1) VAR_9 = VAR_29;
        VAR_9 = VAR_9*.9 + VAR_29*.1;
        FUNC_20("%ld, %.3f: %f, %f avg, %f rate, %lf seconds, %ld images\n", FUNC_11(VAR_13), (float)(*VAR_13->seen)/VAR_22, VAR_29, VAR_9, FUNC_12(VAR_13), FUNC_31()-VAR_28, *VAR_13->seen);
        FUNC_6(VAR_24);
        if(*VAR_13->seen/VAR_22 > VAR_27){
            VAR_27 = *VAR_13->seen/VAR_22;
            char VAR_34[256];
            FUNC_26(VAR_34, "%s/%s_%d.weights",VAR_18,VAR_10, VAR_27);
            FUNC_24(VAR_13, VAR_34);
        }
        if(FUNC_11(VAR_13)%100 == 0){
            char VAR_35[256];
            FUNC_26(VAR_35, "%s/%s.backup",VAR_18,VAR_10);
            FUNC_24(VAR_13, VAR_35);
        }
    }
    char VAR_36[256];
    FUNC_26(VAR_36, "%s/%s.weights", VAR_18, VAR_10);
    FUNC_24(VAR_13, VAR_36);

    FUNC_9(VAR_13);
    FUNC_10((void**)VAR_21, VAR_20->size);
    FUNC_8(VAR_20);
    FUNC_5(VAR_10);
}
