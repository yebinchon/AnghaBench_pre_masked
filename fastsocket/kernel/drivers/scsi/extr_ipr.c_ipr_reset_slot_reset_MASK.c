
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ipr_ioa_cfg {struct pci_dev* pdev; } ;
struct ipr_cmnd {int job_step; struct ipr_ioa_cfg* ioa_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ipr_cmnd*,int ) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct ipr_cmnd *VAR_6)
{
 struct ipr_ioa_cfg *VAR_7 = VAR_6->ioa_cfg;
 struct pci_dev *VAR_8 = VAR_7->pdev;

 VAR_0;
 FUNC_1(VAR_8, VAR_5);
 VAR_6->job_step = VAR_4;
 FUNC_0(VAR_6, VAR_1);
 VAR_3;
 return VAR_2;
}
