
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dummy; } ;
struct bnx2x_virtf {int devfn; int bus; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 struct bnx2x_virtf* FUNC_1 (struct bnx2x*,int) ;
 struct pci_dev* FUNC_2 (int ,int ) ;

__attribute__((used)) static u8 FUNC_3(struct bnx2x *VAR_0, u8 VAR_1)
{
 struct pci_dev *VAR_2;
 struct bnx2x_virtf *VAR_3 = FUNC_1(VAR_0, VAR_1);

 if (!VAR_3)
  return 0;

 VAR_2 = FUNC_2(VAR_3->bus, VAR_3->devfn);
 if (VAR_2)
  return FUNC_0(VAR_2);
 return 0;
}
