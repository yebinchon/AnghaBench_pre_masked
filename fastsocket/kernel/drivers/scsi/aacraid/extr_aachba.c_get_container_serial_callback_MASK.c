
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {char* cmnd; int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct fib {int dummy; } ;
struct aac_get_serial_resp {int uid; int status; } ;
typedef int sp ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct fib*) ;
 int FUNC_2 (struct fib*) ;
 int FUNC_3 (struct scsi_cmnd*,struct fib*) ;
 scalar_t__ FUNC_4 (struct fib*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct scsi_cmnd*,char*,int) ;
 char FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_9(void *VAR_5, struct fib * VAR_6)
{
 struct aac_get_serial_resp * VAR_7;
 struct scsi_cmnd * VAR_8;

 FUNC_0(VAR_6 == ((void*)0));

 VAR_8 = (struct scsi_cmnd *) VAR_5;
 if (!FUNC_3(VAR_8, VAR_6))
  return;

 VAR_7 = (struct aac_get_serial_resp *) FUNC_4(VAR_6);

 if (FUNC_5(VAR_7->status) == VAR_1) {
  char VAR_9[13];

  VAR_9[0] = VAR_3;
  VAR_9[1] = VAR_8->cmnd[2];
  VAR_9[2] = 0;
  VAR_9[3] = FUNC_7(VAR_9+4, sizeof(VAR_9)-4, "%08X",
    FUNC_5(VAR_7->uid));
  FUNC_6(VAR_8, VAR_9, sizeof(VAR_9));
 }

 VAR_8->result = VAR_2 << 16 | VAR_0 << 8 | VAR_4;

 FUNC_1(VAR_6);
 FUNC_2(VAR_6);
 VAR_8->scsi_done(VAR_8);
}
