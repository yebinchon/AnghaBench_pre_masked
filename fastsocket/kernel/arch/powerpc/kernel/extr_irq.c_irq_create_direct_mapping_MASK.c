
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_host {scalar_t__ revmap_type; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (struct irq_host*,int,int ) ;
 struct irq_host* VAR_2 ;
 scalar_t__ FUNC_3 (struct irq_host*,unsigned int,unsigned int) ;
 int FUNC_4 (char*,...) ;

unsigned int FUNC_5(struct irq_host *VAR_3)
{
 unsigned int VAR_4;

 if (VAR_3 == ((void*)0))
  VAR_3 = VAR_2;

 FUNC_0(VAR_3 == ((void*)0));
 FUNC_1(VAR_3->revmap_type != VAR_0);

 VAR_4 = FUNC_2(VAR_3, 1, 0);
 if (VAR_4 == VAR_1) {
  FUNC_4("irq: create_direct virq allocation failed\n");
  return VAR_1;
 }

 FUNC_4("irq: create_direct obtained virq %d\n", VAR_4);

 if (FUNC_3(VAR_3, VAR_4, VAR_4))
  return VAR_1;

 return VAR_4;
}
