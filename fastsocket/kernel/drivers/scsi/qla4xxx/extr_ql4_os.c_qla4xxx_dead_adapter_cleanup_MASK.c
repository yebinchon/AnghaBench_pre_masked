
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,struct scsi_qla_host*,char*) ;
 int FUNC_2 (struct scsi_qla_host*,int) ;
 int FUNC_3 (struct scsi_qla_host*) ;

void FUNC_4(struct scsi_qla_host *VAR_4)
{
 FUNC_0(VAR_1, &VAR_4->flags);


 FUNC_1(VAR_3, VAR_4, "Disabling the board\n");

 FUNC_2(VAR_4, VAR_2 << 16);
 FUNC_3(VAR_4);
 FUNC_0(VAR_0, &VAR_4->flags);
}
