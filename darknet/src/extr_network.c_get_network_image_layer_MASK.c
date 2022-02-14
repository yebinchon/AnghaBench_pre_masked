
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* layers; } ;
typedef TYPE_1__ network ;
struct TYPE_8__ {int output; scalar_t__ out_c; scalar_t__ out_h; scalar_t__ out_w; } ;
typedef TYPE_2__ layer ;
struct TYPE_9__ {int member_0; } ;
typedef TYPE_3__ image ;


 TYPE_3__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__,int ) ;

image FUNC_1(network *VAR_0, int VAR_1)
{
    layer VAR_2 = VAR_0->layers[VAR_1];



    if (VAR_2.out_w && VAR_2.out_h && VAR_2.out_c){
        return FUNC_0(VAR_2.out_w, VAR_2.out_h, VAR_2.out_c, VAR_2.output);
    }
    image VAR_3 = {0};
    return VAR_3;
}
