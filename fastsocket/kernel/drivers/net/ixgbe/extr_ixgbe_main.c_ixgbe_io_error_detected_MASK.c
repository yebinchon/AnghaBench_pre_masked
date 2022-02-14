
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_6__ {TYPE_2__ mac; } ;
struct ixgbe_adapter {scalar_t__ num_vfs; int vferr_refcount; TYPE_3__ hw; struct net_device* netdev; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;
struct TYPE_4__ {struct pci_dev* self; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int VAR_9 ;


 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 struct pci_dev* FUNC_8 (int ,unsigned int,struct pci_dev*) ;
 struct ixgbe_adapter* FUNC_9 (struct pci_dev*) ;
 scalar_t__ FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_12 (struct pci_dev*,int,int) ;

__attribute__((used)) static pci_ers_result_t FUNC_13(struct pci_dev *VAR_11,
      pci_channel_state_t VAR_12)
{
 struct ixgbe_adapter *VAR_13 = FUNC_9(VAR_11);
 struct net_device *VAR_14 = VAR_13->netdev;
 FUNC_2(VAR_14);

 if (VAR_12 == VAR_10)
  return VAR_3;

 if (FUNC_3(VAR_14))
  FUNC_1(VAR_13);
 FUNC_6(VAR_11);


 return VAR_4;
}
