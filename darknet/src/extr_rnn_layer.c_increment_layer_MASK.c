
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int outputs; int batch; int output; int delta; int x; int x_norm; int output_gpu; int delta_gpu; int x_gpu; int x_norm_gpu; } ;
typedef TYPE_1__ layer ;



__attribute__((used)) static void FUNC_0(layer *VAR_0, int VAR_1)
{
    int VAR_2 = VAR_0->outputs*VAR_0->batch*VAR_1;
    VAR_0->output += VAR_2;
    VAR_0->delta += VAR_2;
    VAR_0->x += VAR_2;
    VAR_0->x_norm += VAR_2;







}
