
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct request_queue* request_queue; } ;
struct request_queue {int dummy; } ;
struct request {int* cmd; scalar_t__ sense_len; int sense; int cmd_len; } ;
struct rdac_dh_data {int sense; int inq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct request_queue*,int *,struct request*,int) ;
 int FUNC_2 (struct request*) ;
 struct request* FUNC_3 (struct scsi_device*,int *,unsigned int,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct scsi_device *VAR_6, int VAR_7,
     unsigned int VAR_8, struct rdac_dh_data *VAR_9)
{
 struct request *VAR_10;
 struct request_queue *VAR_11 = VAR_6->request_queue;
 int VAR_12 = VAR_4;

 VAR_10 = FUNC_3(VAR_6, &VAR_9->inq, VAR_8, VAR_2);
 if (!VAR_10)
  goto done;


 VAR_10->cmd[0] = VAR_1;
 VAR_10->cmd[1] = 1;
 VAR_10->cmd[2] = VAR_7;
 VAR_10->cmd[4] = VAR_8;
 VAR_10->cmd_len = FUNC_0(VAR_1);

 VAR_10->sense = VAR_9->sense;
 FUNC_4(VAR_10->sense, 0, VAR_5);
 VAR_10->sense_len = 0;

 VAR_12 = FUNC_1(VAR_11, ((void*)0), VAR_10, 1);
 if (VAR_12 == -VAR_0)
  VAR_12 = VAR_3;

 FUNC_2(VAR_10);
done:
 return VAR_12;
}
