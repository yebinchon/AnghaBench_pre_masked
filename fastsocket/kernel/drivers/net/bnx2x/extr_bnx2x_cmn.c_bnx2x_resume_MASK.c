
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct bnx2x {scalar_t__ recovery_state; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bnx2x*,int ) ;
 int FUNC_2 (struct bnx2x*,int ) ;
 int FUNC_3 (int *,char*) ;
 struct bnx2x* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 struct net_device* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

int FUNC_11(struct pci_dev *VAR_5)
{
 struct net_device *VAR_6 = FUNC_7(VAR_5);
 struct bnx2x *VAR_7;
 int VAR_8;

 if (!VAR_6) {
  FUNC_3(&VAR_5->dev, "BAD net device from bnx2x_init_one\n");
  return -VAR_2;
 }
 VAR_7 = FUNC_4(VAR_6);

 if (VAR_7->recovery_state != VAR_0) {
  FUNC_0("Handling parity error recovery. Try again later\n");
  return -VAR_1;
 }

 FUNC_9();

 FUNC_8(VAR_5);

 if (!FUNC_6(VAR_6)) {
  FUNC_10();
  return 0;
 }

 FUNC_2(VAR_7, VAR_4);
 FUNC_5(VAR_6);

 VAR_8 = FUNC_1(VAR_7, VAR_3);

 FUNC_10();

 return VAR_8;
}
