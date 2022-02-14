
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct plat_cpmac_data {int reset_bit; } ;
struct net_device {int dummy; } ;
struct cpmac_priv {int regs; TYPE_2__* pdev; } ;
struct TYPE_3__ {struct plat_cpmac_data* platform_data; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct cpmac_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_8)
{
 int VAR_9;
 struct cpmac_priv *VAR_10 = FUNC_5(VAR_8);
 struct plat_cpmac_data *VAR_11 = VAR_10->pdev->dev.platform_data;

 FUNC_2(VAR_11->reset_bit);
 FUNC_4(VAR_10->regs, VAR_2,
      FUNC_3(VAR_10->regs, VAR_2) & ~1);
 FUNC_4(VAR_10->regs, VAR_4,
      FUNC_3(VAR_10->regs, VAR_4) & ~1);
 for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
  FUNC_4(VAR_10->regs, FUNC_1(VAR_9), 0);
  FUNC_4(VAR_10->regs, FUNC_0(VAR_9), 0);
 }
 FUNC_4(VAR_10->regs, VAR_6, 0xff);
 FUNC_4(VAR_10->regs, VAR_3, 0xff);
 FUNC_4(VAR_10->regs, VAR_5, 0xff);
 FUNC_4(VAR_10->regs, VAR_1, 0xff);
 FUNC_4(VAR_10->regs, VAR_0,
      FUNC_3(VAR_10->regs, VAR_0) & ~VAR_7);
}
