
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* private_ref; } ;
struct TYPE_8__ {scalar_t__ hwaccel_priv; } ;
struct TYPE_7__ {int idx; } ;
struct TYPE_6__ {scalar_t__ data; } ;
typedef TYPE_2__ NVDECFrame ;
typedef TYPE_3__ FrameDecodeData ;
typedef TYPE_4__ AVFrame ;



int FUNC_0(AVFrame *VAR_0)
{
    FrameDecodeData *VAR_1;
    NVDECFrame *VAR_2;

    if (!VAR_0 || !VAR_0->private_ref)
        return -1;

    VAR_1 = (FrameDecodeData*)VAR_0->private_ref->data;
    VAR_2 = (NVDECFrame*)VAR_1->hwaccel_priv;
    if (!VAR_2)
        return -1;

    return VAR_2->idx;
}
