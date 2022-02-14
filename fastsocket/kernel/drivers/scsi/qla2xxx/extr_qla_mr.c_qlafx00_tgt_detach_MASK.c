
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;
typedef int fc_port_t ;


 int FUNC_0 (int ,struct scsi_qla_host*,int,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct scsi_qla_host*,int *,int ,int ) ;
 int * FUNC_2 (struct scsi_qla_host*,int) ;

__attribute__((used)) static void
FUNC_3(struct scsi_qla_host *VAR_1, int VAR_2)
{
 fc_port_t *VAR_3;

 FUNC_0(VAR_0, VAR_1, 0x5073,
     "Detach TGT-ID: 0x%x\n", VAR_2);

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (!VAR_3)
  return;

 FUNC_1(VAR_1, VAR_3, 0, 0);

 return;
}
