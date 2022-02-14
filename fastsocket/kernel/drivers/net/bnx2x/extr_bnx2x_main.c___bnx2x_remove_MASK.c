
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int enable_cnt; } ;
struct net_device {int dummy; } ;
struct bnx2x {int flags; scalar_t__ doorbells; scalar_t__ regview; int wol; int sp_rtnl_task; int fip_mac; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bnx2x*) ;
 scalar_t__ FUNC_2 (struct bnx2x*) ;
 int VAR_2 ;
 int FUNC_3 (struct bnx2x*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct bnx2x*,int) ;
 int FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*) ;
 int FUNC_8 (struct bnx2x*,int ,int ) ;
 int FUNC_9 (struct bnx2x*) ;
 int FUNC_10 (struct bnx2x*) ;
 int FUNC_11 (struct bnx2x*,int ) ;
 int FUNC_12 (struct bnx2x*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*,int *) ;
 int FUNC_21 (struct pci_dev*,int ) ;
 int FUNC_22 (struct pci_dev*,int ) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 scalar_t__ VAR_6 ;
 int FUNC_25 (struct net_device*) ;

__attribute__((used)) static void FUNC_26(struct pci_dev *VAR_7,
      struct net_device *VAR_8,
      struct bnx2x *VAR_9,
      bool VAR_10)
{

 if (!FUNC_3(VAR_9)) {
  FUNC_23();
  FUNC_14(VAR_9->dev, VAR_9->fip_mac, VAR_2);
  FUNC_24();
 }






 if (FUNC_1(VAR_9) &&
     !FUNC_0(VAR_9) &&
     (VAR_9->flags & VAR_0))
  FUNC_8(VAR_9, VAR_1, 0);


 if (VAR_10) {
  FUNC_25(VAR_8);
 } else {
  FUNC_23();
  FUNC_15(VAR_8);
  FUNC_24();
 }

 FUNC_9(VAR_9);


 if (FUNC_1(VAR_9))
  FUNC_11(VAR_9, VAR_3);


 FUNC_6(VAR_9);


 if (FUNC_1(VAR_9))
  FUNC_11(VAR_9, VAR_4);


 FUNC_13(&VAR_9->sp_rtnl_task);


 if (FUNC_2(VAR_9))
  FUNC_12(VAR_9);


 if (VAR_6 == VAR_5) {
  FUNC_22(VAR_7, VAR_9->wol);
  FUNC_21(VAR_7, VAR_4);
 }

 if (VAR_9->regview)
  FUNC_17(VAR_9->regview);




 if (FUNC_1(VAR_9)) {
  if (VAR_9->doorbells)
   FUNC_17(VAR_9->doorbells);

  FUNC_10(VAR_9);
 }
 FUNC_7(VAR_9);

 if (VAR_10)
  FUNC_16(VAR_8);

 if (FUNC_4(&VAR_7->enable_cnt) == 1)
  FUNC_19(VAR_7);

 FUNC_18(VAR_7);
 FUNC_20(VAR_7, ((void*)0));
}
