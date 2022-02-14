
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;int result; } ;
struct qlogicfas408_priv {int qbase; struct scsi_cmnd* qlcmd; } ;
struct Scsi_Host {int dummy; } ;


 int VAR_0 ;
 struct qlogicfas408_priv* FUNC_0 (struct Scsi_Host*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_4(void *VAR_1)
{
 struct scsi_cmnd *VAR_2;
 struct Scsi_Host *VAR_3 = VAR_1;
 struct qlogicfas408_priv *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = VAR_4->qbase;
 VAR_0;

 if (!(FUNC_1(VAR_5 + 4) & 0x80))
  return;

 if (VAR_4->qlcmd == ((void*)0)) {
  int VAR_6;
  VAR_6 = 16;
  while (VAR_6-- && FUNC_1(VAR_5 + 5));
  return;
 }
 VAR_2 = VAR_4->qlcmd;
 VAR_2->result = FUNC_2(VAR_2);
 VAR_4->qlcmd = ((void*)0);




 (VAR_2->scsi_done) (VAR_2);
}
