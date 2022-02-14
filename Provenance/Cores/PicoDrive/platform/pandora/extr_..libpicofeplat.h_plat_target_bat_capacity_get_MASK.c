
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* bat_capacity_get ) () ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static __inline int FUNC_1(void)
{
 if (VAR_0.bat_capacity_get)
  return VAR_0.bat_capacity_get();
 return -1;
}
