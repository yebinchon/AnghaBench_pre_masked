
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int request_queue; } ;
struct request {int timeout; int retries; int q; int cmd_flags; int cmd_type; scalar_t__* cmd; int cmd_len; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,int *,struct request*,int,int ) ;
 struct request* FUNC_2 (int ,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_3(struct scsi_device *VAR_8)
{
 struct request *VAR_9;





 VAR_9 = FUNC_2(VAR_8->request_queue, VAR_3, VAR_1);

 VAR_9->cmd[0] = VAR_0;
 VAR_9->cmd[1] = 0;
 VAR_9->cmd[2] = 0;
 VAR_9->cmd[3] = 0;
 VAR_9->cmd[4] = VAR_6;
 VAR_9->cmd[5] = 0;

 VAR_9->cmd_len = FUNC_0(VAR_9->cmd[0]);

 VAR_9->cmd_type = VAR_5;
 VAR_9->cmd_flags |= VAR_4;
 VAR_9->timeout = 10 * VAR_2;
 VAR_9->retries = 5;

 FUNC_1(VAR_9->q, ((void*)0), VAR_9, 1, VAR_7);
}
