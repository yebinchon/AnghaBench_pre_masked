
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_8__ {TYPE_1__* internal; } ;
struct TYPE_7__ {scalar_t__ device_hwconfig_size; } ;
struct TYPE_6__ {TYPE_2__* hw_type; } ;
typedef TYPE_2__ HWContextType ;
typedef TYPE_3__ AVHWDeviceContext ;
typedef TYPE_4__ AVBufferRef ;


 void* FUNC_0 (scalar_t__) ;

void *FUNC_1(AVBufferRef *VAR_0)
{
    AVHWDeviceContext *VAR_1 = (AVHWDeviceContext*)VAR_0->data;
    const HWContextType *VAR_2 = VAR_1->internal->hw_type;

    if (VAR_2->device_hwconfig_size == 0)
        return ((void*)0);

    return FUNC_0(VAR_2->device_hwconfig_size);
}
