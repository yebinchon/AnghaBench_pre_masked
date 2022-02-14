
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_18__ {int h; int w; int data; } ;
typedef TYPE_2__ image ;
struct TYPE_16__ {int * vals; } ;
struct TYPE_17__ {int rows; int cols; int * vals; } ;
struct TYPE_19__ {TYPE_10__ y; TYPE_1__ X; scalar_t__ shallow; int member_0; } ;
typedef TYPE_3__ data ;
struct TYPE_20__ {int aspect; int dy; int dx; int h; int w; int scale; int rad; } ;
typedef TYPE_4__ augment_args ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,int ,int,int ,int ,TYPE_4__,int,int,int) ;
 int FUNC_2 (TYPE_2__) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (TYPE_2__) ;
 char** FUNC_5 (char**,int,int) ;
 TYPE_2__ FUNC_6 (char*,int ,int ) ;
 TYPE_10__ FUNC_7 (int,int) ;
 int FUNC_8 () ;
 TYPE_4__ FUNC_9 (TYPE_2__,float,float,int,int,int,int) ;
 int FUNC_10 (TYPE_2__,float,float,float) ;
 TYPE_2__ FUNC_11 (TYPE_2__,int ,int ,int ,int ,int ,int ,int ) ;

data FUNC_12(int VAR_0, char **VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, int VAR_8, int VAR_9, float VAR_10, float VAR_11, float VAR_12, float VAR_13, float VAR_14)
{
    char **VAR_15 = FUNC_5(VAR_1, VAR_0, VAR_2);
    int VAR_16;
    data VAR_17 = {0};
    VAR_17.shallow = 0;

    VAR_17.X.rows = VAR_0;
    VAR_17.X.vals = FUNC_0(VAR_17.X.rows, sizeof(float*));
    VAR_17.X.cols = VAR_4*VAR_3*3;

    VAR_17.y = FUNC_7(VAR_0, (VAR_7+1)*VAR_6);

    for(VAR_16 = 0; VAR_16 < VAR_0; ++VAR_16){
        image VAR_18 = FUNC_6(VAR_15[VAR_16], 0, 0);
        augment_args VAR_19 = FUNC_9(VAR_18, VAR_10, VAR_11, VAR_8, VAR_9, VAR_3, VAR_4);
        image VAR_20 = FUNC_11(VAR_18, VAR_19.rad, VAR_19.scale, VAR_19.w, VAR_19.h, VAR_19.dx, VAR_19.dy, VAR_19.aspect);

        int VAR_21 = FUNC_8()%2;
        if(VAR_21) FUNC_2(VAR_20);
        FUNC_10(VAR_20, VAR_12, VAR_13, VAR_14);
        VAR_17.X.vals[VAR_16] = VAR_20.data;


        FUNC_1(VAR_15[VAR_16], VAR_6, VAR_17.y.vals[VAR_16], VAR_5, VAR_18.w, VAR_18.h, VAR_19, VAR_21, 14, 14);

        FUNC_4(VAR_18);
    }
    FUNC_3(VAR_15);
    return VAR_17;
}
