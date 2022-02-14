
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsc_asic {unsigned int* global_irq; int name; scalar_t__ hpa; } ;
typedef int irqreturn_t ;


 int FUNC_0 (char*,int ,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (scalar_t__) ;

irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 unsigned long VAR_5;
 struct gsc_asic *VAR_6 = VAR_4;

 VAR_5 = FUNC_3(VAR_6->hpa + VAR_2);
 if (VAR_5 == 0)
  return VAR_1;

 FUNC_0("%s intr, mask=0x%x\n", VAR_6->name, VAR_5);

 do {
  int VAR_7 = FUNC_2(VAR_5);
  unsigned int VAR_8 = VAR_6->global_irq[VAR_7];
  FUNC_1(VAR_8);
  VAR_5 &= ~(1 << VAR_7);
 } while (VAR_5);

 return VAR_0;
}
