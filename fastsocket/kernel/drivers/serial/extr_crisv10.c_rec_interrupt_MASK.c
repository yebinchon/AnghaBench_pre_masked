
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e100_serial {int irq; int uses_dma_in; int enabled; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 unsigned long* VAR_2 ;
 int FUNC_1 (char const*,int ) ;
 int FUNC_2 (struct e100_serial*) ;
 struct e100_serial* VAR_3 ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_4, void *VAR_5)
{
 struct e100_serial *VAR_6;
 unsigned long VAR_7;
 int VAR_8;
 int VAR_9 = 0;
 VAR_7 = *VAR_2;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_6 = VAR_3 + VAR_8;
  if (!VAR_6->enabled || !VAR_6->uses_dma_in)
   continue;

  if (VAR_7 & ((VAR_6->irq << 2) | (VAR_6->irq << 3))) {
   VAR_9 = 1;

   FUNC_2(VAR_6);
  }



 }
 return FUNC_0(VAR_9);
}
