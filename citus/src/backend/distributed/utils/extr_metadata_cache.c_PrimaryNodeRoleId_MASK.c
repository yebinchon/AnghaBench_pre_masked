
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ primaryNodeRoleId; } ;
typedef scalar_t__ Oid ;


 scalar_t__ FUNC_0 (char*,char*) ;
 TYPE_1__ VAR_0 ;

Oid
FUNC_1(void)
{
 if (!VAR_0.primaryNodeRoleId)
 {
  VAR_0.primaryNodeRoleId = FUNC_0("noderole", "primary");
 }

 return VAR_0.primaryNodeRoleId;
}
