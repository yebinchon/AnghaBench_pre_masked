
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; } ;
struct TYPE_5__ {int (* read ) (struct ixgbe_hw*,int*,int) ;int (* check_for_msg ) (struct ixgbe_hw*) ;int (* check_for_ack ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {int v2p_mailbox; TYPE_2__ ops; } ;
struct TYPE_4__ {int get_link_status; } ;
struct ixgbe_hw {TYPE_3__ mbx; TYPE_1__ mac; } ;
struct ixgbevf_adapter {int link_up; int eims_other; int watchdog_timer; struct ixgbe_hw hw; struct pci_dev* pdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_1 (int *,char*,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*) ;
 int FUNC_6 (struct ixgbe_hw*,int*,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_8, void *VAR_9)
{
 struct ixgbevf_adapter *VAR_10 = VAR_9;
 struct pci_dev *VAR_11 = VAR_10->pdev;
 struct ixgbe_hw *VAR_12 = &VAR_10->hw;
 u32 VAR_13;
 bool VAR_14 = 0;

 VAR_12->mac.get_link_status = 1;
 if (!VAR_12->mbx.ops.check_for_ack(VAR_12))
  VAR_14 = 1;

 if (!VAR_12->mbx.ops.check_for_msg(VAR_12)) {
  VAR_12->mbx.ops.read(VAR_12, &VAR_13, 1);

  if ((VAR_13 & VAR_1) == VAR_2) {
   FUNC_2(&VAR_10->watchdog_timer,
      FUNC_3(VAR_7 + 1));
   VAR_10->link_up = 0;
  }

  if (VAR_13 & VAR_6)
   FUNC_1(&VAR_11->dev,
     "Last Request of type %2.2x to PF Nacked\n",
     VAR_13 & 0xFF);
  VAR_12->mbx.v2p_mailbox |= VAR_4;
 }





 if (VAR_14)
  VAR_12->mbx.v2p_mailbox |= VAR_3;

 FUNC_0(VAR_12, VAR_5, VAR_10->eims_other);

 return VAR_0;
}
