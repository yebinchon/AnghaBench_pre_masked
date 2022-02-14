
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int h; int w; int data; } ;
typedef TYPE_2__ image ;
struct TYPE_16__ {int * vals; } ;
struct TYPE_13__ {int rows; int cols; int * vals; } ;
struct TYPE_15__ {int w; int h; TYPE_6__ y; TYPE_1__ X; scalar_t__ shallow; int member_0; } ;
typedef TYPE_3__ data ;


 int * FUNC_0 (int,int) ;
 TYPE_2__ FUNC_1 (TYPE_2__,int,int,int,int) ;
 int FUNC_2 (char*,int ,int,int,float,float,int,int) ;
 int FUNC_3 (TYPE_2__) ;
 int FUNC_4 (TYPE_2__) ;
 TYPE_2__ FUNC_5 (char*,int ,int ) ;
 TYPE_6__ FUNC_6 (int,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int,int) ;
 TYPE_2__ FUNC_9 (TYPE_2__,int,int) ;

data FUNC_10(char **VAR_0, int VAR_1, int VAR_2, float VAR_3)
{
    int VAR_4 = FUNC_7()%VAR_1;
    char *VAR_5 = VAR_0[VAR_4];

    image VAR_6 = FUNC_5(VAR_5, 0, 0);
    int VAR_7 = VAR_6.h;
    int VAR_8 = VAR_6.w;

    data VAR_9 = {0};
    VAR_9.shallow = 0;
    VAR_9.w = VAR_8;
    VAR_9.h = VAR_7;

    VAR_9.X.rows = 1;
    VAR_9.X.vals = FUNC_0(VAR_9.X.rows, sizeof(float*));
    VAR_9.X.cols = VAR_7*VAR_8*3;

    int VAR_10 = (4+VAR_2)*90;
    VAR_9.y = FUNC_6(1, VAR_10);

    int VAR_11 = VAR_8*VAR_3;
    int VAR_12 = VAR_7*VAR_3;

    int VAR_13 = FUNC_8(-VAR_11, VAR_11);
    int VAR_14 = FUNC_8(-VAR_11, VAR_11);
    int VAR_15 = FUNC_8(-VAR_12, VAR_12);
    int VAR_16 = FUNC_8(-VAR_12, VAR_12);

    int VAR_17 = VAR_8 - VAR_13 - VAR_14;
    int VAR_18 = VAR_7 - VAR_15 - VAR_16;

    float VAR_19 = (float)VAR_17 / VAR_8;
    float VAR_20 = (float)VAR_18 / VAR_7;

    int VAR_21 = FUNC_7()%2;
    image VAR_22 = FUNC_1(VAR_6, VAR_13, VAR_15, VAR_17, VAR_18);

    float VAR_23 = ((float)VAR_13/VAR_8)/VAR_19;
    float VAR_24 = ((float)VAR_15 /VAR_7)/VAR_20;

    image VAR_25 = FUNC_9(VAR_22, VAR_8, VAR_7);
    if(VAR_21) FUNC_3(VAR_25);
    VAR_9.X.vals[0] = VAR_25.data;

    FUNC_2(VAR_5, VAR_9.y.vals[0], VAR_2, VAR_21, VAR_23, VAR_24, 1./VAR_19, 1./VAR_20);

    FUNC_4(VAR_6);
    FUNC_4(VAR_22);

    return VAR_9;
}
