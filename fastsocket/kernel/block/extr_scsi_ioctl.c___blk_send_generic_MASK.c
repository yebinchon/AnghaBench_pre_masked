
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {int* cmd; int cmd_len; int timeout; int cmd_type; } ;
struct gendisk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct request_queue*,struct gendisk*,struct request*,int ) ;
 struct request* FUNC_1 (struct request_queue*,int ,int ) ;
 int FUNC_2 (struct request*) ;

__attribute__((used)) static int FUNC_3(struct request_queue *VAR_5, struct gendisk *VAR_6,
         int VAR_7, int VAR_8)
{
 struct request *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_5, VAR_3, VAR_4);
 if (!VAR_9)
  return -VAR_1;
 VAR_9->cmd_type = VAR_2;
 VAR_9->timeout = VAR_0;
 VAR_9->cmd[0] = VAR_7;
 VAR_9->cmd[4] = VAR_8;
 VAR_9->cmd_len = 6;
 VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_9, 0);
 FUNC_2(VAR_9);

 return VAR_10;
}
