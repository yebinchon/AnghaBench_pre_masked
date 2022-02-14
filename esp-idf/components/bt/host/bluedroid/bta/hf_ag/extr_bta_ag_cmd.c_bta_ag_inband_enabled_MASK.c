
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ inband_enabled; } ;
typedef TYPE_1__ tBTA_AG_SCB ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

BOOLEAN FUNC_1(tBTA_AG_SCB *VAR_2)
{

    if (VAR_2->inband_enabled && !FUNC_0(VAR_2)) {
        return VAR_1;
    } else {
        return VAR_0;
    }
}
