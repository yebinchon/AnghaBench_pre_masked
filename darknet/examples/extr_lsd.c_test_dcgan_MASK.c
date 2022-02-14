
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int n; int c; int h; int w; } ;
typedef TYPE_1__ network ;
struct TYPE_14__ {int w; int h; int c; float* data; } ;
typedef TYPE_2__ image ;
typedef scalar_t__ clock_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (TYPE_2__) ;
 TYPE_2__ FUNC_2 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_3 (char*,char*,int ) ;
 TYPE_2__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,float*) ;
 int FUNC_6 (TYPE_2__) ;
 int FUNC_7 (char*,char*,double) ;
 float FUNC_8 () ;
 int FUNC_9 (TYPE_2__,char*) ;
 double FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (TYPE_2__,char*,int ) ;
 int FUNC_13 (int) ;

void FUNC_14(char *VAR_0, char *VAR_1)
{
    network *VAR_2 = FUNC_3(VAR_0, VAR_1, 0);
    FUNC_11(VAR_2, 1);
    FUNC_13(2222222);

    clock_t VAR_3;
    char VAR_4[256];
    char *VAR_5 = VAR_4;
    int VAR_6 = 0;

    VAR_6 = VAR_2->n-1;

    while(1){
        image VAR_7 = FUNC_4(VAR_2->w, VAR_2->h, VAR_2->c);
        int VAR_8;
        for(VAR_8 = 0; VAR_8 < VAR_7.w*VAR_7.h*VAR_7.c; ++VAR_8){
            VAR_7.data[VAR_8] = FUNC_8();
        }



        float *VAR_9 = VAR_7.data;
        VAR_3=FUNC_0();
        FUNC_5(VAR_2, VAR_9);
        image VAR_10 = FUNC_2(VAR_2, VAR_6);

        FUNC_6(VAR_10);
        FUNC_7("%s: Predicted in %f seconds.\n", VAR_5, FUNC_10(FUNC_0()-VAR_3));
        FUNC_9(VAR_10, "out");
        FUNC_12(VAR_10, "out", 0);

        FUNC_1(VAR_7);
    }
}
