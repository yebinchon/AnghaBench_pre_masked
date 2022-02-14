
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rows; int cols; double** vals; } ;
typedef TYPE_1__ matrix ;


 int FUNC_0 (char*,...) ;

void FUNC_1(matrix VAR_0)
{
    int VAR_1, VAR_2;

    for(VAR_1 = 0; VAR_1 < VAR_0.rows; ++VAR_1){
        for(VAR_2 = 0; VAR_2 < VAR_0.cols; ++VAR_2){
            if(VAR_2 > 0) FUNC_0(",");
            FUNC_0("%.17g", VAR_0.vals[VAR_1][VAR_2]);
        }
        FUNC_0("\n");
    }
}
