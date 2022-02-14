
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,void volatile*) ;
 int FUNC_1 (int,void volatile*) ;
 scalar_t__ FUNC_2 (int,void volatile*) ;

int FUNC_3(int VAR_0, volatile void *VAR_1)
{
 if (FUNC_2(VAR_0, VAR_1))
  goto try_clear_bit;

try_set_bit:
 if (!FUNC_1(VAR_0, VAR_1))
  return 0;

try_clear_bit:
 if (FUNC_0(VAR_0, VAR_1))
  return 1;

 goto try_set_bit;
}
