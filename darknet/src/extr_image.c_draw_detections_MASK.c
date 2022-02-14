
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_20__ {double h; int w; } ;
typedef TYPE_1__ image ;
struct TYPE_22__ {int x; int w; int y; int h; } ;
struct TYPE_21__ {float* prob; scalar_t__ mask; TYPE_3__ bbox; } ;
typedef TYPE_2__ detection ;
typedef TYPE_3__ box ;


 int FUNC_0 (TYPE_1__,int,int,int,int,int,float,float,float) ;
 int FUNC_1 (TYPE_1__,int,int,TYPE_1__,float*) ;
 int FUNC_2 (TYPE_1__,TYPE_1__,int,int) ;
 TYPE_1__ FUNC_3 (int,int,int,scalar_t__) ;
 int FUNC_4 (TYPE_1__) ;
 float FUNC_5 (int,int,int) ;
 TYPE_1__ FUNC_6 (TYPE_1__**,char*,double) ;
 int FUNC_7 (char*,char*,int) ;
 TYPE_1__ FUNC_8 (TYPE_1__,int,int) ;
 int FUNC_9 (char*,char*) ;
 TYPE_1__ FUNC_10 (TYPE_1__,double) ;

void FUNC_11(image VAR_0, detection *VAR_1, int VAR_2, float VAR_3, char **VAR_4, image **VAR_5, int VAR_6)
{
    int VAR_7,VAR_8;

    for(VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7){
        char VAR_9[4096] = {0};
        int VAR_10 = -1;
        for(VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8){
            if (VAR_1[VAR_7].prob[VAR_8] > VAR_3){
                if (VAR_10 < 0) {
                    FUNC_9(VAR_9, VAR_4[VAR_8]);
                    VAR_10 = VAR_8;
                } else {
                    FUNC_9(VAR_9, ", ");
                    FUNC_9(VAR_9, VAR_4[VAR_8]);
                }
                FUNC_7("%s: %.0f%%\n", VAR_4[VAR_8], VAR_1[VAR_7].prob[VAR_8]*100);
            }
        }
        if(VAR_10 >= 0){
            int VAR_11 = VAR_0.h * .006;
            int VAR_12 = VAR_10*123457 % VAR_6;
            float VAR_13 = FUNC_5(2,VAR_12,VAR_6);
            float VAR_14 = FUNC_5(1,VAR_12,VAR_6);
            float VAR_15 = FUNC_5(0,VAR_12,VAR_6);
            float VAR_16[3];



            VAR_16[0] = VAR_13;
            VAR_16[1] = VAR_14;
            VAR_16[2] = VAR_15;
            box VAR_17 = VAR_1[VAR_7].bbox;


            int VAR_18 = (VAR_17.x-VAR_17.w/2.)*VAR_0.w;
            int VAR_19 = (VAR_17.x+VAR_17.w/2.)*VAR_0.w;
            int VAR_20 = (VAR_17.y-VAR_17.h/2.)*VAR_0.h;
            int VAR_21 = (VAR_17.y+VAR_17.h/2.)*VAR_0.h;

            if(VAR_18 < 0) VAR_18 = 0;
            if(VAR_19 > VAR_0.w-1) VAR_19 = VAR_0.w-1;
            if(VAR_20 < 0) VAR_20 = 0;
            if(VAR_21 > VAR_0.h-1) VAR_21 = VAR_0.h-1;

            FUNC_0(VAR_0, VAR_18, VAR_20, VAR_19, VAR_21, VAR_11, VAR_13, VAR_14, VAR_15);
            if (VAR_5) {
                image VAR_22 = FUNC_6(VAR_5, VAR_9, (VAR_0.h*.03));
                FUNC_1(VAR_0, VAR_20 + VAR_11, VAR_18, VAR_22, VAR_16);
                FUNC_4(VAR_22);
            }
            if (VAR_1[VAR_7].mask){
                image VAR_23 = FUNC_3(14, 14, 1, VAR_1[VAR_7].mask);
                image VAR_24 = FUNC_8(VAR_23, VAR_17.w*VAR_0.w, VAR_17.h*VAR_0.h);
                image VAR_25 = FUNC_10(VAR_24, .5);
                FUNC_2(VAR_25, VAR_0, VAR_18, VAR_20);
                FUNC_4(VAR_23);
                FUNC_4(VAR_24);
                FUNC_4(VAR_25);
            }
        }
    }
}
