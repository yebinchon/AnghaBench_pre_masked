
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct au1550_spi {TYPE_1__* regs; } ;
struct TYPE_2__ {int psc_spipcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct au1550_spi *VAR_2)
{
 u32 VAR_3;

 VAR_2->regs->psc_spipcr = VAR_0 | VAR_1;
 FUNC_0();
 do {
  VAR_3 = VAR_2->regs->psc_spipcr;
  FUNC_0();
 } while (VAR_3 != 0);
}
