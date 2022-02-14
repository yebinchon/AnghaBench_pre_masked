
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long __get_cpu_var ;
struct TYPE_2__ {int (* set_dabr ) (unsigned long) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned long) ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (unsigned long) ;

int FUNC_2(unsigned long VAR_3)
{
 __get_cpu_var(VAR_4) = VAR_3;

 if (VAR_2.set_dabr)
  return VAR_2.set_dabr(VAR_3);
 return 0;
}
