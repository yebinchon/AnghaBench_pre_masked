
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ platform_data; } ;
struct platform_device {int id; TYPE_2__ dev; } ;
struct netxeth_platform_data {int xcno; } ;
struct netx_eth_priv {TYPE_1__* xc; int id; int lock; int sram_base; int xmac_base; int xpec_base; } ;
struct net_device {int irq; } ;
struct TYPE_6__ {int sram_base; int xmac_base; int xpec_base; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,TYPE_2__*) ;
 struct net_device* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (TYPE_1__*) ;
 struct netx_eth_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct platform_device*,struct net_device*) ;
 int FUNC_11 (char*,...) ;
 TYPE_1__* FUNC_12 (int ,TYPE_2__*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_3)
{
 struct netx_eth_priv *VAR_4;
 struct net_device *VAR_5;
 struct netxeth_platform_data *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(sizeof (struct netx_eth_priv));
 if (!VAR_5) {
  FUNC_11("%s: could not allocate device.\n", VAR_0);
  VAR_7 = -VAR_2;
  goto exit;
 }
 FUNC_1(VAR_5, &VAR_3->dev);

 FUNC_10(VAR_3, VAR_5);

 VAR_4 = FUNC_6(VAR_5);

 VAR_6 = (struct netxeth_platform_data *)VAR_3->dev.platform_data;
 VAR_4->xc = FUNC_12(VAR_6->xcno, &VAR_3->dev);
 if (!VAR_4->xc) {
  FUNC_3(&VAR_3->dev, "unable to request xc engine\n");
  VAR_7 = -VAR_1;
  goto exit_free_netdev;
 }

 VAR_5->irq = VAR_4->xc->irq;
 VAR_4->id = VAR_3->id;
 VAR_4->xpec_base = VAR_4->xc->xpec_base;
 VAR_4->xmac_base = VAR_4->xc->xmac_base;
 VAR_4->sram_base = VAR_4->xc->sram_base;

 FUNC_13(&VAR_4->lock);

 VAR_7 = FUNC_9(FUNC_0(VAR_4->id));
 if (VAR_7) {
  FUNC_11("unable to request PFIFO\n");
  goto exit_free_xc;
 }

 VAR_7 = FUNC_7(VAR_5);
 if (VAR_7)
  goto exit_free_pfifo;

 return 0;
exit_free_pfifo:
 FUNC_8(FUNC_0(VAR_4->id));
exit_free_xc:
 FUNC_5(VAR_4->xc);
exit_free_netdev:
 FUNC_10(VAR_3, ((void*)0));
 FUNC_4(VAR_5);
exit:
 return VAR_7;
}
