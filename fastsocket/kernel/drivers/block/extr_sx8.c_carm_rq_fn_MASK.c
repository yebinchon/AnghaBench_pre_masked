
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct scatterlist {int dummy; } ;
struct request_queue {struct carm_port* queuedata; } ;
struct request {int dummy; } ;
struct carm_request {int n_elem; int msg_bucket; int tag; struct scatterlist* sg; void* msg_type; struct carm_port* port; struct request* rq; } ;
struct carm_port {int port_no; struct carm_host* host; } ;
struct carm_msg_sg {void* len; void* start; } ;
struct carm_msg_rw {int sg_count; struct carm_msg_sg* sg; void* lba_count; void* lba_high; void* lba; void* handle; int sg_type; int id; void* type; } ;
struct carm_host {int hw_sg_used; int pdev; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_6 ;
 struct request* FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request_queue*,struct request*) ;
 int FUNC_5 (struct request_queue*,struct request*,struct scatterlist*) ;
 int FUNC_6 (struct request*) ;
 int FUNC_7 (struct request*) ;
 int FUNC_8 (struct request*) ;
 int FUNC_9 (struct carm_host*,struct carm_request*,int ) ;
 struct carm_request* FUNC_10 (struct carm_host*) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (struct carm_host*,struct request_queue*) ;
 int FUNC_13 (struct carm_host*,struct carm_request*) ;
 scalar_t__ FUNC_14 (struct carm_host*,int ) ;
 int FUNC_15 (struct carm_host*,struct carm_request*) ;
 void* FUNC_16 (int ) ;
 void* FUNC_17 (int) ;
 int FUNC_18 (int ,struct scatterlist*,int,int) ;
 scalar_t__ FUNC_19 (struct request*) ;
 int FUNC_20 (struct scatterlist*) ;
 int FUNC_21 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_22(struct request_queue *VAR_7)
{
 struct carm_port *VAR_8 = VAR_7->queuedata;
 struct carm_host *VAR_9 = VAR_8->host;
 struct carm_msg_rw *VAR_10;
 struct carm_request *VAR_11;
 struct request *VAR_12;
 struct scatterlist *VAR_13;
 int VAR_14 = 0, VAR_15, VAR_16, VAR_17, VAR_18;
 u32 VAR_19;
 unsigned int VAR_20;

queue_one_request:
 FUNC_2("get req\n");
 VAR_12 = FUNC_3(VAR_7);
 if (!VAR_12)
  return;

 VAR_11 = FUNC_10(VAR_9);
 if (!VAR_11) {
  FUNC_12(VAR_9, VAR_7);
  return;
 }
 VAR_11->rq = VAR_12;

 FUNC_8(VAR_12);

 if (FUNC_19(VAR_12) == VAR_6) {
  VAR_14 = 1;
  VAR_15 = VAR_4;
 } else {
  VAR_15 = VAR_3;
 }


 VAR_13 = &VAR_11->sg[0];
 VAR_17 = FUNC_5(VAR_7, VAR_12, VAR_13);
 if (VAR_17 <= 0) {
  FUNC_9(VAR_9, VAR_11, -VAR_2);
  return;
 }


 VAR_17 = FUNC_18(VAR_9->pdev, VAR_13, VAR_17, VAR_15);
 if (VAR_17 <= 0) {
  FUNC_9(VAR_9, VAR_11, -VAR_2);
  return;
 }
 VAR_11->n_elem = VAR_17;
 VAR_11->port = VAR_8;
 VAR_9->hw_sg_used += VAR_17;





 FUNC_2("build msg\n");
 VAR_10 = (struct carm_msg_rw *) FUNC_14(VAR_9, VAR_11->tag);

 if (VAR_14) {
  VAR_10->type = VAR_1;
  VAR_11->msg_type = VAR_1;
 } else {
  VAR_10->type = VAR_0;
  VAR_11->msg_type = VAR_0;
 }

 VAR_10->id = VAR_8->port_no;
 VAR_10->sg_count = VAR_17;
 VAR_10->sg_type = VAR_5;
 VAR_10->handle = FUNC_17(FUNC_1(VAR_11->tag));
 VAR_10->lba = FUNC_17(FUNC_6(VAR_12) & 0xffffffff);
 VAR_19 = (FUNC_6(VAR_12) >> 16) >> 16;
 VAR_10->lba_high = FUNC_16( (u16) VAR_19 );
 VAR_10->lba_count = FUNC_16(FUNC_7(VAR_12));

 VAR_20 = sizeof(struct carm_msg_rw) - sizeof(VAR_10->sg);
 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
  struct carm_msg_sg *VAR_21 = &VAR_10->sg[VAR_16];
  VAR_21->start = FUNC_17(FUNC_20(&VAR_11->sg[VAR_16]));
  VAR_21->len = FUNC_17(FUNC_21(&VAR_11->sg[VAR_16]));
  VAR_20 += sizeof(struct carm_msg_sg);
 }

 VAR_18 = FUNC_11(VAR_20);
 FUNC_0(VAR_18 < 0);
 VAR_11->msg_bucket = (u32) VAR_18;





 FUNC_2("send msg, tag == %u\n", VAR_11->tag);
 VAR_18 = FUNC_15(VAR_9, VAR_11);
 if (VAR_18) {
  FUNC_13(VAR_9, VAR_11);
  FUNC_4(VAR_7, VAR_12);
  FUNC_12(VAR_9, VAR_7);
  return;
 }

 goto queue_one_request;
}
