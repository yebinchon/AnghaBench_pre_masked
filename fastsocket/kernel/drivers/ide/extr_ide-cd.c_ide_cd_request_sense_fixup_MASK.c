
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {scalar_t__* cmd; } ;
struct ide_cmd {int nleft; struct request* rq; } ;
typedef int ide_drive_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(ide_drive_t *VAR_2, struct ide_cmd *VAR_3)
{
 struct request *VAR_4 = VAR_3->rq;

 FUNC_0(VAR_1, "rq->cmd[0]: 0x%x", VAR_4->cmd[0]);





 if (VAR_4->cmd[0] == VAR_0 &&
     VAR_3->nleft > 0 && VAR_3->nleft <= 5)
  VAR_3->nleft = 0;
}
