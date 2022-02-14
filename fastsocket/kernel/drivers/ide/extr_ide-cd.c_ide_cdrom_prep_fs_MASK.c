
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {long* cmd; int cmd_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (long*,int ,int ) ;
 int FUNC_3 (struct request_queue*) ;
 scalar_t__ FUNC_4 (struct request*) ;

__attribute__((used)) static int FUNC_5(struct request_queue *VAR_5, struct request *VAR_6)
{
 int VAR_7 = FUNC_3(VAR_5);
 long VAR_8 = (long)FUNC_0(VAR_6) / (VAR_7 >> 9);
 unsigned long VAR_9 = FUNC_1(VAR_6) / (VAR_7 >> 9);

 FUNC_2(VAR_6->cmd, 0, VAR_1);

 if (FUNC_4(VAR_6) == VAR_4)
  VAR_6->cmd[0] = VAR_2;
 else
  VAR_6->cmd[0] = VAR_3;




 VAR_6->cmd[2] = (VAR_8 >> 24) & 0xff;
 VAR_6->cmd[3] = (VAR_8 >> 16) & 0xff;
 VAR_6->cmd[4] = (VAR_8 >> 8) & 0xff;
 VAR_6->cmd[5] = VAR_8 & 0xff;




 VAR_6->cmd[7] = (VAR_9 >> 8) & 0xff;
 VAR_6->cmd[8] = VAR_9 & 0xff;
 VAR_6->cmd_len = 10;
 return VAR_0;
}
