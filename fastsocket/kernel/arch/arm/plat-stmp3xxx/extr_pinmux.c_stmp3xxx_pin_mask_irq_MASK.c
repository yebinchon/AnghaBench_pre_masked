
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmp3xxx_pinmux_bank {int pin2irq; int irqen; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (unsigned int,struct stmp3xxx_pinmux_bank**,unsigned int*) ;

__attribute__((used)) static void FUNC_2(unsigned VAR_0)
{
 struct stmp3xxx_pinmux_bank *VAR_1;
 unsigned VAR_2;

 FUNC_1(VAR_0, &VAR_1, &VAR_2);
 FUNC_0(1 << VAR_2, VAR_1->irqen);
 FUNC_0(1 << VAR_2, VAR_1->pin2irq);
}
