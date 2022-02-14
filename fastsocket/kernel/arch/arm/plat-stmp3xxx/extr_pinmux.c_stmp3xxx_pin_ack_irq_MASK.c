
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stmp3xxx_pinmux_bank {int irqstat; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned int,struct stmp3xxx_pinmux_bank**,unsigned int*) ;

__attribute__((used)) static void FUNC_3(unsigned VAR_0)
{
 u32 VAR_1;
 struct stmp3xxx_pinmux_bank *VAR_2;
 unsigned VAR_3;

 FUNC_2(VAR_0, &VAR_2, &VAR_3);
 VAR_1 = FUNC_0(VAR_2->irqstat) & (1 << VAR_3);
 FUNC_1(VAR_1, VAR_2->irqstat);
}
