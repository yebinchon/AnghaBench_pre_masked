
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int n; TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_6__ {scalar_t__ type; int w; int h; int n; } ;
typedef TYPE_2__ layer ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__,float) ;

int FUNC_1(network *VAR_3, float VAR_4)
{
    int VAR_5;
    int VAR_6 = 0;
    for(VAR_5 = 0; VAR_5 < VAR_3->n; ++VAR_5){
        layer VAR_7 = VAR_3->layers[VAR_5];
        if(VAR_7.type == VAR_2){
            VAR_6 += FUNC_0(VAR_7, VAR_4);
        }
        if(VAR_7.type == VAR_0 || VAR_7.type == VAR_1){
            VAR_6 += VAR_7.w*VAR_7.h*VAR_7.n;
        }
    }
    return VAR_6;
}
