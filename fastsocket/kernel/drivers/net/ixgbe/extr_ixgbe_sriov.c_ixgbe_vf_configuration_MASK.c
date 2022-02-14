
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ixgbe_adapter {TYPE_1__* vfinfo; } ;
struct TYPE_2__ {int vf_mac_addresses; } ;


 int FUNC_0 (int ,char*,unsigned int,unsigned char*) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 struct ixgbe_adapter* FUNC_2 (struct pci_dev*) ;
 int VAR_0 ;
 int FUNC_3 (unsigned char*) ;

int FUNC_4(struct pci_dev *VAR_1, unsigned int VAR_2)
{
 unsigned char VAR_3[6];
 struct ixgbe_adapter *VAR_4 = FUNC_2(VAR_1);
 unsigned int VAR_5 = (VAR_2 & 0x3f);

 bool VAR_6 = ((VAR_2 & 0x10000000U) != 0);

 if (VAR_6) {
  FUNC_3(VAR_3);
  FUNC_0(VAR_0, "IOV: VF %d is enabled MAC %pM\n",
         VAR_5, VAR_3);




  FUNC_1(VAR_4->vfinfo[VAR_5].vf_mac_addresses, VAR_3, 6);
 }

 return 0;
}
