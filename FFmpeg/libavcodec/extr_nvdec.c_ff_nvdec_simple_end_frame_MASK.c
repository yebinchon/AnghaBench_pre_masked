
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* internal; } ;
struct TYPE_7__ {int * bitstream; } ;
struct TYPE_6__ {TYPE_2__* hwaccel_priv_data; } ;
typedef TYPE_2__ NVDECContext ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (TYPE_3__*) ;

int FUNC_1(AVCodecContext *VAR_0)
{
    NVDECContext *VAR_1 = VAR_0->internal->hwaccel_priv_data;
    int VAR_2 = FUNC_0(VAR_0);
    VAR_1->bitstream = ((void*)0);
    return VAR_2;
}
