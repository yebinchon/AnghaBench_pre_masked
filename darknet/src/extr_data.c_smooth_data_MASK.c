
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cols; int rows; float** vals; } ;
struct TYPE_5__ {TYPE_1__ y; } ;
typedef TYPE_2__ data ;



void FUNC_0(data VAR_0)
{
    int VAR_1, VAR_2;
    float VAR_3 = 1. / VAR_0.y.cols;
    float VAR_4 = .1;
    for(VAR_1 = 0; VAR_1 < VAR_0.y.rows; ++VAR_1){
        for(VAR_2 = 0; VAR_2 < VAR_0.y.cols; ++VAR_2){
            VAR_0.y.vals[VAR_1][VAR_2] = VAR_4 * VAR_3 + (1-VAR_4) * VAR_0.y.vals[VAR_1][VAR_2];
        }
    }
}
