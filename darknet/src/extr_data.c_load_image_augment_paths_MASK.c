
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int rows; int cols; int * vals; } ;
typedef TYPE_1__ matrix ;
struct TYPE_13__ {int h; int w; int c; int data; } ;
typedef TYPE_2__ image ;


 int * FUNC_0 (int,int) ;
 TYPE_2__ FUNC_1 (TYPE_2__,int,int) ;
 int FUNC_2 (TYPE_2__) ;
 int FUNC_3 (TYPE_2__) ;
 TYPE_2__ FUNC_4 (char*,int ,int ) ;
 int FUNC_5 () ;
 TYPE_2__ FUNC_6 (TYPE_2__,float,float,int,int,int,int) ;
 int FUNC_7 (TYPE_2__,float,float,float) ;

matrix FUNC_8(char **VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, float VAR_5, float VAR_6, float VAR_7, float VAR_8, float VAR_9, int VAR_10)
{
    int VAR_11;
    matrix VAR_12;
    VAR_12.rows = VAR_1;
    VAR_12.vals = FUNC_0(VAR_12.rows, sizeof(float*));
    VAR_12.cols = 0;

    for(VAR_11 = 0; VAR_11 < VAR_1; ++VAR_11){
        image VAR_13 = FUNC_4(VAR_0[VAR_11], 0, 0);
        image VAR_14;
        if(VAR_10){
            VAR_14 = FUNC_1(VAR_13, VAR_4, VAR_4);
        } else {
            VAR_14 = FUNC_6(VAR_13, VAR_5, VAR_6, VAR_2, VAR_3, VAR_4, VAR_4);
        }
        int VAR_15 = FUNC_5()%2;
        if (VAR_15) FUNC_2(VAR_14);
        FUNC_7(VAR_14, VAR_7, VAR_8, VAR_9);







        FUNC_3(VAR_13);
        VAR_12.vals[VAR_11] = VAR_14.data;
        VAR_12.cols = VAR_14.h*VAR_14.w*VAR_14.c;
    }
    return VAR_12;
}
