
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int input; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {int outputs; int batch; int output; int scale; int stride; int c; int h; int w; int out_h; int out_w; scalar_t__ reverse; } ;
typedef TYPE_2__ layer ;


 int FUNC_0 (int,int ,int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int,int ,int,int ,int ) ;

void FUNC_2(const layer VAR_0, network VAR_1)
{
    FUNC_0(VAR_0.outputs*VAR_0.batch, 0, VAR_0.output, 1);
    if(VAR_0.reverse){
        FUNC_1(VAR_0.output, VAR_0.out_w, VAR_0.out_h, VAR_0.c, VAR_0.batch, VAR_0.stride, 0, VAR_0.scale, VAR_1.input);
    }else{
        FUNC_1(VAR_1.input, VAR_0.w, VAR_0.h, VAR_0.c, VAR_0.batch, VAR_0.stride, 1, VAR_0.scale, VAR_0.output);
    }
}
