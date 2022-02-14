
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ ipv6_scope_id; } ;
typedef TYPE_1__ IP ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

bool FUNC_3(IP *VAR_0, IP *VAR_1, IP *VAR_2)
{
 IP VAR_3, VAR_4;

 if (FUNC_2(VAR_0) == 0 || FUNC_2(VAR_1) == 0 || FUNC_2(VAR_2) == 0)
 {
  return 0;
 }

 if (VAR_0->ipv6_scope_id != VAR_1->ipv6_scope_id)
 {
  return 0;
 }

 FUNC_1(&VAR_3, VAR_0, VAR_2);
 FUNC_1(&VAR_4, VAR_1, VAR_2);

 if (FUNC_0(&VAR_3, &VAR_4) == 0)
 {
  return 1;
 }

 return 0;
}
