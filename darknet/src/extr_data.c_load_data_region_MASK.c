
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int h; int w; int data; } ;
typedef TYPE_2__ image ;
struct TYPE_17__ {int * vals; } ;
struct TYPE_14__ {int rows; int cols; int * vals; } ;
struct TYPE_16__ {TYPE_7__ y; TYPE_1__ X; scalar_t__ shallow; int member_0; } ;
typedef TYPE_3__ data ;


 int * FUNC_0 (int,int) ;
 TYPE_2__ FUNC_1 (TYPE_2__,int,int,int,int) ;
 int FUNC_2 (char*,int ,int,int,int,float,float,int,int) ;
 int FUNC_3 (TYPE_2__) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (TYPE_2__) ;
 char** FUNC_6 (char**,int,int) ;
 TYPE_2__ FUNC_7 (char*,int ,int ) ;
 TYPE_7__ FUNC_8 (int,int) ;
 int FUNC_9 () ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (TYPE_2__,float,float,float) ;
 TYPE_2__ FUNC_12 (TYPE_2__,int,int) ;

data FUNC_13(int VAR_0, char **VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, float VAR_7, float VAR_8, float VAR_9, float VAR_10)
{
    char **VAR_11 = FUNC_6(VAR_1, VAR_0, VAR_2);
    int VAR_12;
    data VAR_13 = {0};
    VAR_13.shallow = 0;

    VAR_13.X.rows = VAR_0;
    VAR_13.X.vals = FUNC_0(VAR_13.X.rows, sizeof(float*));
    VAR_13.X.cols = VAR_4*VAR_3*3;


    int VAR_14 = VAR_5*VAR_5*(5+VAR_6);
    VAR_13.y = FUNC_8(VAR_0, VAR_14);
    for(VAR_12 = 0; VAR_12 < VAR_0; ++VAR_12){
        image VAR_15 = FUNC_7(VAR_11[VAR_12], 0, 0);

        int VAR_16 = VAR_15.h;
        int VAR_17 = VAR_15.w;

        int VAR_18 = (VAR_17*VAR_7);
        int VAR_19 = (VAR_16*VAR_7);

        int VAR_20 = FUNC_10(-VAR_18, VAR_18);
        int VAR_21 = FUNC_10(-VAR_18, VAR_18);
        int VAR_22 = FUNC_10(-VAR_19, VAR_19);
        int VAR_23 = FUNC_10(-VAR_19, VAR_19);

        int VAR_24 = VAR_17 - VAR_20 - VAR_21;
        int VAR_25 = VAR_16 - VAR_22 - VAR_23;

        float VAR_26 = (float)VAR_24 / VAR_17;
        float VAR_27 = (float)VAR_25 / VAR_16;

        int VAR_28 = FUNC_9()%2;
        image VAR_29 = FUNC_1(VAR_15, VAR_20, VAR_22, VAR_24, VAR_25);

        float VAR_30 = ((float)VAR_20/VAR_17)/VAR_26;
        float VAR_31 = ((float)VAR_22 /VAR_16)/VAR_27;

        image VAR_32 = FUNC_12(VAR_29, VAR_3, VAR_4);
        if(VAR_28) FUNC_3(VAR_32);
        FUNC_11(VAR_32, VAR_8, VAR_9, VAR_10);
        VAR_13.X.vals[VAR_12] = VAR_32.data;

        FUNC_2(VAR_11[VAR_12], VAR_13.y.vals[VAR_12], VAR_6, VAR_5, VAR_28, VAR_30, VAR_31, 1./VAR_26, 1./VAR_27);

        FUNC_5(VAR_15);
        FUNC_5(VAR_29);
    }
    FUNC_4(VAR_11);
    return VAR_13;
}
