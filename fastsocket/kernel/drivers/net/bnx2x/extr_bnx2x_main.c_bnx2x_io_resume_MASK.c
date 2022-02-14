
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct bnx2x {scalar_t__ recovery_state; int fw_seq; int dev; } ;
struct TYPE_2__ {int drv_mb_header; } ;


 scalar_t__ VAR_0 ;
 size_t FUNC_0 (struct bnx2x*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (struct bnx2x*,int ) ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int ,char*) ;
 struct bnx2x* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_4)
{
 struct net_device *VAR_5 = FUNC_7(VAR_4);
 struct bnx2x *VAR_6 = FUNC_4(VAR_5);

 if (VAR_6->recovery_state != VAR_0) {
  FUNC_3(VAR_6->dev, "Handling parity error recovery. Try again later\n");
  return;
 }

 FUNC_8();

 VAR_6->fw_seq = FUNC_1(VAR_6, VAR_3[FUNC_0(VAR_6)].drv_mb_header) &
       VAR_1;

 if (FUNC_6(VAR_5))
  FUNC_2(VAR_6, VAR_2);

 FUNC_5(VAR_5);

 FUNC_9();
}
