
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; int name; } ;


 int FUNC_0 (char*,int ) ;
 TYPE_1__* VAR_0 ;

void FUNC_1(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].value; VAR_2++)
 {
  if (VAR_1 & VAR_0[VAR_2].value)
  {
   FUNC_0("%s,", VAR_0[VAR_2].name);
  }
 }
}
