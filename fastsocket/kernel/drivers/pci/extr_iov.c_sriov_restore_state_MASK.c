
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_sriov {int nr_virtfn; int ctrl; scalar_t__ pos; int pgsz; } ;
struct pci_dev {struct pci_sriov* sriov; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct pci_dev*,scalar_t__,int ) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_6)
{
 int VAR_7;
 u16 VAR_8;
 struct pci_sriov *VAR_9 = VAR_6->sriov;

 FUNC_1(VAR_6, VAR_9->pos + VAR_2, &VAR_8);
 if (VAR_8 & VAR_3)
  return;

 for (VAR_7 = VAR_0; VAR_7 <= VAR_1; VAR_7++)
  FUNC_2(VAR_6, VAR_7);

 FUNC_3(VAR_6, VAR_9->pos + VAR_5, VAR_9->pgsz);
 FUNC_4(VAR_6, VAR_9->pos + VAR_4, VAR_9->nr_virtfn);
 FUNC_4(VAR_6, VAR_9->pos + VAR_2, VAR_9->ctrl);
 if (VAR_9->ctrl & VAR_3)
  FUNC_0(100);
}
