
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cols; int rows; int * vals; } ;
typedef TYPE_1__ matrix ;
typedef int FILE ;


 int * FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int) ;
 void* FUNC_7 (int *,int) ;

matrix FUNC_8(char *VAR_0)
{
    FILE *VAR_1 = FUNC_4(VAR_0, "r");
    if(!VAR_1) FUNC_3(VAR_0);

    matrix VAR_2;
    VAR_2.cols = -1;

    char *VAR_3;

    int VAR_4 = 0;
    int VAR_5 = 1024;
    VAR_2.vals = FUNC_0(VAR_5, sizeof(float*));
    while((VAR_3 = FUNC_2(VAR_1))){
        if(VAR_2.cols == -1) VAR_2.cols = FUNC_1(VAR_3);
        if(VAR_4 == VAR_5){
            VAR_5 *= 2;
            VAR_2.vals = FUNC_7(VAR_2.vals, VAR_5*sizeof(float*));
        }
        VAR_2.vals[VAR_4] = FUNC_6(VAR_3, VAR_2.cols);
        FUNC_5(VAR_3);
        ++VAR_4;
    }
    VAR_2.vals = FUNC_7(VAR_2.vals, VAR_4*sizeof(float*));
    VAR_2.rows = VAR_4;
    return VAR_2;
}
