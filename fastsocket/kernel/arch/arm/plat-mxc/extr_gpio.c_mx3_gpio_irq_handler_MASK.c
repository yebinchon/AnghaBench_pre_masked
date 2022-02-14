
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mxc_gpio_port {scalar_t__ base; } ;
struct irq_desc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mxc_gpio_port*,int) ;

__attribute__((used)) static void FUNC_3(u32 VAR_2, struct irq_desc *VAR_3)
{
 u32 VAR_4;
 struct mxc_gpio_port *VAR_5 = (struct mxc_gpio_port *)FUNC_1(VAR_2);

 VAR_4 = FUNC_0(VAR_5->base + VAR_1) &
   FUNC_0(VAR_5->base + VAR_0);

 FUNC_2(VAR_5, VAR_4);
}
