
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int rows; int * vals; int cols; } ;
struct TYPE_6__ {int rows; int * vals; int cols; } ;
struct TYPE_8__ {int shallow; TYPE_2__ y; TYPE_1__ X; } ;
typedef TYPE_3__ data ;


 void* FUNC_0 (int,int) ;

data *FUNC_1(data VAR_0, int VAR_1, int VAR_2)
{
    data *VAR_3 = FUNC_0(2, sizeof(data));
    int VAR_4;
    int VAR_5 = VAR_1*VAR_0.X.rows/VAR_2;
    int VAR_6 = (VAR_1+1)*VAR_0.X.rows/VAR_2;
    data VAR_7;
    data VAR_8;
    VAR_7.shallow = VAR_8.shallow = 1;

    VAR_8.X.rows = VAR_8.y.rows = VAR_6-VAR_5;
    VAR_7.X.rows = VAR_7.y.rows = VAR_0.X.rows - (VAR_6-VAR_5);
    VAR_7.X.cols = VAR_8.X.cols = VAR_0.X.cols;
    VAR_7.y.cols = VAR_8.y.cols = VAR_0.y.cols;

    VAR_7.X.vals = FUNC_0(VAR_7.X.rows, sizeof(float*));
    VAR_8.X.vals = FUNC_0(VAR_8.X.rows, sizeof(float*));
    VAR_7.y.vals = FUNC_0(VAR_7.y.rows, sizeof(float*));
    VAR_8.y.vals = FUNC_0(VAR_8.y.rows, sizeof(float*));

    for(VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4){
        VAR_7.X.vals[VAR_4] = VAR_0.X.vals[VAR_4];
        VAR_7.y.vals[VAR_4] = VAR_0.y.vals[VAR_4];
    }
    for(VAR_4 = VAR_5; VAR_4 < VAR_6; ++VAR_4){
        VAR_8.X.vals[VAR_4-VAR_5] = VAR_0.X.vals[VAR_4];
        VAR_8.y.vals[VAR_4-VAR_5] = VAR_0.y.vals[VAR_4];
    }
    for(VAR_4 = VAR_6; VAR_4 < VAR_0.X.rows; ++VAR_4){
        VAR_7.X.vals[VAR_4-(VAR_6-VAR_5)] = VAR_0.X.vals[VAR_4];
        VAR_7.y.vals[VAR_4-(VAR_6-VAR_5)] = VAR_0.y.vals[VAR_4];
    }
    VAR_3[0] = VAR_7;
    VAR_3[1] = VAR_8;
    return VAR_3;
}
