
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct net_device {struct device dev; } ;
struct TYPE_2__ {int tx_errors; } ;
struct emac_priv {TYPE_1__ net_dev_stats; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct emac_priv*,int ) ;
 int FUNC_4 (struct emac_priv*,int ) ;
 int FUNC_5 (struct emac_priv*) ;
 int FUNC_6 (struct emac_priv*) ;
 int FUNC_7 (struct emac_priv*,int ) ;
 int FUNC_8 (int ,int ) ;
 struct emac_priv* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct emac_priv*) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_2)
{
 struct emac_priv *VAR_3 = FUNC_9(VAR_2);
 struct device *VAR_4 = &VAR_2->dev;

 if (FUNC_10(VAR_3))
  FUNC_2(VAR_4, "DaVinci EMAC: xmit timeout, restarting TX");

 VAR_3->net_dev_stats.tx_errors++;
 FUNC_5(VAR_3);
 FUNC_7(VAR_3, VAR_0);
 FUNC_3(VAR_3, VAR_0);
 FUNC_4(VAR_3, VAR_0);
 FUNC_8(FUNC_1(0), 0);
 FUNC_8(VAR_1, FUNC_0(VAR_0));
 FUNC_6(VAR_3);
}
