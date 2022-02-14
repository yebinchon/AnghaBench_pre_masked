
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 long FUNC_1 (struct scsi_qla_host*,int ) ;
 long VAR_2 ;

__attribute__((used)) static int
FUNC_2(struct scsi_qla_host *VAR_3)
{
 long VAR_4 = 0;
 long VAR_5 = 0 ;

 while (VAR_5 == 0) {
  VAR_5 = FUNC_1(VAR_3, VAR_1);
  VAR_5 &= 2;
  VAR_4++;
  if (VAR_4 >= VAR_2) {
   FUNC_0("%s: Timeout reached  waiting for rom done",
     VAR_0);
   return -1;
  }
 }
 return 0;
}
