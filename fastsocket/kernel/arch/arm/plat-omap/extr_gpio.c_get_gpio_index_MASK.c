
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static inline int FUNC_4(int VAR_0)
{
 if (FUNC_3())
  return VAR_0 & 0x1f;
 if (FUNC_0())
  return VAR_0 & 0x1f;
 if (FUNC_1() || FUNC_2())
  return VAR_0 & 0x1f;
 return VAR_0 & 0x0f;
}
