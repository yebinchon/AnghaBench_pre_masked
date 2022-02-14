
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static inline unsigned long FUNC_2(void)
{

 if (FUNC_1())
  return (FUNC_0() & 0x7ffUL) << VAR_0;
 else
  return (FUNC_0() & 0x3ffffUL) << VAR_0;
}
