
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct irq_desc {int dummy; } ;
struct ipu_irq_map {unsigned int irq; } ;
struct ipu_irq_bank {int control; int status; } ;
struct ipu {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned int) ;
 struct ipu* FUNC_2 (unsigned int) ;
 unsigned long FUNC_3 (struct ipu*,int ) ;
 struct ipu_irq_bank* VAR_3 ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct ipu_irq_map* FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(unsigned int VAR_4, struct irq_desc *VAR_5)
{
 struct ipu *VAR_6 = FUNC_2(VAR_4);
 u32 VAR_7;
 int VAR_8, VAR_9;

 for (VAR_8 = VAR_1; VAR_8 < VAR_0; VAR_8++) {
  struct ipu_irq_bank *VAR_10 = VAR_3 + VAR_8;

  FUNC_5(&VAR_2);
  VAR_7 = FUNC_3(VAR_6, VAR_10->status);





  VAR_7 &= FUNC_3(VAR_6, VAR_10->control);
  FUNC_6(&VAR_2);
  while ((VAR_9 = FUNC_0(VAR_7))) {
   struct ipu_irq_map *VAR_11;

   VAR_9--;
   VAR_7 &= ~(1UL << VAR_9);

   FUNC_5(&VAR_2);
   VAR_11 = FUNC_7(32 * VAR_8 + VAR_9);
   if (VAR_11)
    VAR_4 = VAR_11->irq;
   FUNC_6(&VAR_2);

   if (!VAR_11) {
    FUNC_4("IPU: Interrupt on unmapped source %u bank %d\n",
           VAR_9, VAR_8);
    continue;
   }
   FUNC_1(VAR_4);
  }
 }
}
