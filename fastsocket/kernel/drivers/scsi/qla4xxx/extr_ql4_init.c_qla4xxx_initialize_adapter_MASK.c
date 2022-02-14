
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {int host_no; int flags; TYPE_1__* isp_ops; scalar_t__ eeprom_cmd_data; } ;
struct TYPE_2__ {int (* start_firmware ) (struct scsi_qla_host*) ;int (* get_sys_info ) (struct scsi_qla_host*) ;int (* disable_intrs ) (struct scsi_qla_host*) ;int (* pci_config ) (struct scsi_qla_host*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_2 (struct scsi_qla_host*) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (int ,struct scsi_qla_host*,char*) ;
 int FUNC_5 (struct scsi_qla_host*) ;
 int FUNC_6 (struct scsi_qla_host*) ;
 int FUNC_7 (struct scsi_qla_host*,int) ;
 int FUNC_8 (struct scsi_qla_host*) ;
 int FUNC_9 (struct scsi_qla_host*) ;
 int FUNC_10 (struct scsi_qla_host*) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct scsi_qla_host*) ;
 int FUNC_13 (struct scsi_qla_host*) ;
 int FUNC_14 (struct scsi_qla_host*) ;
 int FUNC_15 (struct scsi_qla_host*) ;

int FUNC_16(struct scsi_qla_host *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_2;

 VAR_4->eeprom_cmd_data = 0;

 FUNC_4(VAR_1, VAR_4, "Configuring PCI space...\n");
 VAR_4->isp_ops->pci_config(VAR_4);

 VAR_4->isp_ops->disable_intrs(VAR_4);


 if (VAR_4->isp_ops->start_firmware(VAR_4) == VAR_2)
  goto exit_init_hba;
 if (FUNC_1(VAR_4))
  FUNC_5(VAR_4);

 if (FUNC_6(VAR_4) == VAR_2)
  goto exit_init_hba;

 if (VAR_4->isp_ops->get_sys_info(VAR_4) == VAR_2)
  goto exit_init_hba;

 FUNC_10(VAR_4);

 VAR_6 = FUNC_9(VAR_4);
 if (VAR_6 == VAR_2)
  goto exit_init_hba;

 if (VAR_5 == VAR_3)
  FUNC_7(VAR_4, VAR_5);

 FUNC_11(VAR_0, &VAR_4->flags);
exit_init_hba:
 if (FUNC_2(VAR_4) && (VAR_6 == VAR_2)) {


  FUNC_8(VAR_4);
 }

 FUNC_0(FUNC_3("scsi%ld: initialize adapter: %s\n", VAR_4->host_no,
     VAR_6 == VAR_2 ? "FAILED" : "SUCCEEDED"));
 return VAR_6;
}
