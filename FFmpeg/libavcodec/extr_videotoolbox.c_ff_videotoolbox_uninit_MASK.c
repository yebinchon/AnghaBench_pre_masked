
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ frame; int bitstream; } ;
typedef TYPE_2__ VTContext ;
struct TYPE_7__ {TYPE_1__* internal; } ;
struct TYPE_5__ {TYPE_2__* hwaccel_priv_data; } ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;

int FUNC_2(AVCodecContext *VAR_0)
{
    VTContext *VAR_1 = VAR_0->internal->hwaccel_priv_data;
    if (VAR_1) {
        FUNC_1(&VAR_1->bitstream);
        if (VAR_1->frame)
            FUNC_0(VAR_1->frame);
    }

    return 0;
}
