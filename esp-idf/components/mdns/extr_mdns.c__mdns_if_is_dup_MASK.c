
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t mdns_if_t ;
struct TYPE_6__ {TYPE_2__* interfaces; } ;
struct TYPE_5__ {TYPE_1__* pcbs; } ;
struct TYPE_4__ {scalar_t__ state; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t FUNC_0 (size_t) ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static bool FUNC_1(mdns_if_t VAR_5)
{
    mdns_if_t VAR_6 = FUNC_0 (VAR_5);
    if (VAR_6 == VAR_0) {
        return 0;
    }
    if (VAR_4->interfaces[VAR_5].pcbs[VAR_1].state == VAR_3
        || VAR_4->interfaces[VAR_5].pcbs[VAR_2].state == VAR_3
        || VAR_4->interfaces[VAR_6].pcbs[VAR_1].state == VAR_3
        || VAR_4->interfaces[VAR_6].pcbs[VAR_2].state == VAR_3
    ) {
        return 1;
    }
    return 0;
}
