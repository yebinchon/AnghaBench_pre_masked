
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int status; struct irq_cfg* chip_data; } ;
struct irq_cfg {int vector; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (struct irq_cfg*) ;
 int FUNC_5 (struct irq_desc**) ;
 int VAR_2 ;
 struct irq_desc* FUNC_6 (unsigned int) ;
 int FUNC_7 (struct irq_desc*) ;
 int FUNC_8 (unsigned int) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct irq_desc*) ;

__attribute__((used)) static void FUNC_11(unsigned int VAR_3)
{
 struct irq_desc *VAR_4 = FUNC_6(VAR_3);
 unsigned long VAR_5;
 int VAR_6;
 struct irq_cfg *VAR_7;
 int VAR_8 = 0;

 FUNC_5(&VAR_4);
 VAR_7 = VAR_4->chip_data;
 VAR_6 = VAR_7->vector;
 VAR_5 = FUNC_1(VAR_0 + ((VAR_6 & ~0x1f) >> 1));





 FUNC_0();
 if (!(VAR_5 & (1 << (VAR_6 & 0x1f)))) {
  FUNC_2(&VAR_2);

  FUNC_3(VAR_4);
 }


 if (FUNC_9(VAR_8)) {
  VAR_7 = VAR_4->chip_data;
  if (!FUNC_4(VAR_7))
   FUNC_8(VAR_3);
  FUNC_10(VAR_4);
 }
}
