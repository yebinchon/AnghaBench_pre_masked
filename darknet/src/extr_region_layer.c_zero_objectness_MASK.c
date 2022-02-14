
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int w; int h; int n; scalar_t__* output; int coords; } ;
typedef TYPE_1__ layer ;


 int FUNC_0 (TYPE_1__,int ,int,int ) ;

void FUNC_1(layer VAR_0)
{
    int VAR_1, VAR_2;
    for (VAR_1 = 0; VAR_1 < VAR_0.w*VAR_0.h; ++VAR_1){
        for(VAR_2 = 0; VAR_2 < VAR_0.n; ++VAR_2){
            int VAR_3 = FUNC_0(VAR_0, 0, VAR_2*VAR_0.w*VAR_0.h + VAR_1, VAR_0.coords);
            VAR_0.output[VAR_3] = 0;
        }
    }
}
