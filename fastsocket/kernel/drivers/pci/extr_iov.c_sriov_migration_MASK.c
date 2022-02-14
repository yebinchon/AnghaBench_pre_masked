
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_sriov {int cap; int mtask; scalar_t__ pos; int nr_virtfn; } ;
struct pci_dev {struct pci_sriov* sriov; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_3)
{
 u16 VAR_4;
 struct pci_sriov *VAR_5 = VAR_3->sriov;

 if (!VAR_5->nr_virtfn)
  return 0;

 if (!(VAR_5->cap & VAR_0))
  return 0;

 FUNC_0(VAR_3, VAR_5->pos + VAR_1, &VAR_4);
 if (!(VAR_4 & VAR_2))
  return 0;

 FUNC_1(&VAR_5->mtask);

 return 1;
}
