
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct fib {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct fib*) ;
 int FUNC_2 (struct fib*) ;
 int FUNC_3 (struct scsi_cmnd*,struct fib*) ;
 int FUNC_4 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_5(void *VAR_3, struct fib *VAR_4)
{
 struct scsi_cmnd *VAR_5 = VAR_3;

 if (!FUNC_3(VAR_5, VAR_4))
  return;

 FUNC_0(VAR_4 == ((void*)0));

 VAR_5->result = VAR_1 << 16 | VAR_0 << 8 | VAR_2;

 FUNC_1(VAR_4);
 FUNC_2(VAR_4);
 VAR_5->scsi_done(VAR_5);
}
