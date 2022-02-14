
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ main_timestamp; } ;
typedef TYPE_1__ vm_map_version_t ;
typedef TYPE_2__* vm_map_t ;
typedef int boolean_t ;
struct TYPE_7__ {scalar_t__ timestamp; } ;


 int FUNC_0 (TYPE_2__*) ;

boolean_t
FUNC_1(
 vm_map_t VAR_0,
 vm_map_version_t *VAR_1)
{
 boolean_t VAR_2;

 FUNC_0(VAR_0);
 VAR_2 = (VAR_0->timestamp == VAR_1->main_timestamp);

 return(VAR_2);
}
