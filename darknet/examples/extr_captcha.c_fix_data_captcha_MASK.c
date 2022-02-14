
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rows; int cols; int** vals; } ;
typedef TYPE_1__ matrix ;
struct TYPE_5__ {TYPE_1__ y; } ;
typedef TYPE_2__ data ;


 void* VAR_0 ;

void FUNC_0(data VAR_1, int VAR_2)
{
    matrix VAR_3 = VAR_1.y;
    int VAR_4, VAR_5;
    for(VAR_4 = 0; VAR_4 < VAR_1.y.rows; ++VAR_4){
        for(VAR_5 = 0; VAR_5 < VAR_1.y.cols; VAR_5 += 2){
            if (VAR_2){
                if(!VAR_3.vals[VAR_4][VAR_5]){
                    VAR_3.vals[VAR_4][VAR_5] = VAR_0;
                    VAR_3.vals[VAR_4][VAR_5+1] = VAR_0;
                }else if(VAR_3.vals[VAR_4][VAR_5+1]){
                    VAR_3.vals[VAR_4][VAR_5] = 0;
                }
            } else{
                if (VAR_3.vals[VAR_4][VAR_5]) {
                    VAR_3.vals[VAR_4][VAR_5+1] = 0;
                } else {
                    VAR_3.vals[VAR_4][VAR_5+1] = 1;
                }
            }
        }
    }
}
