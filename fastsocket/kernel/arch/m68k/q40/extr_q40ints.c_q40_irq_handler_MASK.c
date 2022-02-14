
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pt_regs {int sr; } ;
struct TYPE_2__ {int mask; unsigned int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_0 (unsigned int,struct pt_regs*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (unsigned int) ;
 int VAR_14 ;
 TYPE_1__* VAR_15 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 () ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 scalar_t__ VAR_16 ;
 int FUNC_6 (char*,unsigned int) ;
 int* VAR_17 ;

__attribute__((used)) static void FUNC_7(unsigned int VAR_18, struct pt_regs *VAR_19)
{
 unsigned VAR_20, VAR_21;
 int VAR_22;


 VAR_20 = FUNC_4(VAR_2);







 switch (VAR_18) {
 case 4:
 case 6:
  FUNC_0(VAR_10, VAR_19);
  return;
 }
 if (VAR_20 & VAR_7) {
  FUNC_0(VAR_6, VAR_19);
  FUNC_5(-1, VAR_1);
 }
 if ((VAR_20 & VAR_11) || (VAR_20 & VAR_5)) {
  VAR_21 = FUNC_4(VAR_0);
  for (VAR_22 = 0; VAR_15[VAR_22].mask; VAR_22++) {
   if (VAR_21 & VAR_15[VAR_22].mask) {
    VAR_18 = VAR_15[VAR_22].irq;






    if (VAR_18 > 4 && VAR_18 <= 15 && VAR_16) {

     goto iirq;
    }
    if (VAR_17[VAR_18] & VAR_3) {
     VAR_19->sr = (((VAR_19->sr) & (~0x700))+0x200);
     VAR_14 = 1;

     goto iirq;
    }
    VAR_17[VAR_18] |= VAR_3;
    FUNC_0(VAR_18, VAR_19);
    VAR_17[VAR_18] &= ~VAR_3;





    if (VAR_14) {






     VAR_14 = 0;


    }

    return;
   }
  }
  if (VAR_21 && VAR_13 > 0 && !VAR_12) {
   FUNC_6("ISA interrupt from unknown source? EIRQ_REG = %x\n",VAR_21);
   VAR_13--;
  }
 }
 iirq:
 VAR_20 = FUNC_4(VAR_2);

 if (VAR_20 & VAR_9)
  FUNC_0(VAR_8, VAR_19);

 return;
}
