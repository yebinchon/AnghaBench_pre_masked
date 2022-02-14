
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int result; void (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct qlogicfas408_priv {scalar_t__ qinitid; int * qlcmd; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 struct qlogicfas408_priv* FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_4 (struct scsi_cmnd*) ;

int FUNC_5(struct scsi_cmnd *VAR_1,
         void (*VAR_2) (struct scsi_cmnd *))
{
 struct qlogicfas408_priv *VAR_3 = FUNC_2(VAR_1);
 if (FUNC_4(VAR_1) == VAR_3->qinitid) {
  VAR_1->result = VAR_0 << 16;
  VAR_2(VAR_1);
  return 0;
 }

 VAR_1->scsi_done = VAR_2;

 while (VAR_3->qlcmd != ((void*)0)) {
  FUNC_0();
  FUNC_1();
 }
 FUNC_3(VAR_1);
 return 0;
}
