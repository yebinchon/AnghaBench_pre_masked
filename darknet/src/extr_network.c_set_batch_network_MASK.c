
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int batch; int n; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {int batch; scalar_t__ type; int out_h; int out_w; int out_c; int normTensorDesc; int dstTensorDesc; } ;
typedef TYPE_2__ layer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,int ,int,int) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(network *VAR_4, int VAR_5)
{
    VAR_4->batch = VAR_5;
    int VAR_6;
    for(VAR_6 = 0; VAR_6 < VAR_4->n; ++VAR_6){
        VAR_4->layers[VAR_6].batch = VAR_5;
    }
}
