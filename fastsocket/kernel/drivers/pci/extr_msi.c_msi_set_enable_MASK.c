
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int *) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_2, int VAR_3, int VAR_4)
{
 u16 VAR_5;

 FUNC_0(!VAR_3);

 FUNC_1(VAR_2, VAR_3 + VAR_0, &VAR_5);
 VAR_5 &= ~VAR_1;
 if (VAR_4)
  VAR_5 |= VAR_1;
 FUNC_2(VAR_2, VAR_3 + VAR_0, VAR_5);
}
