
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
    FUNC_0("%d X %d Matrix:\n",VAR_0.rows, VAR_0.cols);
    FUNC_0(" __");
    for(VAR_2 = 0; VAR_2 < 16*VAR_0.cols-1; ++VAR_2) FUNC_0(" ");
    FUNC_0("__ \n");

    FUNC_0("|  ");
    for(VAR_2 = 0; VAR_2 < 16*VAR_0.cols-1; ++VAR_2) FUNC_0(" ");
    FUNC_0("  |\n");

    for(VAR_1 = 0; VAR_1 < VAR_0.rows; ++VAR_1){
        FUNC_0("|  ");
        for(VAR_2 = 0; VAR_2 < VAR_0.cols; ++VAR_2){
            FUNC_0("%15.7f ", VAR_0.vals[VAR_1][VAR_2]);
        }
        FUNC_0(" |\n");
    }
    FUNC_0("|__");
    for(VAR_2 = 0; VAR_2 < 16*VAR_0.cols-1; ++VAR_2) FUNC_0(" ");
    FUNC_0("__|\n");
}
