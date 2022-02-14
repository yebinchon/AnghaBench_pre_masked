
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;
struct request_queue {struct scsi_device* queuedata; } ;
struct request {scalar_t__ cmd_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct request_queue*,struct request*,int) ;
 int FUNC_1 (struct scsi_device*,struct request*) ;

int FUNC_2(struct request_queue *VAR_2, struct request *VAR_3)
{
 struct scsi_device *VAR_4 = VAR_2->queuedata;
 int VAR_5 = VAR_0;

 if (VAR_3->cmd_type == VAR_1)
  VAR_5 = FUNC_1(VAR_4, VAR_3);
 return FUNC_0(VAR_2, VAR_3, VAR_5);
}
