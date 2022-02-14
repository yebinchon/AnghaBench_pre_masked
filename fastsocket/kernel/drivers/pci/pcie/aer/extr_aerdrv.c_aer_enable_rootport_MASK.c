
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct aer_rpc {TYPE_1__* rpd; } ;
struct TYPE_2__ {struct pci_dev* port; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int ) ;
 int FUNC_3 (struct pci_dev*,int ,int ) ;
 int FUNC_4 (struct pci_dev*,int ,int *) ;
 int FUNC_5 (struct pci_dev*,int ,int ) ;
 int FUNC_6 (struct pci_dev*,int) ;

__attribute__((used)) static void FUNC_7(struct aer_rpc *VAR_9)
{
 struct pci_dev *VAR_10 = VAR_9->rpd->port;
 int VAR_11;
 u16 VAR_12;
 u32 VAR_13;


 FUNC_4(VAR_10, VAR_4, &VAR_12);
 FUNC_5(VAR_10, VAR_4, VAR_12);


 FUNC_3(VAR_10, VAR_5,
       VAR_8);

 VAR_11 = FUNC_0(VAR_10, VAR_6);

 FUNC_1(VAR_10, VAR_11 + VAR_2, &VAR_13);
 FUNC_2(VAR_10, VAR_11 + VAR_2, VAR_13);
 FUNC_1(VAR_10, VAR_11 + VAR_0, &VAR_13);
 FUNC_2(VAR_10, VAR_11 + VAR_0, VAR_13);
 FUNC_1(VAR_10, VAR_11 + VAR_3, &VAR_13);
 FUNC_2(VAR_10, VAR_11 + VAR_3, VAR_13);





 FUNC_6(VAR_10, 1);


 FUNC_1(VAR_10, VAR_11 + VAR_1, &VAR_13);
 VAR_13 |= VAR_7;
 FUNC_2(VAR_10, VAR_11 + VAR_1, VAR_13);
}
