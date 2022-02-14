
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fnptr {unsigned long ip; } ;
typedef scalar_t__ ftrace_func_t ;


 int FUNC_0 (unsigned long,unsigned long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned long,unsigned long) ;

int FUNC_2(ftrace_func_t VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4 = ((struct fnptr *)VAR_0)->ip;

 if (VAR_2 == VAR_1)
  return 0;
 VAR_3 = ((struct fnptr *)VAR_2)->ip;

 FUNC_1(VAR_4 + 2, VAR_3);

 FUNC_0(VAR_4, VAR_4 + 16);
 return 0;
}
