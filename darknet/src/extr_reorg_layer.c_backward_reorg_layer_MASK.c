
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ delta; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {int outputs; int batch; int w; int h; int inputs; int stride; int c; scalar_t__ delta; scalar_t__ extra; scalar_t__ reverse; scalar_t__ flatten; } ;
typedef TYPE_2__ layer ;


 int FUNC_0 (int,scalar_t__,int,scalar_t__,int) ;
 int FUNC_1 (scalar_t__,int,int ,int,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int,int,int ,int,int ,int,scalar_t__) ;

void FUNC_4(const layer VAR_0, network VAR_1)
{
    int VAR_2;
    if(VAR_0.flatten){
        FUNC_2(VAR_1.delta, VAR_0.delta, VAR_0.outputs*VAR_0.batch*sizeof(float));
        if(VAR_0.reverse){
            FUNC_1(VAR_1.delta, VAR_0.w*VAR_0.h, VAR_0.c, VAR_0.batch, 1);
        }else{
            FUNC_1(VAR_1.delta, VAR_0.w*VAR_0.h, VAR_0.c, VAR_0.batch, 0);
        }
    } else if(VAR_0.reverse){
        FUNC_3(VAR_0.delta, VAR_0.w, VAR_0.h, VAR_0.c, VAR_0.batch, VAR_0.stride, 0, VAR_1.delta);
    } else if (VAR_0.extra) {
        for(VAR_2 = 0; VAR_2 < VAR_0.batch; ++VAR_2){
            FUNC_0(VAR_0.inputs, VAR_0.delta + VAR_2*VAR_0.outputs, 1, VAR_1.delta + VAR_2*VAR_0.inputs, 1);
        }
    }else{
        FUNC_3(VAR_0.delta, VAR_0.w, VAR_0.h, VAR_0.c, VAR_0.batch, VAR_0.stride, 1, VAR_1.delta);
    }
}
