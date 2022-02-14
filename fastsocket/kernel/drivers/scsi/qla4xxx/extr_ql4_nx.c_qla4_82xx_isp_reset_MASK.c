
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct scsi_qla_host {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,struct scsi_qla_host*,char*) ;
 int FUNC_2 (struct scsi_qla_host*) ;
 int FUNC_3 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_4 (struct scsi_qla_host*,int ) ;
 int FUNC_5 (struct scsi_qla_host*,int ,int ) ;
 int FUNC_6 (struct scsi_qla_host*) ;
 int FUNC_7 (struct scsi_qla_host*) ;
 int FUNC_8 (int ,int *) ;

int
FUNC_9(struct scsi_qla_host *VAR_7)
{
 int VAR_8;
 uint32_t VAR_9;

 FUNC_2(VAR_7);
 VAR_9 = FUNC_4(VAR_7, VAR_3);

 if (VAR_9 == VAR_5) {
  FUNC_1(VAR_2, VAR_7, "HW State: NEED RESET\n");
  FUNC_5(VAR_7, VAR_3,
      VAR_4);
  FUNC_8(VAR_0, &VAR_7->flags);
 } else
  FUNC_1(VAR_2, VAR_7, "HW State: DEVICE INITIALIZING\n");

 FUNC_3(VAR_7);

 VAR_8 = FUNC_7(VAR_7);

 FUNC_2(VAR_7);
 FUNC_6(VAR_7);
 FUNC_3(VAR_7);

 if (VAR_8 == VAR_6) {
  FUNC_1(VAR_2, VAR_7, "Clearing AF_RECOVERY in qla4_82xx_isp_reset\n");
  FUNC_0(VAR_1, &VAR_7->flags);
 }

 return VAR_8;
}
