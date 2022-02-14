
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int rows; int * vals; int cols; } ;
struct TYPE_6__ {int rows; int * vals; int cols; } ;
struct TYPE_8__ {int shallow; TYPE_2__ y; TYPE_1__ X; int h; int w; int member_0; } ;
typedef TYPE_3__ data ;


 void* FUNC_0 (int,int) ;

data FUNC_1(data *VAR_0, int *VAR_1)
{
    data VAR_2 = {0};
    VAR_2.shallow = 1;
    VAR_2.w = VAR_0[0].w;
    VAR_2.h = VAR_0[0].h;

    VAR_2.X.rows = VAR_0[0].X.rows;
    VAR_2.y.rows = VAR_0[0].X.rows;

    VAR_2.X.cols = VAR_0[0].X.cols;
    VAR_2.y.cols = VAR_0[0].y.cols;

    VAR_2.X.vals = FUNC_0(VAR_0[0].X.rows, sizeof(float *));
    VAR_2.y.vals = FUNC_0(VAR_0[0].y.rows, sizeof(float *));
    int VAR_3;
    for(VAR_3 = 0; VAR_3 < VAR_2.X.rows; ++VAR_3){
        VAR_2.X.vals[VAR_3] = VAR_0[VAR_1[VAR_3]].X.vals[VAR_3];
        VAR_2.y.vals[VAR_3] = VAR_0[VAR_1[VAR_3]].y.vals[VAR_3];
    }
    return VAR_2;
}
