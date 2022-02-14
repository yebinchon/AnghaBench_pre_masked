
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3cmci_host {int irq_disabled; int irq_state; int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static void FUNC_3(struct s3cmci_host *VAR_0, bool VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(VAR_2);



 VAR_0->irq_disabled = VAR_1;

 if (VAR_1 && VAR_0->irq_state) {
  VAR_0->irq_state = 0;
  FUNC_0(VAR_0->irq);
 }

 FUNC_1(VAR_2);
}
