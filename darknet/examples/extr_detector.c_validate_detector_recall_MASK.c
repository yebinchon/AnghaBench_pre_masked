
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_22__ {double learning_rate; double momentum; double decay; int n; int h; int w; TYPE_3__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_23__ {int size; } ;
typedef TYPE_2__ list ;
struct TYPE_24__ {int w; int h; int n; } ;
typedef TYPE_3__ layer ;
struct TYPE_25__ {int h; int w; int data; } ;
typedef TYPE_4__ image ;
struct TYPE_26__ {float objectness; int bbox; } ;
typedef TYPE_5__ detection ;
struct TYPE_27__ {int h; int w; int y; int x; } ;
typedef TYPE_6__ box_label ;
struct TYPE_28__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_7__ box ;


 char* FUNC_0 (char*) ;
 float FUNC_1 (int ,TYPE_7__) ;
 int FUNC_2 (TYPE_5__*,int,int,float) ;
 int FUNC_3 (char*,char*,char*,char*) ;
 int FUNC_4 (int ,char*,int,int,int,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_4__) ;
 TYPE_5__* FUNC_7 (TYPE_1__*,int ,int ,float,double,int ,int,int*) ;
 TYPE_2__* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 TYPE_4__ FUNC_10 (char*,int ,int ) ;
 TYPE_1__* FUNC_11 (char*,char*,int ) ;
 int FUNC_12 (TYPE_1__*,int ) ;
 TYPE_6__* FUNC_13 (char*,int*) ;
 TYPE_4__ FUNC_14 (TYPE_4__,int ,int ) ;
 int FUNC_15 (TYPE_1__*,int) ;
 int FUNC_16 (int ) ;
 int VAR_0 ;
 int FUNC_17 (int ) ;

void FUNC_18(char *VAR_1, char *VAR_2)
{
    network *VAR_3 = FUNC_11(VAR_1, VAR_2, 0);
    FUNC_15(VAR_3, 1);
    FUNC_4(VAR_0, "Learning Rate: %d, Momentum: %d, Decay: %d\n", VAR_3->learning_rate, VAR_3->momentum, VAR_3->decay);
    FUNC_16(FUNC_17(0));

    list *VAR_4 = FUNC_8("data/coco_val_5k.list");
    char **VAR_5 = (char **)FUNC_9(VAR_4);

    layer VAR_6 = VAR_3->layers[VAR_3->n-1];

    int VAR_7, VAR_8;

    int VAR_9 = VAR_4->size;
    int VAR_10=0;

    float VAR_11 = .001;
    float VAR_12 = .5;
    float VAR_13 = .4;

    int VAR_14 = 0;
    int VAR_15 = 0;
    int VAR_16 = 0;
    float VAR_17 = 0;

    for(VAR_10 = 0; VAR_10 < VAR_9; ++VAR_10){
        char *VAR_18 = VAR_5[VAR_10];
        image VAR_19 = FUNC_10(VAR_18, 0, 0);
        image VAR_20 = FUNC_14(VAR_19, VAR_3->w, VAR_3->h);
        char *VAR_21 = FUNC_0(VAR_18);
        FUNC_12(VAR_3, VAR_20.data);
        int VAR_22 = 0;
        detection *VAR_23 = FUNC_7(VAR_3, VAR_20.w, VAR_20.h, VAR_11, .5, 0, 1, &VAR_22);
        if (VAR_13) FUNC_2(VAR_23, VAR_22, 1, VAR_13);

        char VAR_24[4096];
        FUNC_3(VAR_18, "images", "labels", VAR_24);
        FUNC_3(VAR_24, "JPEGImages", "labels", VAR_24);
        FUNC_3(VAR_24, ".jpg", ".txt", VAR_24);
        FUNC_3(VAR_24, ".JPEG", ".txt", VAR_24);

        int VAR_25 = 0;
        box_label *VAR_26 = FUNC_13(VAR_24, &VAR_25);
        for(VAR_8 = 0; VAR_8 < VAR_22; ++VAR_8){
            if(VAR_23[VAR_8].objectness > VAR_11){
                ++VAR_16;
            }
        }
        for (VAR_7 = 0; VAR_7 < VAR_25; ++VAR_7) {
            ++VAR_14;
            box VAR_27 = {VAR_26[VAR_7].x, VAR_26[VAR_7].y, VAR_26[VAR_7].w, VAR_26[VAR_7].h};
            float VAR_28 = 0;
            for(VAR_8 = 0; VAR_8 < VAR_6.w*VAR_6.h*VAR_6.n; ++VAR_8){
                float VAR_29 = FUNC_1(VAR_23[VAR_8].bbox, VAR_27);
                if(VAR_23[VAR_8].objectness > VAR_11 && VAR_29 > VAR_28){
                    VAR_28 = VAR_29;
                }
            }
            VAR_17 += VAR_28;
            if(VAR_28 > VAR_12){
                ++VAR_15;
            }
        }

        FUNC_4(VAR_0, "%5d %5d %5d\tRPs/Img: %.2f\tIOU: %.2f%%\tRecall:%.2f%%\n", VAR_10, VAR_15, VAR_14, (float)VAR_16/(VAR_10+1), VAR_17*100/VAR_14, 100.*VAR_15/VAR_14);
        FUNC_5(VAR_21);
        FUNC_6(VAR_19);
        FUNC_6(VAR_20);
    }
}
