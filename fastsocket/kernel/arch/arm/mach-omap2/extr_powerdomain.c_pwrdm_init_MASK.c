
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerdomain {int dummy; } ;


 int FUNC_0 (struct powerdomain*) ;
 int FUNC_1 (struct powerdomain*) ;

void FUNC_2(struct powerdomain **VAR_0)
{
 struct powerdomain **VAR_1 = ((void*)0);

 if (VAR_0) {
  for (VAR_1 = VAR_0; *VAR_1; VAR_1++) {
   FUNC_1(*VAR_1);
   FUNC_0(*VAR_1);
  }
 }
}
