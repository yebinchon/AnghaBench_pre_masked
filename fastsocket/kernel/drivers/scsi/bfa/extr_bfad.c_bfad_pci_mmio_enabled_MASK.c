
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_2__ {int ioc; } ;
struct bfad_s {int hal_tmo; int comp; int bfad_lock; int bfa_fcs; TYPE_1__ bfa; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bfad_s*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pci_dev*) ;
 struct bfad_s* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static pci_ers_result_t
FUNC_11(struct pci_dev *VAR_2)
{
 unsigned long VAR_3;
 struct bfad_s *VAR_4 = FUNC_7(VAR_2);

 FUNC_4(VAR_0, &VAR_2->dev, "mmio_enabled\n");


 FUNC_1(&VAR_4->bfa.ioc);


 FUNC_8(&VAR_4->bfad_lock, VAR_3);
 FUNC_5(&VAR_4->comp);
 FUNC_0(&VAR_4->bfa_fcs);
 FUNC_9(&VAR_4->bfad_lock, VAR_3);
 FUNC_10(&VAR_4->comp);

 FUNC_2(VAR_4);
 FUNC_3(&VAR_4->hal_tmo);
 FUNC_6(VAR_2);

 return VAR_1;
}
