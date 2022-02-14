
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_dev {int dummy; } ;
struct ixgbe_adapter {scalar_t__ flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 struct ixgbe_adapter* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_1)
{
 struct ixgbe_adapter *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;
 u32 VAR_4 = VAR_2->flags;

 VAR_3 = FUNC_0(VAR_2);


 if (!VAR_3 && VAR_4 != VAR_2->flags) {

  VAR_2->flags &= ~VAR_0;



 }

 return VAR_3;
}
