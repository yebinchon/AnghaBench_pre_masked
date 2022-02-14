
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; int end; int flags; } ;
struct of_irq {int* specifier; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device_node*,int,struct of_irq*) ;
 int FUNC_1 (char*,int) ;

int FUNC_2(struct device_node *VAR_2, int VAR_3, struct resource *VAR_4)
{
 struct of_irq VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_3, &VAR_5);


 if (VAR_7) {
  FUNC_1("IRQ not found... code = %d", VAR_7);
  return VAR_1;
 }

 VAR_6 = VAR_5.specifier[0];

 FUNC_1("IRQ found = %d", VAR_6);



 if (VAR_4 && VAR_6 != VAR_1) {
  VAR_4->start = VAR_4->end = VAR_6;
  VAR_4->flags = VAR_0;
 }

 return VAR_6;
}
