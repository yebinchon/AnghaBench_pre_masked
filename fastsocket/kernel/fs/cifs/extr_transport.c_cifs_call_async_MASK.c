
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb_rqst {int dummy; } ;
struct mid_q_entry {int qhead; int mid_state; void* callback_data; int * callback; int * receive; } ;
struct TCP_Server_Info {int sequence_number; int request_q; int srv_mutex; int pending_mid_q; } ;
typedef int mid_receive_t ;
typedef int mid_callback_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mid_q_entry*) ;
 int VAR_2 ;
 int FUNC_1 (struct mid_q_entry*) ;
 int FUNC_2 (struct TCP_Server_Info*,int) ;
 int FUNC_3 (struct TCP_Server_Info*) ;
 int FUNC_4 (struct TCP_Server_Info*) ;
 int FUNC_5 (struct mid_q_entry*) ;
 struct mid_q_entry* FUNC_6 (struct TCP_Server_Info*,struct smb_rqst*) ;
 int FUNC_7 (struct mid_q_entry*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct TCP_Server_Info*,struct smb_rqst*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct TCP_Server_Info*,int ) ;
 int FUNC_15 (int *) ;

int
FUNC_16(struct TCP_Server_Info *VAR_3, struct smb_rqst *VAR_4,
  mid_receive_t *VAR_5, mid_callback_t *VAR_6,
  void *VAR_7, bool VAR_8)
{
 int VAR_9;
 struct mid_q_entry *VAR_10;

 VAR_9 = FUNC_14(VAR_3, VAR_8 ? VAR_0 : 0);
 if (VAR_9)
  return VAR_9;

 FUNC_9(&VAR_3->srv_mutex);
 VAR_10 = FUNC_6(VAR_3, VAR_4);
 if (FUNC_0(VAR_10)) {
  FUNC_10(&VAR_3->srv_mutex);
  FUNC_2(VAR_3, 1);
  FUNC_15(&VAR_3->request_q);
  return FUNC_1(VAR_10);
 }

 VAR_10->receive = VAR_5;
 VAR_10->callback = VAR_6;
 VAR_10->callback_data = VAR_7;
 VAR_10->mid_state = VAR_2;


 FUNC_12(&VAR_1);
 FUNC_8(&VAR_10->qhead, &VAR_3->pending_mid_q);
 FUNC_13(&VAR_1);

 FUNC_4(VAR_3);
 VAR_9 = FUNC_11(VAR_3, VAR_4);
 FUNC_3(VAR_3);
 FUNC_5(VAR_10);

 if (VAR_9 < 0)
  VAR_3->sequence_number -= 2;
 FUNC_10(&VAR_3->srv_mutex);

 if (VAR_9 == 0)
  return 0;

 FUNC_7(VAR_10);
 FUNC_2(VAR_3, 1);
 FUNC_15(&VAR_3->request_q);
 return VAR_9;
}
