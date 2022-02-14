
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ciabase {int cia_irq; int int_mask; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int intreq; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 unsigned char FUNC_0 (struct ciabase*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_3, void *VAR_4)
{
 struct ciabase *VAR_5 = VAR_4;
 int VAR_6;
 unsigned char VAR_7;

 VAR_6 = VAR_5->cia_irq;
 VAR_7 = FUNC_0(VAR_5, VAR_0);
 VAR_2.intreq = VAR_5->int_mask;
 for (; VAR_7; VAR_6++, VAR_7 >>= 1) {
  if (VAR_7 & 1)
   FUNC_1(VAR_6);
 }
 return VAR_1;
}
