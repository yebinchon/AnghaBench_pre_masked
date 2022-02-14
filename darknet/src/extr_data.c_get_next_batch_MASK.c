
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cols; int * vals; } ;
struct TYPE_5__ {int cols; int * vals; } ;
struct TYPE_7__ {TYPE_2__ y; TYPE_1__ X; } ;
typedef TYPE_3__ data ;


 int FUNC_0 (float*,int ,int) ;

void FUNC_1(data VAR_0, int VAR_1, int VAR_2, float *VAR_3, float *VAR_4)
{
    int VAR_5;
    for(VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5){
        int VAR_6 = VAR_2 + VAR_5;
        FUNC_0(VAR_3+VAR_5*VAR_0.X.cols, VAR_0.X.vals[VAR_6], VAR_0.X.cols*sizeof(float));
        if(VAR_4) FUNC_0(VAR_4+VAR_5*VAR_0.y.cols, VAR_0.y.vals[VAR_6], VAR_0.y.cols*sizeof(float));
    }
}
