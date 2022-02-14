
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ mtu; } ;
struct jme_adapter {scalar_t__ old_mtu; int link_changing; int rxempty_task; int rxclean_task; int txclean_task; int flags; int pdev; struct net_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct jme_adapter*) ;
 int FUNC_6 (struct jme_adapter*) ;
 int FUNC_7 (struct jme_adapter*) ;
 int FUNC_8 (struct jme_adapter*) ;
 int FUNC_9 (struct jme_adapter*) ;
 int FUNC_10 (struct jme_adapter*) ;
 int FUNC_11 (struct jme_adapter*) ;
 int FUNC_12 (struct jme_adapter*) ;
 scalar_t__ FUNC_13 (struct jme_adapter*) ;
 int FUNC_14 (struct jme_adapter*) ;
 int FUNC_15 (struct jme_adapter*) ;
 int FUNC_16 (struct jme_adapter*) ;
 int FUNC_17 (struct jme_adapter*) ;
 int FUNC_18 (struct jme_adapter*) ;
 int FUNC_19 (struct jme_adapter*) ;
 int FUNC_20 (struct jme_adapter*) ;
 int FUNC_21 (struct jme_adapter*) ;
 int FUNC_22 (struct jme_adapter*,char*) ;
 int FUNC_23 (struct net_device*) ;
 scalar_t__ FUNC_24 (struct net_device*) ;
 int FUNC_25 (struct net_device*) ;
 int FUNC_26 (struct net_device*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;
 scalar_t__ FUNC_30 (int ,int *) ;

__attribute__((used)) static void
FUNC_31(unsigned long VAR_1)
{
 struct jme_adapter *VAR_2 = (struct jme_adapter *)VAR_1;
 struct net_device *VAR_3 = VAR_2->dev;
 int VAR_4;

 while (!FUNC_0(&VAR_2->link_changing)) {
  FUNC_1(&VAR_2->link_changing);
  FUNC_22(VAR_2, "Get link change lock failed.\n");
  while (FUNC_2(&VAR_2->link_changing) != 1)
   FUNC_22(VAR_2, "Waiting link change lock.\n");
 }

 if (FUNC_4(VAR_3, 1) && VAR_2->old_mtu == VAR_3->mtu)
  goto out;

 VAR_2->old_mtu = VAR_3->mtu;
 FUNC_26(VAR_3);
 if (FUNC_13(VAR_2))
  FUNC_21(VAR_2);

 FUNC_20(VAR_2);
 FUNC_27(&VAR_2->txclean_task);
 FUNC_27(&VAR_2->rxclean_task);
 FUNC_27(&VAR_2->rxempty_task);

 if (FUNC_24(VAR_3)) {
  FUNC_14(VAR_2);
  FUNC_5(VAR_2);
  FUNC_6(VAR_2);
  FUNC_15(VAR_2);
  FUNC_9(VAR_2);
  FUNC_10(VAR_2);

  if (FUNC_30(VAR_0, &VAR_2->flags))
   FUNC_12(VAR_2);

  FUNC_23(VAR_3);
 }

 FUNC_4(VAR_3, 0);
 if (FUNC_24(VAR_3)) {
  VAR_4 = FUNC_16(VAR_2);
  if (VAR_4) {
   FUNC_3(VAR_2->pdev, "Allocating resources for RX error"
    ", Device STOPPED!\n");
   goto out_enable_tasklet;
  }

  VAR_4 = FUNC_17(VAR_2);
  if (VAR_4) {
   FUNC_3(VAR_2->pdev, "Allocating resources for TX error"
    ", Device STOPPED!\n");
   goto err_out_free_rx_resources;
  }

  FUNC_7(VAR_2);
  FUNC_8(VAR_2);

  FUNC_25(VAR_3);

  if (FUNC_30(VAR_0, &VAR_2->flags))
   FUNC_11(VAR_2);

  FUNC_18(VAR_2);
 } else if (FUNC_13(VAR_2)) {
  FUNC_19(VAR_2);
 }

 goto out_enable_tasklet;

err_out_free_rx_resources:
 FUNC_9(VAR_2);
out_enable_tasklet:
 FUNC_28(&VAR_2->txclean_task);
 FUNC_29(&VAR_2->rxclean_task);
 FUNC_29(&VAR_2->rxempty_task);
out:
 FUNC_1(&VAR_2->link_changing);
}
