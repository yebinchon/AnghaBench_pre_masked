
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
typedef int tmp ;
struct iw_cm_event {int ird; int ord; int event; int private_data_len; int * private_data; int remote_addr; int local_addr; int status; } ;
struct c2wr_hdr {scalar_t__ context; } ;
struct c2_vq_req {int event; int wait_object; int reply_ready; int reply_msg; TYPE_1__* cm_id; int qp; } ;
struct c2_mq {int msg_size; } ;
struct c2_dev {scalar_t__* qptr_array; } ;
struct TYPE_2__ {int (* event_handler ) (TYPE_1__*,struct iw_cm_event*) ;int remote_addr; int local_addr; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (struct c2_mq*) ;
 int FUNC_3 (struct c2_mq*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct c2wr_hdr*,void*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_1__*,struct iw_cm_event*) ;
 struct c2wr_hdr* FUNC_8 (struct c2_dev*) ;
 int FUNC_9 (struct c2_dev*,struct c2wr_hdr*) ;
 int FUNC_10 (struct c2_dev*,struct c2_vq_req*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct c2_dev *VAR_2, u32 VAR_3)
{
 void *VAR_4, *VAR_5;
 struct c2wr_hdr *VAR_6;
 struct c2wr_hdr VAR_7;
 struct c2_mq *VAR_8;
 struct c2_vq_req *VAR_9;
 struct iw_cm_event VAR_10;
 int VAR_11;

 VAR_8 = (struct c2_mq *) VAR_2->qptr_array[VAR_3];





 VAR_4 = FUNC_2(VAR_8);
 if (VAR_4 == ((void*)0)) {
  return;
 }

 VAR_6 = FUNC_8(VAR_2);






 if (!VAR_6) {
  FUNC_6("handle_vq: no repbufs!\n");





  VAR_6 = &VAR_7;
  FUNC_5(VAR_6, VAR_4, sizeof(VAR_7));
  VAR_5 = ((void*)0);
 } else {
  FUNC_5(VAR_6, VAR_4, VAR_8->msg_size);
  VAR_5 = VAR_6;
 }




 FUNC_3(VAR_8);




 VAR_9 = (struct c2_vq_req *) (unsigned long) VAR_6->context;
 if (VAR_9 == ((void*)0)) {




  FUNC_9(VAR_2, VAR_6);
  FUNC_6("handle_vq: UNEXPECTEDLY got NULL req\n");
  return;
 }

 if (VAR_5)
  VAR_11 = FUNC_1(VAR_5);
 else
  VAR_11 = -VAR_1;

 if (!VAR_11) switch (VAR_9->event) {
 case 128:
  FUNC_4(VAR_9->qp,
    VAR_0);




  VAR_10.ird = VAR_10.ord = 128;
 case 129:





  VAR_10.event = VAR_9->event;
  VAR_10.status = 0;
  VAR_10.local_addr = VAR_9->cm_id->local_addr;
  VAR_10.remote_addr = VAR_9->cm_id->remote_addr;
  VAR_10.private_data = ((void*)0);
  VAR_10.private_data_len = 0;
  VAR_9->cm_id->event_handler(VAR_9->cm_id, &VAR_10);
  break;
 default:
  break;
 }

 VAR_9->reply_msg = (u64) (unsigned long) (VAR_5);
 FUNC_0(&VAR_9->reply_ready, 1);
 FUNC_11(&VAR_9->wait_object);





 FUNC_10(VAR_2, VAR_9);
}
