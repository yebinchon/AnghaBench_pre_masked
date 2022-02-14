
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ieee754dp ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

unsigned int FUNC_4(ieee754dp VAR_0)
{
 ieee754dp VAR_1 = FUNC_0();


 if (FUNC_1(VAR_0, VAR_1))
  return (unsigned) FUNC_3(VAR_0);

 return (unsigned) FUNC_3(FUNC_2(VAR_0, VAR_1)) |
     ((unsigned) 1 << 31);
}
