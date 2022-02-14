
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int keybits_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(keybits_t *VAR_1, int VAR_2, int VAR_3)
{
 keybits_t *VAR_4, VAR_5;

 VAR_5 = 1;
 VAR_5 <<= VAR_2 & (VAR_0 - 1);
 VAR_4 = VAR_1 + VAR_2 / VAR_0;
 if (VAR_3)
  *VAR_4 |= VAR_5;
 else
  *VAR_4 &= ~VAR_5;
}
