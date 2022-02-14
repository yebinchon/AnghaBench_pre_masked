
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int w; int h; int n; float* output; } ;
typedef TYPE_1__ layer ;


 int FUNC_0 (TYPE_1__,int ,int,int) ;

int FUNC_1(layer VAR_0, float VAR_1)
{
    int VAR_2, VAR_3;
    int VAR_4 = 0;
    for (VAR_2 = 0; VAR_2 < VAR_0.w*VAR_0.h; ++VAR_2){
        for(VAR_3 = 0; VAR_3 < VAR_0.n; ++VAR_3){
            int VAR_5 = FUNC_0(VAR_0, 0, VAR_3*VAR_0.w*VAR_0.h + VAR_2, 4);
            if(VAR_0.output[VAR_5] > VAR_1){
                ++VAR_4;
            }
        }
    }
    return VAR_4;
}
