
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rows; int cols; int * vals; } ;
struct TYPE_5__ {TYPE_1__ X; } ;
typedef TYPE_2__ data ;


 int FUNC_0 (int ,int ) ;

void FUNC_1(data VAR_0)
{
    int VAR_1;
    for(VAR_1 = 0; VAR_1 < VAR_0.X.rows; ++VAR_1){
        FUNC_0(VAR_0.X.vals[VAR_1], VAR_0.X.cols);
    }
}
