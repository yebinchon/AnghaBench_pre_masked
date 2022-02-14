
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue_status {int response_code; } ;
struct ap_message {int list; int (* receive ) (struct ap_device*,struct ap_message*,int ) ;int special; int length; int message; int psmid; } ;
struct ap_device {scalar_t__ queue_count; scalar_t__ queue_depth; int total_request_count; int requestq_count; int requestq; int pendingq_count; int pendingq; int qid; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct ap_queue_status FUNC_1 (int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct ap_device*) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct ap_device*,struct ap_message*,int ) ;
 int FUNC_8 (struct ap_device*,struct ap_message*,int ) ;

__attribute__((used)) static int FUNC_9(struct ap_device *VAR_4, struct ap_message *VAR_5)
{
 struct ap_queue_status VAR_6;

 if (FUNC_6(&VAR_4->requestq) &&
     VAR_4->queue_count < VAR_4->queue_depth) {
  VAR_6 = FUNC_1(VAR_4->qid, VAR_5->psmid,
       VAR_5->message, VAR_5->length,
       VAR_5->special);
  switch (VAR_6.response_code) {
  case 131:
   FUNC_5(&VAR_5->list, &VAR_4->pendingq);
   FUNC_4(&VAR_3);
   VAR_4->pendingq_count++;
   FUNC_2(VAR_4);
   VAR_4->total_request_count++;
   break;
  case 130:
  case 128:
   FUNC_5(&VAR_5->list, &VAR_4->requestq);
   VAR_4->requestq_count++;
   VAR_4->total_request_count++;
   return -VAR_0;
  case 129:
  case 132:
   VAR_5->receive(VAR_4, VAR_5, FUNC_0(-VAR_1));
   return -VAR_1;
  default:
   VAR_5->receive(VAR_4, VAR_5, FUNC_0(-VAR_2));
   return -VAR_2;
  }
 } else {
  FUNC_5(&VAR_5->list, &VAR_4->requestq);
  VAR_4->requestq_count++;
  VAR_4->total_request_count++;
  return -VAR_0;
 }
 FUNC_3();
 return 0;
}
