
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct egpio_info {int irq_start; int irqs_enabled; int ack_register; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct egpio_info*) ;
 struct egpio_info* FUNC_1 (struct device*) ;
 int FUNC_2 (struct egpio_info*,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct device *VAR_0)
{
 struct egpio_info *VAR_1 = FUNC_1(VAR_0);


 u16 VAR_2 = FUNC_2(VAR_1, VAR_1->ack_register);

 FUNC_0(VAR_1);

 VAR_2 &= VAR_1->irqs_enabled;
 return VAR_1->irq_start + FUNC_3(VAR_2) - 1;
}
