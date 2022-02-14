
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {int n; int w; int h; TYPE_1__* layers; } ;
typedef TYPE_2__ network ;
struct TYPE_21__ {int w; int h; float* data; } ;
typedef TYPE_3__ image ;
typedef scalar_t__ clock_t ;
struct TYPE_19__ {int out_c; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_3__) ;
 TYPE_3__ FUNC_2 (TYPE_3__,int,int,int,int) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (char*,int,int ) ;
 int FUNC_5 (TYPE_3__) ;
 TYPE_3__ FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_3__) ;
 TYPE_3__ FUNC_8 (char*,int ,int ) ;
 TYPE_2__* FUNC_9 (char*,char*,int ) ;
 int FUNC_10 (TYPE_2__*,float*) ;
 int FUNC_11 (char*,...) ;
 TYPE_3__ FUNC_12 (TYPE_3__,int) ;
 int FUNC_13 (TYPE_3__,char*) ;
 double FUNC_14 (scalar_t__) ;
 int FUNC_15 (TYPE_2__*,int) ;
 int FUNC_16 (TYPE_3__,char*,int) ;
 int FUNC_17 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_18 (char*,char*,int) ;
 int FUNC_19 (char*,char*) ;

void FUNC_20(char *VAR_2, char *VAR_3, char *VAR_4, int VAR_5)
{
    network *VAR_6 = FUNC_9(VAR_2, VAR_3, 0);
    FUNC_15(VAR_6, 1);
    FUNC_17(2222222);

    clock_t VAR_7;
    char VAR_8[256];
    char *VAR_9 = VAR_8;
    int VAR_10, VAR_11 = 0;

    for (VAR_10 = 0; VAR_10 < VAR_6->n; ++VAR_10) {
        if (VAR_6->layers[VAR_10].out_c == 3) {
            VAR_11 = VAR_10;
            FUNC_11("%d\n", VAR_10);
            break;
        }
    }

    while(1){
        if(VAR_4){
            FUNC_18(VAR_9, VAR_4, 256);
        }else{
            FUNC_11("Enter Image Path: ");
            FUNC_3(VAR_1);
            VAR_9 = FUNC_4(VAR_9, 256, VAR_0);
            if(!VAR_9) return;
            FUNC_19(VAR_9, "\n");
        }
        image VAR_12 = FUNC_8(VAR_9, 0, 0);
        image VAR_13 = FUNC_12(VAR_12, VAR_6->w);
        image VAR_14 = FUNC_2(VAR_13, (VAR_13.w - VAR_6->w)/2, (VAR_13.h - VAR_6->h)/2, VAR_6->w, VAR_6->h);
        if(VAR_5) FUNC_7(VAR_14);

        float *VAR_15 = VAR_14.data;
        VAR_7=FUNC_0();
        FUNC_10(VAR_6, VAR_15);
        image VAR_16 = FUNC_6(VAR_6, VAR_11);

        FUNC_1(VAR_16);
        FUNC_11("%s: Predicted in %f seconds.\n", VAR_9, FUNC_14(FUNC_0()-VAR_7));
        FUNC_13(VAR_16, "out");
        FUNC_16(VAR_16, "out", 1);
        FUNC_16(VAR_14, "crop", 0);

        FUNC_5(VAR_12);
        FUNC_5(VAR_13);
        FUNC_5(VAR_14);
        if (VAR_4) break;
    }
}
