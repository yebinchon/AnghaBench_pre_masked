
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rows; int cols; int * vals; } ;
typedef TYPE_1__ matrix ;
struct TYPE_6__ {int h; int w; int c; int data; } ;
typedef TYPE_2__ image ;


 int * FUNC_0 (int,int) ;
 TYPE_2__ FUNC_1 (char*,int,int) ;

matrix FUNC_2(char **VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4;
    matrix VAR_5;
    VAR_5.rows = VAR_1;
    VAR_5.vals = FUNC_0(VAR_5.rows, sizeof(float*));
    VAR_5.cols = 0;

    for(VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4){
        image VAR_6 = FUNC_1(VAR_0[VAR_4], VAR_2, VAR_3);
        VAR_5.vals[VAR_4] = VAR_6.data;
        VAR_5.cols = VAR_6.h*VAR_6.w*VAR_6.c;
    }
    return VAR_5;
}
