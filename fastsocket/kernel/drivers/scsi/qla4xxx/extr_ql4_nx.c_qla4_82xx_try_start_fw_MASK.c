
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flt_region_fw; } ;
struct scsi_qla_host {TYPE_1__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct scsi_qla_host*,char*) ;
 int FUNC_1 (struct scsi_qla_host*,int ) ;
 int FUNC_2 (struct scsi_qla_host*) ;

int FUNC_3(struct scsi_qla_host *VAR_4)
{
 int VAR_5 = VAR_2;







 FUNC_0(VAR_1, VAR_4,
     "FW: Retrieving flash offsets from FLT/FDT ...\n");
 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 != VAR_3)
  return VAR_5;

 FUNC_0(VAR_1, VAR_4,
     "FW: Attempting to load firmware from flash...\n");
 VAR_5 = FUNC_1(VAR_4, VAR_4->hw.flt_region_fw);

 if (VAR_5 != VAR_3) {
  FUNC_0(VAR_0, VAR_4, "FW: Load firmware from flash"
      " FAILED...\n");
  return VAR_5;
 }

 return VAR_5;
}
