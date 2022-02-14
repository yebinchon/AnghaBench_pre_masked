
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int n; int c; int h; int w; TYPE_1__* layers; } ;
typedef TYPE_2__ network ;
struct TYPE_19__ {float* data; int w; int h; int c; } ;
typedef TYPE_3__ image ;
typedef scalar_t__ clock_t ;
struct TYPE_17__ {int out_c; } ;


 scalar_t__ FUNC_0 () ;
 TYPE_3__ FUNC_1 (TYPE_3__) ;
 int FUNC_2 (TYPE_3__) ;
 TYPE_3__ FUNC_3 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_4 (char*,char*,int ) ;
 TYPE_3__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,float*) ;
 int FUNC_7 (TYPE_3__) ;
 int FUNC_8 (char*,...) ;
 TYPE_3__ FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (TYPE_3__,char*) ;
 double FUNC_11 (scalar_t__) ;
 int FUNC_12 (TYPE_2__*,int) ;
 int FUNC_13 (TYPE_3__,char*,int ) ;
 int FUNC_14 (float*,float*,float,int,float*) ;
 int FUNC_15 (char*,char*,int) ;
 int FUNC_16 (int) ;

void FUNC_17(char *VAR_0, char *VAR_1)
{
    network *VAR_2 = FUNC_4(VAR_0, VAR_1, 0);
    FUNC_12(VAR_2, 1);
    FUNC_16(2222222);

    clock_t VAR_3;
    char VAR_4[256];
    char *VAR_5 = VAR_4;
    int VAR_6, VAR_7 = 0;

    for (VAR_6 = 0; VAR_6 < VAR_2->n; ++VAR_6) {
        if (VAR_2->layers[VAR_6].out_c == 3) {
            VAR_7 = VAR_6;
            FUNC_8("%d\n", VAR_6);
            break;
        }
    }
    image VAR_8 = FUNC_9(VAR_2->w, VAR_2->h, VAR_2->c);
    image VAR_9 = FUNC_9(VAR_2->w, VAR_2->h, VAR_2->c);
        image VAR_10 = FUNC_5(VAR_2->w, VAR_2->h, VAR_2->c);
        image VAR_11 = FUNC_1(VAR_8);

    int VAR_12 = 0;
    int VAR_13 = 0;
    int VAR_14 = 15;
    while(1){
        ++VAR_12;

        if(VAR_13 == VAR_14){
            VAR_13 = 0;
            FUNC_2(VAR_8);
            VAR_8 = VAR_9;
            VAR_9 = FUNC_9(VAR_2->w, VAR_2->h, VAR_2->c);
            if(VAR_12 > 300){
                VAR_9 = VAR_11;
            }
            if(VAR_12>300 + VAR_14) return;
        }
        ++VAR_13;

        FUNC_14(VAR_8.data, VAR_9.data, (float)VAR_13 / VAR_14, VAR_10.w*VAR_10.h*VAR_10.c, VAR_10.data);

        float *VAR_15 = VAR_10.data;
        VAR_3=FUNC_0();
        FUNC_6(VAR_2, VAR_15);
        image VAR_16 = FUNC_3(VAR_2, VAR_7);

        FUNC_7(VAR_16);
        FUNC_8("%s: Predicted in %f seconds.\n", VAR_5, FUNC_11(FUNC_0()-VAR_3));

        FUNC_15(VAR_4, "out%05d", VAR_12);
        FUNC_10(VAR_16, "out");
        FUNC_10(VAR_16, VAR_4);
        FUNC_13(VAR_16, "out", 0);
    }
}
