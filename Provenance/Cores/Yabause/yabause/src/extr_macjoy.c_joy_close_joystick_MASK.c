
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ open; TYPE_2__** iface; } ;
typedef TYPE_1__ joydata_t ;
struct TYPE_5__ {scalar_t__ (* close ) (TYPE_2__**) ;} ;
typedef scalar_t__ IOReturn ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__**) ;

int FUNC_1(joydata_t *VAR_2) {
    IOReturn VAR_3;

    if(!VAR_2->open) {
        return 1;
    }

    VAR_3 = (*VAR_2->iface)->close(VAR_2->iface);

    if(VAR_3 == VAR_0) {

        return 1;
    }
    else if(VAR_3 != VAR_1) {
        return 0;
    }

    VAR_2->open = 0;

    return 1;
}
