
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hard_trap_info {int tt; int signo; } ;


 int VAR_0 ;
 struct hard_trap_info* VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2)
{
 struct hard_trap_info *VAR_3;

 for (VAR_3 = VAR_1; VAR_3->tt && VAR_3->signo; VAR_3++)
  if (VAR_3->tt == VAR_2)
   return VAR_3->signo;

 return VAR_0;
}
