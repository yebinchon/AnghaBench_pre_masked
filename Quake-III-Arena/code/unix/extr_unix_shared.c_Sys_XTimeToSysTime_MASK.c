
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

int FUNC_2 (unsigned long VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 if (!VAR_0->value)
 {

  return FUNC_1();
 }
  VAR_3 = VAR_2 - (unsigned long)(VAR_1*1000);
  VAR_4 = FUNC_1();
  VAR_5 = VAR_4 - VAR_3;

  if (VAR_5 < 0 || VAR_5 > 30)
  {
    return VAR_4;
  }

 return VAR_3;
}
