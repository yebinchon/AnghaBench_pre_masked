
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {float** vals; } ;
struct TYPE_5__ {int rows; float** vals; } ;
struct TYPE_7__ {TYPE_2__ y; TYPE_1__ X; } ;
typedef TYPE_3__ data ;


 int FUNC_0 () ;

void FUNC_1(data VAR_0)
{
    int VAR_1;
    for(VAR_1 = VAR_0.X.rows-1; VAR_1 > 0; --VAR_1){
        int VAR_2 = FUNC_0()%VAR_1;
        float *VAR_3 = VAR_0.X.vals[VAR_2];
        VAR_0.X.vals[VAR_2] = VAR_0.X.vals[VAR_1];
        VAR_0.X.vals[VAR_1] = VAR_3;

        VAR_3 = VAR_0.y.vals[VAR_2];
        VAR_0.y.vals[VAR_2] = VAR_0.y.vals[VAR_1];
        VAR_0.y.vals[VAR_1] = VAR_3;
    }
}
