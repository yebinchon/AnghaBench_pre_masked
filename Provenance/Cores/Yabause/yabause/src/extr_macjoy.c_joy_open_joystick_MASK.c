
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int open; TYPE_2__** iface; } ;
typedef TYPE_1__ joydata_t ;
struct TYPE_5__ {scalar_t__ (* open ) (TYPE_2__**,int ) ;} ;


 scalar_t__ FUNC_0 (TYPE_2__**,int ) ;

int FUNC_1(joydata_t *VAR_0) {
    if((*VAR_0->iface)->open(VAR_0->iface, 0)) {
        return 0;
    }

    VAR_0->open = 1;

    return 1;
}
