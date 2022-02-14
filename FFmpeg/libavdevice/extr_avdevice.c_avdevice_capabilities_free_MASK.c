
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* oformat; TYPE_2__* iformat; } ;
struct TYPE_8__ {int (* free_device_capabilities ) (TYPE_3__*,int *) ;} ;
struct TYPE_7__ {int (* free_device_capabilities ) (TYPE_3__*,int *) ;} ;
typedef TYPE_3__ AVFormatContext ;
typedef int AVDeviceCapabilitiesQuery ;


 int FUNC_0 (int) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;

void FUNC_4(AVDeviceCapabilitiesQuery **VAR_0, AVFormatContext *VAR_1)
{
    if (!VAR_1 || !VAR_0 || !(*VAR_0))
        return;
    FUNC_0(VAR_1->iformat || VAR_1->oformat);
    if (VAR_1->iformat) {
        if (VAR_1->iformat->free_device_capabilities)
            VAR_1->iformat->free_device_capabilities(VAR_1, *VAR_0);
    } else {
        if (VAR_1->oformat->free_device_capabilities)
            VAR_1->oformat->free_device_capabilities(VAR_1, *VAR_0);
    }
    FUNC_1(VAR_0);
}
