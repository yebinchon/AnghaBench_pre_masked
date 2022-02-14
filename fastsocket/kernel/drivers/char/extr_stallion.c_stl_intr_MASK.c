
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stlbrd {int (* isr ) (struct stlbrd*) ;int irq; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,struct stlbrd*,int ) ;
 int FUNC_2 (struct stlbrd*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_0, void *VAR_1)
{
 struct stlbrd *VAR_2 = VAR_1;

 FUNC_1("stl_intr(brdp=%p,irq=%d)\n", VAR_2, VAR_2->irq);

 return FUNC_0((* VAR_2->isr)(VAR_2));
}
