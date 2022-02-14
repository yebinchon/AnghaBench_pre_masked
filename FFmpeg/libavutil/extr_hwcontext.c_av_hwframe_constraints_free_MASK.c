
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* valid_sw_formats; struct TYPE_4__* valid_hw_formats; } ;
typedef TYPE_1__ AVHWFramesConstraints ;


 int FUNC_0 (TYPE_1__**) ;

void FUNC_1(AVHWFramesConstraints **VAR_0)
{
    if (*VAR_0) {
        FUNC_0(&(*VAR_0)->valid_hw_formats);
        FUNC_0(&(*VAR_0)->valid_sw_formats);
    }
    FUNC_0(VAR_0);
}
