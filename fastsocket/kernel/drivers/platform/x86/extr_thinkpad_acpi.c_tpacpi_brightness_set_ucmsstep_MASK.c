
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(unsigned int VAR_3)
{
 int VAR_4, VAR_5;
 unsigned int VAR_6, VAR_7;

 VAR_6 = FUNC_1();

 if (VAR_3 == VAR_6)
  return 0;

 VAR_4 = (VAR_3 > VAR_6) ?
   VAR_2 :
   VAR_1;
 VAR_5 = (VAR_3 > VAR_6) ? 1 : -1;

 for (VAR_7 = VAR_6; VAR_7 != VAR_3; VAR_7 += VAR_5)
  if (FUNC_0(VAR_4))
   return -VAR_0;

 return 0;
}
