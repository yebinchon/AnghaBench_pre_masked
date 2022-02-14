
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static u64 FUNC_2(struct pci_dev *VAR_2, u64 VAR_3)
{
 u64 VAR_4;
 u32 VAR_5;
 u64 VAR_6;


 FUNC_1(VAR_2, VAR_0, &VAR_5);
 VAR_4 = VAR_5 << 25;
 VAR_6 = (VAR_4 & VAR_1);

 FUNC_0(VAR_2, VAR_3);

 return VAR_6;
}
