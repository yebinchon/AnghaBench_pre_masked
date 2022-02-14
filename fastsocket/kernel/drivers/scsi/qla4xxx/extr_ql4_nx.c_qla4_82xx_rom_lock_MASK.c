
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct scsi_qla_host*,int ) ;
 int VAR_3 ;
 int FUNC_4 (struct scsi_qla_host*,int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct scsi_qla_host *VAR_4)
{
 int VAR_5;
 int VAR_6 = 0, VAR_7 = 0;

 while (!VAR_6) {


  VAR_6 = FUNC_3(VAR_4, FUNC_0(VAR_0));
  if (VAR_6 == 1)
   break;
  if (VAR_7 >= VAR_3)
   return -1;

  VAR_7++;


  if (!FUNC_2())
   FUNC_5();
  else {
   for (VAR_5 = 0; VAR_5 < 20; VAR_5++)
    FUNC_1();
  }
 }
 FUNC_4(VAR_4, VAR_1, VAR_2);
 return 0;
}
