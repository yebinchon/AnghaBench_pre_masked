
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline char *FUNC_4(int VAR_0)
{
 if (FUNC_3(VAR_0))
  return "Isoc";
 if (FUNC_2(VAR_0))
  return "Int";
 if (FUNC_1(VAR_0))
  return "Ctrl";
 if (FUNC_0(VAR_0))
  return "Bulk";
 return "?";
}
