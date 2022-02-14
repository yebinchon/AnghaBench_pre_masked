
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct speedtab {int sp_speed; int sp_code; } ;



int
FUNC_0(int VAR_0, struct speedtab *VAR_1)
{
 for ( ; VAR_1->sp_speed != -1; VAR_1++)
  if (VAR_1->sp_speed == VAR_0)
   return (VAR_1->sp_code);
 return (-1);
}
