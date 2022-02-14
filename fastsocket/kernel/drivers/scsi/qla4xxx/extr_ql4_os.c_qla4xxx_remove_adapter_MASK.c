
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int host; scalar_t__ boot_kset; } ;
struct pci_dev {int dummy; } ;


 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct scsi_qla_host* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int *) ;
 int VAR_0 ;
 int FUNC_7 (struct scsi_qla_host*) ;
 int FUNC_8 (struct scsi_qla_host*) ;
 int FUNC_9 (struct scsi_qla_host*) ;
 int FUNC_10 (struct scsi_qla_host*) ;
 int FUNC_11 (struct scsi_qla_host*) ;
 int FUNC_12 (struct scsi_qla_host*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct pci_dev *VAR_1)
{
 struct scsi_qla_host *VAR_2;





 if (!FUNC_5(VAR_1))
  return;

 VAR_2 = FUNC_4(VAR_1);

 if (FUNC_0(VAR_2))
  FUNC_11(VAR_2);


 FUNC_9(VAR_2);

 if ((!VAR_0) && VAR_2->boot_kset)
  FUNC_1(VAR_2->boot_kset);

 FUNC_8(VAR_2);
 FUNC_7(VAR_2);

 FUNC_12(VAR_2);
 FUNC_14(VAR_2->host);

 FUNC_10(VAR_2);

 FUNC_13(VAR_2->host);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
 FUNC_6(VAR_1, ((void*)0));
}
