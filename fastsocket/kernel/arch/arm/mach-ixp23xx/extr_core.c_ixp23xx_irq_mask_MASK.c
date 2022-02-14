
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long* VAR_0 ;

__attribute__((used)) static void FUNC_0(unsigned int VAR_1)
{
 volatile unsigned long *VAR_2;

 if (VAR_1 >= 56)
  VAR_1 += 8;

 VAR_2 = VAR_0 + (VAR_1 / 32);
 *VAR_2 &= ~(1 << (VAR_1 % 32));
}
