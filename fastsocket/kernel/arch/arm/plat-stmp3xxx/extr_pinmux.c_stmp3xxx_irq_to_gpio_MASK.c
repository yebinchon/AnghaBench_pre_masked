
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_pinmux_bank {int virq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct stmp3xxx_pinmux_bank* VAR_2 ;

__attribute__((used)) static int FUNC_0(int VAR_3,
 struct stmp3xxx_pinmux_bank **VAR_4, unsigned *VAR_5)
{
 struct stmp3xxx_pinmux_bank *VAR_6;

 for (VAR_6 = VAR_2; VAR_6 < VAR_2 + VAR_1; VAR_6++)
  if (VAR_6->virq <= VAR_3 && VAR_3 < VAR_6->virq + 32) {
   *VAR_4 = VAR_6;
   *VAR_5 = VAR_3 - VAR_6->virq;
   return 0;
  }
 return -VAR_0;
}
