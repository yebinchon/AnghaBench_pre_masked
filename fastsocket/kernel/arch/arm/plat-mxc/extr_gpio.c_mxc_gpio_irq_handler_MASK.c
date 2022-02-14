
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mxc_gpio_port {int virtual_irq_start; int both_edges; } ;
struct TYPE_3__ {int (* handle_irq ) (int,TYPE_1__*) ;} ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mxc_gpio_port*,int) ;
 int FUNC_3 (int,TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct mxc_gpio_port *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 VAR_3 = VAR_1->virtual_irq_start;
 for (; VAR_2 != 0; VAR_2 >>= 1, VAR_3++) {
  u32 VAR_4 = FUNC_1(VAR_3);

  if ((VAR_2 & 1) == 0)
   continue;

  FUNC_0(!(VAR_0[VAR_3].handle_irq));

  if (VAR_1->both_edges & (1 << (VAR_4 & 31)))
   FUNC_2(VAR_1, VAR_4);

  VAR_0[VAR_3].handle_irq(VAR_3,
    &VAR_0[VAR_3]);
 }
}
