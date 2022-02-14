
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct bfad_s {int bfad_flags; int comp; int pci_name; int bfad_lock; int bfa; int hal_pcidev; int meminfo; int ioc_cfg; struct pci_dev* pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct bfad_s*,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bfad_s*,int ) ;
 int FUNC_3 (struct bfad_s*) ;
 int FUNC_4 (struct bfad_s*) ;
 scalar_t__ FUNC_5 (struct bfad_s*) ;
 scalar_t__ FUNC_6 (struct bfad_s*) ;
 int FUNC_7 (int ,int *,char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *) ;

int
FUNC_12(struct bfad_s *VAR_3)
{
 unsigned long VAR_4;
 struct pci_dev *VAR_5 = VAR_3->pcidev;

 FUNC_0(&VAR_3->bfa, VAR_3, &VAR_3->ioc_cfg,
     &VAR_3->meminfo, &VAR_3->hal_pcidev);


 if (FUNC_6(VAR_3)) {
  FUNC_7(VAR_2, &VAR_5->dev,
      "%s: bfad_setup_intr failed\n", VAR_3->pci_name);
  FUNC_2(VAR_3, VAR_0);
  return -1;
 }

 FUNC_8(&VAR_3->comp);
 FUNC_9(&VAR_3->bfad_lock, VAR_4);
 FUNC_1(&VAR_3->bfa);
 FUNC_10(&VAR_3->bfad_lock, VAR_4);


 if ((VAR_3->bfad_flags & VAR_1) &&
     FUNC_5(VAR_3))
  FUNC_7(VAR_2, &VAR_5->dev,
      "%s: install_msix failed.\n", VAR_3->pci_name);

 FUNC_4(VAR_3);
 FUNC_11(&VAR_3->comp);
 FUNC_3(VAR_3);

 return 0;
}
