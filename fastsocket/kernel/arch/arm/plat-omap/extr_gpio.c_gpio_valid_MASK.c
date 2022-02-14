
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static inline int FUNC_8(int VAR_1)
{
 if (VAR_1 < 0)
  return -1;
 if (FUNC_1() && FUNC_0(VAR_1)) {
  if (VAR_1 >= VAR_0 + 16)
   return -1;
  return 0;
 }
 if (FUNC_2() && VAR_1 < 16)
  return 0;
 if ((FUNC_3()) && VAR_1 < 64)
  return 0;
 if (FUNC_7() && VAR_1 < 192)
  return 0;
 if (FUNC_4() && VAR_1 < 128)
  return 0;
 if ((FUNC_5() || FUNC_6()) && VAR_1 < 192)
  return 0;
 return -1;
}
