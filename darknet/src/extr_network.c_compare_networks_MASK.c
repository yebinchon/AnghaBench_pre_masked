
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int network ;
struct TYPE_8__ {int rows; int cols; int * vals; } ;
typedef TYPE_2__ matrix ;
struct TYPE_7__ {int cols; int * vals; } ;
struct TYPE_9__ {TYPE_1__ y; } ;
typedef TYPE_3__ data ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__ FUNC_2 (int *,TYPE_3__) ;
 float FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*,float,...) ;

void FUNC_5(network *VAR_0, network *VAR_1, data VAR_2)
{
    matrix VAR_3 = FUNC_2(VAR_0, VAR_2);
    matrix VAR_4 = FUNC_2(VAR_1, VAR_2);
    int VAR_5;
    int VAR_6,VAR_7,VAR_8,VAR_9;
    VAR_6 = VAR_7 = VAR_8 = VAR_9 = 0;
    for(VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5){
        int VAR_10 = FUNC_1(VAR_2.y.vals[VAR_5], VAR_2.y.cols);
        int VAR_11 = FUNC_1(VAR_3[VAR_5], VAR_3);
        int VAR_12 = FUNC_1(VAR_4[VAR_5], VAR_4);
        if(VAR_11 == VAR_10){
            if(VAR_12 == VAR_10) ++VAR_9;
            else ++VAR_8;
        }else{
            if(VAR_12 == VAR_10) ++VAR_7;
            else ++VAR_6;
        }
    }
    FUNC_4("%5d %5d\n%5d %5d\n", VAR_6, VAR_7, VAR_8, VAR_9);
    float VAR_13 = FUNC_3((FUNC_0(VAR_7 - VAR_8) - 1.), 2.);
    float VAR_14 = VAR_7 + VAR_8;
    FUNC_4("%f\n", VAR_13/VAR_14);
}
