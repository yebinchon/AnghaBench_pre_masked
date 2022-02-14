
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct smsc9420_pdata {int software_irq_signal; int int_lock; int napi; int phy_dev; } ;
struct net_device {int irq; int dev_addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_1 (int ,struct smsc9420_pdata*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 struct smsc9420_pdata* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int ,int,int ,struct smsc9420_pdata*) ;
 int FUNC_10 (struct smsc9420_pdata*) ;
 int FUNC_11 (struct smsc9420_pdata*) ;
 int FUNC_12 (struct smsc9420_pdata*) ;
 int FUNC_13 (struct smsc9420_pdata*) ;
 int FUNC_14 (struct smsc9420_pdata*) ;
 int VAR_36 ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct smsc9420_pdata*) ;
 int FUNC_17 (struct smsc9420_pdata*,int ) ;
 int FUNC_18 (struct smsc9420_pdata*,int ,int) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (int ,char*,int ) ;
 int FUNC_21 (int ,char*,...) ;
 int FUNC_22 (int *,unsigned long) ;
 int FUNC_23 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_24(struct net_device *VAR_37)
{
 struct smsc9420_pdata *VAR_38;
 u32 VAR_39, VAR_40, VAR_41, VAR_42, VAR_43, VAR_44;
 unsigned long VAR_45;
 int VAR_46 = 0, VAR_47;

 FUNC_0(!VAR_37);
 VAR_38 = FUNC_5(VAR_37);
 FUNC_0(!VAR_38);

 if (!FUNC_2(VAR_37->dev_addr)) {
  FUNC_21(VAR_22, "dev_addr is not a valid MAC address");
  VAR_46 = -VAR_15;
  goto out_0;
 }

 FUNC_6(VAR_37);


 FUNC_22(&VAR_38->int_lock, VAR_45);
 VAR_42 = FUNC_17(VAR_38, VAR_23) & (~VAR_25);
 FUNC_18(VAR_38, VAR_23, VAR_42);
 FUNC_18(VAR_38, VAR_26, 0);
 FUNC_23(&VAR_38->int_lock, VAR_45);
 FUNC_18(VAR_38, VAR_10, 0);
 FUNC_18(VAR_38, VAR_29, 0xFFFFFFFF);
 FUNC_16(VAR_38);

 if (FUNC_9(VAR_37->irq, VAR_36, VAR_31 | VAR_30,
   VAR_14, VAR_38)) {
  FUNC_21(VAR_22, "Unable to use IRQ = %d", VAR_37->irq);
  VAR_46 = -VAR_16;
  goto out_0;
 }

 FUNC_12(VAR_38);


 FUNC_18(VAR_38, VAR_32, 0);

 FUNC_19(VAR_37);


 FUNC_18(VAR_38, VAR_18,
  (VAR_21 | VAR_20 | VAR_19));

 VAR_39 = VAR_4;





 FUNC_18(VAR_38, VAR_2, VAR_39);

 FUNC_16(VAR_38);


 FUNC_18(VAR_38, VAR_0, VAR_1);

 FUNC_18(VAR_38, VAR_5,
  (VAR_7 | VAR_6));

 FUNC_16(VAR_38);


 FUNC_20(VAR_22, "Testing ISR using IRQ %d", VAR_37->irq);
 VAR_38->software_irq_signal = 0;

 FUNC_22(&VAR_38->int_lock, VAR_45);

 VAR_42 = FUNC_17(VAR_38, VAR_23) | VAR_25;
 VAR_42 &= ~(VAR_24);
 VAR_42 |= (VAR_28 & VAR_24);
 FUNC_18(VAR_38, VAR_23, VAR_42);


 VAR_44 = FUNC_17(VAR_38, VAR_26) | VAR_27;
 FUNC_18(VAR_38, VAR_26, VAR_44);
 FUNC_23(&VAR_38->int_lock, VAR_45);
 FUNC_16(VAR_38);

 VAR_47 = 1000;
 while (VAR_47--) {
  if (VAR_38->software_irq_signal)
   break;
  FUNC_3(1);
 }


 FUNC_22(&VAR_38->int_lock, VAR_45);
 VAR_42 = FUNC_17(VAR_38, VAR_23) & (~VAR_25);
 FUNC_18(VAR_38, VAR_23, VAR_42);
 FUNC_23(&VAR_38->int_lock, VAR_45);

 if (!VAR_38->software_irq_signal) {
  FUNC_21(VAR_22, "ISR failed signaling test");
  VAR_46 = -VAR_16;
  goto out_free_irq_1;
 }

 FUNC_20(VAR_22, "ISR passed test using IRQ %d", VAR_37->irq);

 VAR_46 = FUNC_11(VAR_38);
 if (VAR_46) {
  FUNC_21(VAR_22, "Failed to Initialize tx dma ring");
  VAR_46 = -VAR_17;
  goto out_free_irq_1;
 }

 VAR_46 = FUNC_10(VAR_38);
 if (VAR_46) {
  FUNC_21(VAR_22, "Failed to Initialize rx dma ring");
  VAR_46 = -VAR_17;
  goto out_free_tx_ring_2;
 }

 VAR_46 = FUNC_15(VAR_37);
 if (VAR_46) {
  FUNC_21(VAR_22, "Failed to initialize Phy");
  VAR_46 = -VAR_16;
  goto out_free_rx_ring_3;
 }


 FUNC_8(VAR_38->phy_dev);

 FUNC_4(&VAR_38->napi);


 VAR_40 = FUNC_17(VAR_38, VAR_32) | VAR_34 | VAR_33;
 FUNC_18(VAR_38, VAR_32, VAR_40);

 VAR_41 = FUNC_17(VAR_38, VAR_5);
 VAR_41 |= VAR_9 | VAR_8;
 FUNC_18(VAR_38, VAR_5, VAR_41);
 FUNC_16(VAR_38);

 VAR_43 = FUNC_17(VAR_38, VAR_10);
 VAR_43 |=
  (VAR_13 | VAR_12 | VAR_11);
 FUNC_18(VAR_38, VAR_10, VAR_43);
 FUNC_16(VAR_38);

 FUNC_7(VAR_37);

 FUNC_18(VAR_38, VAR_35, 1);


 FUNC_22(&VAR_38->int_lock, VAR_45);
 VAR_42 = FUNC_17(VAR_38, VAR_23) | VAR_25;
 FUNC_18(VAR_38, VAR_23, VAR_42);
 FUNC_23(&VAR_38->int_lock, VAR_45);

 return 0;

out_free_rx_ring_3:
 FUNC_13(VAR_38);
out_free_tx_ring_2:
 FUNC_14(VAR_38);
out_free_irq_1:
 FUNC_1(VAR_37->irq, VAR_38);
out_0:
 return VAR_46;
}
