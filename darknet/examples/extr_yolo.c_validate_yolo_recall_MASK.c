
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_23__ {double learning_rate; double momentum; double decay; int n; int h; int w; TYPE_3__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_24__ {int size; } ;
typedef TYPE_2__ list ;
struct TYPE_25__ {int classes; int side; int n; } ;
typedef TYPE_3__ layer ;
struct TYPE_26__ {int h; int w; int data; } ;
typedef TYPE_4__ image ;
struct TYPE_27__ {float objectness; int bbox; } ;
typedef TYPE_5__ detection ;
struct TYPE_28__ {int h; int w; int y; int x; } ;
typedef TYPE_6__ box_label ;
struct TYPE_29__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_7__ box ;
typedef int FILE ;


 char* FUNC_0 (char*) ;
 float FUNC_1 (int ,TYPE_7__) ;
 int ** FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_5__*,int,int,float) ;
 int FUNC_4 (char*,char*,char*,char*) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (int ,char*,int,int,int,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_5__*,int) ;
 int FUNC_9 (TYPE_4__) ;
 TYPE_5__* FUNC_10 (TYPE_1__*,int ,int ,float,int ,int ,int,int*) ;
 TYPE_2__* FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 TYPE_4__ FUNC_13 (char*,int ,int ) ;
 TYPE_1__* FUNC_14 (char*,char*,int ) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 TYPE_6__* FUNC_16 (char*,int*) ;
 TYPE_4__ FUNC_17 (TYPE_4__,int ,int ) ;
 int FUNC_18 (TYPE_1__*,int) ;
 int FUNC_19 (char*,int,char*,char*,int ) ;
 int FUNC_20 (int ) ;
 int VAR_0 ;
 int FUNC_21 (int ) ;
 int * VAR_1 ;

void FUNC_22(char *VAR_2, char *VAR_3)
{
    network *VAR_4 = FUNC_14(VAR_2, VAR_3, 0);
    FUNC_18(VAR_4, 1);
    FUNC_6(VAR_0, "Learning Rate: %g, Momentum: %g, Decay: %g\n", VAR_4->learning_rate, VAR_4->momentum, VAR_4->decay);
    FUNC_20(FUNC_21(0));

    char *VAR_5 = "results/comp4_det_test_";
    list *VAR_6 = FUNC_11("data/voc.2007.test");
    char **VAR_7 = (char **)FUNC_12(VAR_6);

    layer VAR_8 = VAR_4->layers[VAR_4->n-1];
    int VAR_9 = VAR_8.classes;
    int VAR_10 = VAR_8.side;

    int VAR_11, VAR_12;
    FILE **VAR_13 = FUNC_2(VAR_9, sizeof(FILE *));
    for(VAR_11 = 0; VAR_11 < VAR_9; ++VAR_11){
        char VAR_14[1024];
        FUNC_19(VAR_14, 1024, "%s%s.txt", VAR_5, VAR_1[VAR_11]);
        VAR_13[VAR_11] = FUNC_5(VAR_14, "w");
    }

    int VAR_15 = VAR_6->size;
    int VAR_16=0;

    float VAR_17 = .001;
    float VAR_18 = .5;
    float VAR_19 = 0;

    int VAR_20 = 0;
    int VAR_21 = 0;
    int VAR_22 = 0;
    float VAR_23 = 0;

    for(VAR_16 = 0; VAR_16 < VAR_15; ++VAR_16){
        char *VAR_24 = VAR_7[VAR_16];
        image VAR_25 = FUNC_13(VAR_24, 0, 0);
        image VAR_26 = FUNC_17(VAR_25, VAR_4->w, VAR_4->h);
        char *VAR_27 = FUNC_0(VAR_24);
        FUNC_15(VAR_4, VAR_26.data);

        int VAR_28 = 0;
        detection *VAR_29 = FUNC_10(VAR_4, VAR_25.w, VAR_25.h, VAR_17, 0, 0, 1, &VAR_28);
        if (VAR_19) FUNC_3(VAR_29, VAR_10*VAR_10*VAR_8.n, 1, VAR_19);

        char VAR_30[4096];
        FUNC_4(VAR_24, "images", "labels", VAR_30);
        FUNC_4(VAR_30, "JPEGImages", "labels", VAR_30);
        FUNC_4(VAR_30, ".jpg", ".txt", VAR_30);
        FUNC_4(VAR_30, ".JPEG", ".txt", VAR_30);

        int VAR_31 = 0;
        box_label *VAR_32 = FUNC_16(VAR_30, &VAR_31);
        for(VAR_12 = 0; VAR_12 < VAR_10*VAR_10*VAR_8.n; ++VAR_12){
            if(VAR_29[VAR_12].objectness > VAR_17){
                ++VAR_22;
            }
        }
        for (VAR_11 = 0; VAR_11 < VAR_31; ++VAR_11) {
            ++VAR_20;
            box VAR_33 = {VAR_32[VAR_11].x, VAR_32[VAR_11].y, VAR_32[VAR_11].w, VAR_32[VAR_11].h};
            float VAR_34 = 0;
            for(VAR_12 = 0; VAR_12 < VAR_10*VAR_10*VAR_8.n; ++VAR_12){
                float VAR_35 = FUNC_1(VAR_29[VAR_12].bbox, VAR_33);
                if(VAR_29[VAR_12].objectness > VAR_17 && VAR_35 > VAR_34){
                    VAR_34 = VAR_35;
                }
            }
            VAR_23 += VAR_34;
            if(VAR_34 > VAR_18){
                ++VAR_21;
            }
        }

        FUNC_6(VAR_0, "%5d %5d %5d\tRPs/Img: %.2f\tIOU: %.2f%%\tRecall:%.2f%%\n", VAR_16, VAR_21, VAR_20, (float)VAR_22/(VAR_16+1), VAR_23*100/VAR_20, 100.*VAR_21/VAR_20);
        FUNC_8(VAR_29, VAR_28);
        FUNC_7(VAR_27);
        FUNC_9(VAR_25);
        FUNC_9(VAR_26);
    }
}
