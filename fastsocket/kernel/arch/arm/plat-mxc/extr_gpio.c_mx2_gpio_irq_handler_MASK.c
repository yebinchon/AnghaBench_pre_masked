
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
 int VAR_2 ;
 int FUNC_2 (struct mxc_gpio_port*,int) ;

__attribute__((used)) static void FUNC_3(u32 VAR_3, struct irq_desc *VAR_4)
{
 int VAR_5;
 u32 VAR_6, VAR_7;
 struct mxc_gpio_port *VAR_8 = (struct mxc_gpio_port *)FUNC_1(VAR_3);


 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6 = FUNC_0(VAR_8[VAR_5].base + VAR_0);
  if (!VAR_6)
   continue;

  VAR_7 = FUNC_0(VAR_8[VAR_5].base + VAR_1) & VAR_6;
  if (VAR_7)
   FUNC_2(&VAR_8[VAR_5], VAR_7);
 }
}
