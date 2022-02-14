
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int cmd_len; int (* special ) (TYPE_1__*,int) ;int errors; int * cmd; int cmd_type; } ;
struct ide_devset {int flags; int (* set ) (TYPE_1__*,int) ;} ;
struct TYPE_4__ {struct request_queue* queue; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct request_queue*,int *,struct request*,int ) ;
 struct request* FUNC_1 (struct request_queue*,int ,int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (TYPE_1__*,int) ;

int FUNC_4(ide_drive_t *VAR_5, const struct ide_devset *VAR_6,
         int VAR_7)
{
 struct request_queue *VAR_8 = VAR_5->queue;
 struct request *VAR_9;
 int VAR_10 = 0;

 if (!(VAR_6->flags & VAR_0))
  return VAR_6->set(VAR_5, VAR_7);

 VAR_9 = FUNC_1(VAR_8, VAR_1, VAR_4);
 VAR_9->cmd_type = VAR_3;
 VAR_9->cmd_len = 5;
 VAR_9->cmd[0] = VAR_2;
 *(int *)&VAR_9->cmd[1] = VAR_7;
 VAR_9->special = VAR_6->set;

 if (FUNC_0(VAR_8, ((void*)0), VAR_9, 0))
  VAR_10 = VAR_9->errors;
 FUNC_2(VAR_9);

 return VAR_10;
}
