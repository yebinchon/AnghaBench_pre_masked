
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ipv6_scope_id; } ;
typedef TYPE_1__ IP ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;

void FUNC_1(IP *VAR_0, IP *VAR_1, IP *VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, VAR_1, VAR_2);

 VAR_0->ipv6_scope_id = VAR_1->ipv6_scope_id;
}
