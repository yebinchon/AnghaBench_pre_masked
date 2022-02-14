
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ipmi_smi_msg {int data_size; int* data; int rsp_size; int* rsp; int link; int msgid; int * user_data; } ;
typedef TYPE_2__* ipmi_smi_t ;
struct TYPE_8__ {int run_to_completion; int recv_tasklet; int waiting_msgs_lock; int waiting_msgs; TYPE_1__* channels; } ;
struct TYPE_7__ {scalar_t__ medium; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (struct ipmi_smi_msg*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

void FUNC_8(ipmi_smi_t VAR_11,
      struct ipmi_smi_msg *VAR_12)
{
 unsigned long VAR_13 = 0;
 int VAR_14;


 if ((VAR_12->data_size >= 2)
     && (VAR_12->data[0] == (VAR_6 << 2))
     && (VAR_12->data[1] == VAR_8)
     && (VAR_12->user_data == ((void*)0))) {
  if ((VAR_12->rsp_size >= 3) && (VAR_12->rsp[2] != 0)
      && (VAR_12->rsp[2] != VAR_7)
      && (VAR_12->rsp[2] != VAR_3)
      && (VAR_12->rsp[2] != VAR_0)
      && (VAR_12->rsp[2] != VAR_5)) {
   int VAR_15 = VAR_12->rsp[3] & 0xf;


   if (VAR_15 >= VAR_4)
    ;
   else if ((VAR_11->channels[VAR_15].medium
      == VAR_1)
     || (VAR_11->channels[VAR_15].medium
         == VAR_2))
    FUNC_3(VAR_11, VAR_10);
   else
    FUNC_3(VAR_11, VAR_9);
   FUNC_0(VAR_11, VAR_12->msgid, VAR_12->rsp[2]);
  } else

   FUNC_1(VAR_11, VAR_12->msgid);

  FUNC_2(VAR_12);
  goto out;
 }





 VAR_14 = VAR_11->run_to_completion;
 if (!VAR_14)
  FUNC_5(&VAR_11->waiting_msgs_lock, VAR_13);
 FUNC_4(&VAR_12->link, &VAR_11->waiting_msgs);
 if (!VAR_14)
  FUNC_6(&VAR_11->waiting_msgs_lock, VAR_13);

 FUNC_7(&VAR_11->recv_tasklet);
 out:
 return;
}
