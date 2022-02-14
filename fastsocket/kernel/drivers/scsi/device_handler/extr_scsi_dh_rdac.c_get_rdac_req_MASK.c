
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct request_queue* request_queue; } ;
struct request_queue {int dummy; } ;
struct request {int cmd_flags; int timeout; int retries; int cmd_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct request* FUNC_0 (struct request_queue*,int,int ) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request_queue*,struct request*,void*,unsigned int,int ) ;
 int FUNC_3 (int ,struct scsi_device*,char*) ;

__attribute__((used)) static struct request *FUNC_4(struct scsi_device *VAR_8,
   void *VAR_9, unsigned VAR_10, int VAR_11)
{
 struct request *VAR_12;
 struct request_queue *VAR_13 = VAR_8->request_queue;

 VAR_12 = FUNC_0(VAR_13, VAR_11, VAR_0);

 if (!VAR_12) {
  FUNC_3(VAR_1, VAR_8,
    "get_rdac_req: blk_get_request failed.\n");
  return ((void*)0);
 }

 if (VAR_10 && FUNC_2(VAR_13, VAR_12, VAR_9, VAR_10, VAR_0)) {
  FUNC_1(VAR_12);
  FUNC_3(VAR_1, VAR_8,
    "get_rdac_req: blk_rq_map_kern failed.\n");
  return ((void*)0);
 }

 VAR_12->cmd_type = VAR_7;
 VAR_12->cmd_flags |= VAR_4 | VAR_6 |
    VAR_5;
 VAR_12->retries = VAR_2;
 VAR_12->timeout = VAR_3;

 return VAR_12;
}
