
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {float w; float h; int data; int c; } ;
typedef TYPE_2__ image ;
struct TYPE_17__ {int * vals; } ;
struct TYPE_14__ {int rows; int cols; int * vals; } ;
struct TYPE_16__ {TYPE_7__ y; TYPE_1__ X; scalar_t__ shallow; int member_0; } ;
typedef TYPE_3__ data ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__,double) ;
 int FUNC_2 (char*,int,int ,int,int,float,float,float,float) ;
 int FUNC_3 (TYPE_2__) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (TYPE_2__) ;
 char** FUNC_6 (char**,int,int) ;
 TYPE_2__ FUNC_7 (char*,int ,int ) ;
 TYPE_2__ FUNC_8 (int,int,int ) ;
 TYPE_7__ FUNC_9 (int,int) ;
 int FUNC_10 (TYPE_2__,float,float,float,float,TYPE_2__) ;
 int FUNC_11 () ;
 float FUNC_12 (float,int) ;
 int FUNC_13 (TYPE_2__,float,float,float) ;

data FUNC_14(int VAR_0, char **VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, float VAR_7, float VAR_8, float VAR_9, float VAR_10)
{
    char **VAR_11 = FUNC_6(VAR_1, VAR_0, VAR_2);
    int VAR_12;
    data VAR_13 = {0};
    VAR_13.shallow = 0;

    VAR_13.X.rows = VAR_0;
    VAR_13.X.vals = FUNC_0(VAR_13.X.rows, sizeof(float*));
    VAR_13.X.cols = VAR_4*VAR_3*3;

    VAR_13.y = FUNC_9(VAR_0, 5*VAR_5);
    for(VAR_12 = 0; VAR_12 < VAR_0; ++VAR_12){
        image VAR_14 = FUNC_7(VAR_11[VAR_12], 0, 0);
        image VAR_15 = FUNC_8(VAR_3, VAR_4, VAR_14.c);
        FUNC_1(VAR_15, .5);

        float VAR_16 = VAR_7 * VAR_14.w;
        float VAR_17 = VAR_7 * VAR_14.h;

        float VAR_18 = (VAR_14.w + FUNC_12(-VAR_16, VAR_16)) / (VAR_14.h + FUNC_12(-VAR_17, VAR_17));

        float VAR_19 = 1;

        float VAR_20, VAR_21;

        if(VAR_18 < 1){
            VAR_21 = VAR_19 * VAR_4;
            VAR_20 = VAR_21 * VAR_18;
        } else {
            VAR_20 = VAR_19 * VAR_3;
            VAR_21 = VAR_20 / VAR_18;
        }

        float VAR_22 = FUNC_12(0, VAR_3 - VAR_20);
        float VAR_23 = FUNC_12(0, VAR_4 - VAR_21);

        FUNC_10(VAR_14, VAR_20, VAR_21, VAR_22, VAR_23, VAR_15);

        FUNC_13(VAR_15, VAR_8, VAR_9, VAR_10);

        int VAR_24 = FUNC_11()%2;
        if(VAR_24) FUNC_3(VAR_15);
        VAR_13.X.vals[VAR_12] = VAR_15.data;


        FUNC_2(VAR_11[VAR_12], VAR_5, VAR_13.y.vals[VAR_12], VAR_6, VAR_24, -VAR_22/VAR_3, -VAR_23/VAR_4, VAR_20/VAR_3, VAR_21/VAR_4);

        FUNC_5(VAR_14);
    }
    FUNC_4(VAR_11);
    return VAR_13;
}
