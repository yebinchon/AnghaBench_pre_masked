
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int needs_freset; } ;
struct lpfc_hba {struct pci_dev* pcidev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int,int ) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;

__attribute__((used)) static int
FUNC_9(struct lpfc_hba *VAR_6)
{
 struct pci_dev *VAR_7;
 int VAR_8 = 0;


 if (!VAR_6->pcidev)
  goto out_error;
 else
  VAR_7 = VAR_6->pcidev;

 VAR_8 = FUNC_6(VAR_7, VAR_1);

 if (FUNC_2(VAR_7))
  goto out_error;

 if (FUNC_4(VAR_7, VAR_8, VAR_4))
  goto out_disable_device;

 FUNC_7(VAR_7);
 FUNC_8(VAR_7);
 FUNC_5(VAR_7);


 if (FUNC_3(VAR_7, VAR_5))
  VAR_7->needs_freset = 1;

 return 0;

out_disable_device:
 FUNC_1(VAR_7);
out_error:
 FUNC_0(VAR_6, VAR_2, VAR_3,
   "1401 Failed to enable pci device, bars:x%x\n", VAR_8);
 return -VAR_0;
}
