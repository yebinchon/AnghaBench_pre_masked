
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int cmd_len; int * cmnd; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,struct scsi_cmnd*,char*) ;

void FUNC_3(struct scsi_cmnd *VAR_1)
{
 int VAR_2;

 if (VAR_1->cmnd == ((void*)0))
  return;

 FUNC_2(VAR_0, VAR_1, "CDB: ");
 FUNC_0(VAR_1->cmnd, VAR_1->cmd_len);


 FUNC_1(":");
 for (VAR_2 = 0; VAR_2 < VAR_1->cmd_len; ++VAR_2)
  FUNC_1(" %02x", VAR_1->cmnd[VAR_2]);
 FUNC_1("\n");
}
