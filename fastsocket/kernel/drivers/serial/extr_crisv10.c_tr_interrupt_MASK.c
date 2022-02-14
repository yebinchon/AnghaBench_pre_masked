
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct e100_serial {unsigned long irq; size_t line; int last_tx_active; int last_tx_active_usec; int uses_dma_out; int enabled; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int tx_dma_ints; } ;


 int FUNC_0 (size_t,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 unsigned long* VAR_2 ;
 int FUNC_5 (char const*,int ) ;
 int VAR_3 ;
 struct e100_serial* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (struct e100_serial*) ;

__attribute__((used)) static irqreturn_t
FUNC_8(int VAR_6, void *VAR_7)
{
 struct e100_serial *VAR_8;
 unsigned long VAR_9;
 int VAR_10;
 int VAR_11 = 0;
 VAR_9 = *VAR_2;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  VAR_8 = VAR_4 + VAR_10;
  if (!VAR_8->enabled || !VAR_8->uses_dma_out)
   continue;

  if (VAR_9 & VAR_8->irq) {
   VAR_11 = 1;

   FUNC_1(FUNC_0(VAR_8->line, "tr_interrupt %i\n", VAR_10));



    FUNC_4(VAR_5[VAR_8->line].tx_dma_ints++);
   VAR_8->last_tx_active_usec = FUNC_2();
   VAR_8->last_tx_active = VAR_3;
   FUNC_7(VAR_8);
  }



 }
 return FUNC_3(VAR_11);
}
