
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int image ;
struct TYPE_6__ {int rows; int cols; int * vals; } ;
struct TYPE_7__ {int w; int h; TYPE_1__ X; int y; scalar_t__ shallow; int member_0; } ;
typedef TYPE_2__ data ;
struct TYPE_8__ {int data; } ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int,int,int ) ;
 TYPE_3__ FUNC_3 (int ,int,int) ;

data FUNC_4(data VAR_0, int VAR_1, int VAR_2)
{
    data VAR_3 = {0};
    VAR_3.shallow = 0;
    VAR_3.w = VAR_1;
    VAR_3.h = VAR_2;
    int VAR_4;
    VAR_3.X.rows = VAR_0.X.rows;
    VAR_3.X.cols = VAR_1*VAR_2*3;
    VAR_3.X.vals = FUNC_0(VAR_3.X.rows, sizeof(float*));

    VAR_3.y = FUNC_1(VAR_0.y);
#pragma omp parallel for
 for(VAR_4 = 0; VAR_4 < VAR_0.X.rows; ++VAR_4){
        image VAR_5 = FUNC_2(VAR_0.w, VAR_0.h, 3, VAR_0.X.vals[VAR_4]);
        VAR_3.X.vals[VAR_4] = FUNC_3(VAR_5, VAR_1, VAR_2).data;
    }
    return VAR_3;
}
