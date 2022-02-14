
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dummy; } ;
struct aer_rpc {TYPE_1__* rpd; } ;
struct TYPE_2__ {struct pci_dev* port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int ) ;
 int FUNC_3 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_4(struct aer_rpc *VAR_4)
{
 struct pci_dev *VAR_5 = VAR_4->rpd->port;
 u32 VAR_6;
 int VAR_7;





 FUNC_3(VAR_5, 0);

 VAR_7 = FUNC_0(VAR_5, VAR_2);

 FUNC_1(VAR_5, VAR_7 + VAR_0, &VAR_6);
 VAR_6 &= ~VAR_3;
 FUNC_2(VAR_5, VAR_7 + VAR_0, VAR_6);


 FUNC_1(VAR_5, VAR_7 + VAR_1, &VAR_6);
 FUNC_2(VAR_5, VAR_7 + VAR_1, VAR_6);
}
