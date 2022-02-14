
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srb {struct scsi_cmnd* cmd; } ;
struct scsi_qla_host {struct srb** outstanding_cmds; } ;
struct scsi_cmnd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 int VAR_2 ;
 int FUNC_2 (struct scsi_qla_host*,struct srb*) ;

__attribute__((used)) static int
FUNC_3(struct scsi_qla_host *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct srb *VAR_8;
 struct scsi_cmnd *VAR_9;

 VAR_7 = VAR_2;





 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_8 = VAR_3->outstanding_cmds[VAR_6];
  if (VAR_8) {
   VAR_9 = VAR_8->cmd;

   if (VAR_4 >= 0 && FUNC_0(VAR_9) != VAR_4)
    continue;
   if (VAR_5 >= 0 && FUNC_1(VAR_9) != VAR_5)
    continue;

   VAR_7 = FUNC_2(VAR_3, VAR_8);
   if (VAR_7 == VAR_0)
    break;
  }
 }
 return VAR_7;
}
