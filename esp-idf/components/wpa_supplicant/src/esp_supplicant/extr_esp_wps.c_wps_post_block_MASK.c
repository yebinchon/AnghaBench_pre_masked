
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ret; void* arg; } ;
typedef TYPE_1__ wps_ioctl_param_t ;
typedef int uint32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

int FUNC_2(uint32_t VAR_5, void *VAR_6)
{
    wps_ioctl_param_t VAR_7;

    VAR_7.ret = VAR_0;
    VAR_7.arg = VAR_6;

    if (VAR_1 != FUNC_0(VAR_5, (uint32_t)&VAR_7)) {
        return VAR_0;
    }

    if (VAR_2 == FUNC_1(VAR_4, VAR_3)) {
        return VAR_7.ret;
    } else {
        return VAR_0;
    }
}
