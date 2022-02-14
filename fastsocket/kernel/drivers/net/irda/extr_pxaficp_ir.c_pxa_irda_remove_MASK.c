
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int head; } ;
struct TYPE_5__ {int head; } ;
struct pxa_irda {int sir_clk; int fir_clk; TYPE_3__ rx_buff; TYPE_2__ tx_buff; int dev; TYPE_1__* pdata; } ;
struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int (* shutdown ) (int ) ;int gpio_pwdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct pxa_irda* FUNC_6 (struct net_device*) ;
 struct net_device* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_2)
{
 struct net_device *VAR_3 = FUNC_7(VAR_2);

 if (VAR_3) {
  struct pxa_irda *VAR_4 = FUNC_6(VAR_3);
  FUNC_10(VAR_3);
  if (FUNC_4(VAR_4->pdata->gpio_pwdown))
   FUNC_3(VAR_4->pdata->gpio_pwdown);
  if (VAR_4->pdata->shutdown)
   VAR_4->pdata->shutdown(VAR_4->dev);
  FUNC_5(VAR_4->tx_buff.head);
  FUNC_5(VAR_4->rx_buff.head);
  FUNC_1(VAR_4->fir_clk);
  FUNC_1(VAR_4->sir_clk);
  FUNC_2(VAR_3);
 }

 FUNC_8(FUNC_0(VAR_1), 0x24);
 FUNC_8(FUNC_0(VAR_0), 0x1c);

 return 0;
}
