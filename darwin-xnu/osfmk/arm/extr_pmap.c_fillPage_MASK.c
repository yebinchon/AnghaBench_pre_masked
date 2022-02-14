
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ppnum_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(
 ppnum_t VAR_1,
 unsigned int VAR_2)
{
 unsigned int *VAR_3;
 int VAR_4;

 VAR_3 = (unsigned int *) FUNC_0(FUNC_1(VAR_1));
 VAR_4 = VAR_0 / sizeof(unsigned int);
 while (VAR_4--)
  *VAR_3++ = VAR_2;
}
