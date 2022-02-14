
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {scalar_t__ bio; int sense; int cmd_len; int cmd; struct bsg_job* special; struct request* next_rq; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct bsg_job* sg_list; } ;
struct bsg_job {TYPE_1__ request_payload; struct device* dev; TYPE_1__ reply_payload; int reply_len; int reply; int request_len; int request; void* dd_data; struct request* req; } ;


 int FUNC_0 (struct bsg_job*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,struct request*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct bsg_job*) ;
 struct bsg_job* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, struct request *VAR_4,
     int VAR_5)
{
 struct request *VAR_6 = VAR_4->next_rq;
 struct bsg_job *VAR_7;
 int VAR_8;

 FUNC_0(VAR_4->special);

 VAR_7 = FUNC_4(sizeof(struct bsg_job) + VAR_5, VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_4->special = VAR_7;
 VAR_7->req = VAR_4;
 if (VAR_5)
  VAR_7->dd_data = (void *)&VAR_7[1];
 VAR_7->request = VAR_4->cmd;
 VAR_7->request_len = VAR_4->cmd_len;
 VAR_7->reply = VAR_4->sense;
 VAR_7->reply_len = VAR_2;

 if (VAR_4->bio) {
  VAR_8 = FUNC_1(&VAR_7->request_payload, VAR_4);
  if (VAR_8)
   goto failjob_rls_job;
 }
 if (VAR_6 && VAR_6->bio) {
  VAR_8 = FUNC_1(&VAR_7->reply_payload, VAR_6);
  if (VAR_8)
   goto failjob_rls_rqst_payload;
 }
 VAR_7->dev = VAR_3;

 FUNC_2(VAR_7->dev);
 return 0;

failjob_rls_rqst_payload:
 FUNC_3(VAR_7->request_payload.sg_list);
failjob_rls_job:
 FUNC_3(VAR_7);
 return -VAR_0;
}
