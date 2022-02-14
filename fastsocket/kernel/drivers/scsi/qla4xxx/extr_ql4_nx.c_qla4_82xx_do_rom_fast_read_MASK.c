
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct scsi_qla_host*,int ) ;
 scalar_t__ FUNC_2 (struct scsi_qla_host*) ;
 int FUNC_3 (struct scsi_qla_host*,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct scsi_qla_host *VAR_6, int VAR_7, int *VAR_8)
{
 FUNC_3(VAR_6, VAR_2, VAR_7);
 FUNC_3(VAR_6, VAR_3, 0);
 FUNC_3(VAR_6, VAR_1, 3);
 FUNC_3(VAR_6, VAR_4, 0xb);
 if (FUNC_2(VAR_6)) {
  FUNC_0("%s: Error waiting for rom done\n", VAR_0);
  return -1;
 }

 FUNC_3(VAR_6, VAR_3, 0);
 FUNC_4(10);
 FUNC_3(VAR_6, VAR_1, 0);

 *VAR_8 = FUNC_1(VAR_6, VAR_5);
 return 0;
}
