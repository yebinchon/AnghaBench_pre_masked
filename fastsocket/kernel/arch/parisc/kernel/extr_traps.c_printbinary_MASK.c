
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(char *VAR_0, unsigned long VAR_1, int VAR_2)
{
 unsigned long VAR_3 = 1UL << (VAR_2 - 1);
 while (VAR_3 != 0) {
  *VAR_0++ = (VAR_3 & VAR_1 ? '1' : '0');
  VAR_3 >>= 1;
 }
 *VAR_0 = '\0';

 return VAR_2;
}
