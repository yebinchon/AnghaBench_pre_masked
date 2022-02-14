
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ieee754dp ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned int) ;

ieee754dp FUNC_3(unsigned int VAR_0)
{
 if ((int) VAR_0 < 0)
  return FUNC_1(FUNC_0(),
         FUNC_2(VAR_0 & ~(1 << 31)));
 return FUNC_2(VAR_0);
}
