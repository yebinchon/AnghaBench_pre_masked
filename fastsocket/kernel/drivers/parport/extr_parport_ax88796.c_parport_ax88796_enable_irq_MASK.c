
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int irq; } ;
struct ax_drvdata {int irq_enabled; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 struct ax_drvdata* FUNC_3 (struct parport*) ;

__attribute__((used)) static void
FUNC_4(struct parport *VAR_0)
{
 struct ax_drvdata *VAR_1 = FUNC_3(VAR_0);
 unsigned long VAR_2;

 FUNC_2(VAR_2);
 if (!VAR_1->irq_enabled) {
  FUNC_0(VAR_0->irq);
  VAR_1->irq_enabled = 1;
 }
 FUNC_1(VAR_2);
}
