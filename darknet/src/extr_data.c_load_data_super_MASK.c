
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int data; } ;
typedef TYPE_3__ image ;
struct TYPE_14__ {int rows; int cols; int * vals; } ;
struct TYPE_13__ {int rows; int cols; int * vals; } ;
struct TYPE_16__ {TYPE_2__ y; TYPE_1__ X; scalar_t__ shallow; int member_0; } ;
typedef TYPE_4__ data ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_3__) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (TYPE_3__) ;
 char** FUNC_4 (char**,int,int) ;
 TYPE_3__ FUNC_5 (char*,int ,int ) ;
 int FUNC_6 () ;
 TYPE_3__ FUNC_7 (TYPE_3__,int,int) ;
 TYPE_3__ FUNC_8 (TYPE_3__,int,int) ;

data FUNC_9(char **VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    if(VAR_2) VAR_0 = FUNC_4(VAR_0, VAR_1, VAR_2);
    data VAR_6 = {0};
    VAR_6.shallow = 0;

    int VAR_7;
    VAR_6.X.rows = VAR_1;
    VAR_6.X.vals = FUNC_0(VAR_1, sizeof(float*));
    VAR_6.X.cols = VAR_3*VAR_4*3;

    VAR_6.y.rows = VAR_1;
    VAR_6.y.vals = FUNC_0(VAR_1, sizeof(float*));
    VAR_6.y.cols = VAR_3*VAR_5 * VAR_4*VAR_5 * 3;

    for(VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7){
        image VAR_8 = FUNC_5(VAR_0[VAR_7], 0, 0);
        image VAR_9 = FUNC_7(VAR_8, VAR_3*VAR_5, VAR_4*VAR_5);
        int VAR_10 = FUNC_6()%2;
        if (VAR_10) FUNC_1(VAR_9);
        image VAR_11 = FUNC_8(VAR_9, VAR_3, VAR_4);
        VAR_6.X.vals[VAR_7] = VAR_11.data;
        VAR_6.y.vals[VAR_7] = VAR_9.data;
        FUNC_3(VAR_8);
    }

    if(VAR_2) FUNC_2(VAR_0);
    return VAR_6;
}
