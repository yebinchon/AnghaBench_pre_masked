
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 () ;

__attribute__((used)) static unsigned long FUNC_1(void)
{
 int VAR_0;
 unsigned long VAR_1 = 0;
 unsigned long VAR_2 = 0;

 for (VAR_0 = 0; VAR_0 <= 31; VAR_0++) {
  VAR_1 |= FUNC_0() << VAR_2;
  VAR_2++;
 }
 return VAR_1;
}
