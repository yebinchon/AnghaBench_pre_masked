
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cols; int * vals; } ;
struct TYPE_6__ {int rows; int cols; int * vals; } ;
struct TYPE_7__ {TYPE_1__ y; TYPE_2__ X; } ;
typedef TYPE_3__ data ;


 int FUNC_0 (float*,int ,int) ;
 int FUNC_1 () ;

void FUNC_2(data VAR_0, int VAR_1, float *VAR_2, float *VAR_3)
{
    int VAR_4;
    for(VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4){
        int VAR_5 = FUNC_1()%VAR_0.X.rows;
        FUNC_0(VAR_2+VAR_4*VAR_0.X.cols, VAR_0.X.vals[VAR_5], VAR_0.X.cols*sizeof(float));
        FUNC_0(VAR_3+VAR_4*VAR_0.y.cols, VAR_0.y.vals[VAR_5], VAR_0.y.cols*sizeof(float));
    }
}
