
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {int data; int h; int w; } ;
typedef TYPE_3__ image ;
struct TYPE_17__ {int rows; int cols; int * vals; } ;
struct TYPE_16__ {int rows; int cols; int * vals; } ;
struct TYPE_19__ {TYPE_2__ y; TYPE_1__ X; scalar_t__ shallow; int member_0; } ;
typedef TYPE_4__ data ;
struct TYPE_20__ {int scale; int w; int h; int dx; int dy; int aspect; int rad; } ;
typedef TYPE_5__ augment_args ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (TYPE_3__) ;
 char** FUNC_4 (char**,int,int) ;
 TYPE_3__ FUNC_5 (char*,int ,int ,int) ;
 TYPE_3__ FUNC_6 (char*,int ,int ) ;
 int FUNC_7 () ;
 TYPE_5__ FUNC_8 (TYPE_3__,float,float,int,int,int,int) ;
 int FUNC_9 (TYPE_3__,float,float,float) ;
 TYPE_3__ FUNC_10 (TYPE_3__,int ,int,int,int,int,int,int ) ;

data FUNC_11(int VAR_0, char **VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, float VAR_8, float VAR_9, float VAR_10, float VAR_11, float VAR_12, int VAR_13)
{
    char **VAR_14 = FUNC_4(VAR_1, VAR_0, VAR_2);
    int VAR_15;
    data VAR_16 = {0};
    VAR_16.shallow = 0;

    VAR_16.X.rows = VAR_0;
    VAR_16.X.vals = FUNC_0(VAR_16.X.rows, sizeof(float*));
    VAR_16.X.cols = VAR_4*VAR_3*3;


    VAR_16.y.rows = VAR_0;
    VAR_16.y.cols = VAR_4*VAR_3*VAR_5/VAR_13/VAR_13;
    VAR_16.y.vals = FUNC_0(VAR_16.X.rows, sizeof(float*));

    for(VAR_15 = 0; VAR_15 < VAR_0; ++VAR_15){
        image VAR_17 = FUNC_6(VAR_14[VAR_15], 0, 0);
        augment_args VAR_18 = FUNC_8(VAR_17, VAR_8, VAR_9, VAR_6, VAR_7, VAR_3, VAR_4);
        image VAR_19 = FUNC_10(VAR_17, VAR_18.rad, VAR_18.scale, VAR_18.w, VAR_18.h, VAR_18.dx, VAR_18.dy, VAR_18.aspect);

        int VAR_20 = FUNC_7()%2;
        if(VAR_20) FUNC_1(VAR_19);
        FUNC_9(VAR_19, VAR_10, VAR_11, VAR_12);
        VAR_16.X.vals[VAR_15] = VAR_19.data;

        image VAR_21 = FUNC_5(VAR_14[VAR_15], VAR_17.w, VAR_17.h, VAR_5);

        image VAR_22 = FUNC_10(VAR_21, VAR_18.rad, VAR_18.scale/VAR_13, VAR_18.w/VAR_13, VAR_18.h/VAR_13, VAR_18.dx/VAR_13, VAR_18.dy/VAR_13, VAR_18.aspect);

        if(VAR_20) FUNC_1(VAR_22);
        VAR_16.y.vals[VAR_15] = VAR_22.data;

        FUNC_3(VAR_17);
        FUNC_3(VAR_21);
    }
    FUNC_2(VAR_14);
    return VAR_16;
}
