
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smi_info {int si_state; TYPE_2__* curr_msg; int si_sm; TYPE_1__* handlers; int req_events; int intf; } ;
typedef enum si_sm_result { ____Placeholder_si_sm_result } si_sm_result ;
struct TYPE_4__ {int* data; int data_size; } ;
struct TYPE_3__ {int (* event ) (int ,int) ;int (* start_transaction ) (int ,unsigned char*,int) ;} ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct smi_info*) ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_2__* FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct smi_info*,int ) ;
 int FUNC_6 (struct smi_info*,int ) ;
 int FUNC_7 (struct smi_info*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,unsigned char*,int) ;
 int FUNC_13 (int ,unsigned char*,int) ;

__attribute__((used)) static enum si_sm_result FUNC_14(struct smi_info *VAR_16,
        int VAR_17)
{
 enum si_sm_result VAR_18;

 restart:
 VAR_18 = VAR_16->handlers->event(VAR_16->si_sm, VAR_17);
 VAR_17 = 0;
 while (VAR_18 == VAR_8)
  VAR_18 = VAR_16->handlers->event(VAR_16->si_sm, 0);

 if (VAR_18 == VAR_11) {
  FUNC_6(VAR_16, VAR_13);

  FUNC_2(VAR_16);
  VAR_18 = VAR_16->handlers->event(VAR_16->si_sm, 0);
 } else if (VAR_18 == VAR_9) {
  FUNC_6(VAR_16, VAR_14);





  VAR_16->si_state = VAR_6;
  if (VAR_16->curr_msg != ((void*)0)) {





   FUNC_5(VAR_16, VAR_0);
  }
  VAR_18 = VAR_16->handlers->event(VAR_16->si_sm, 0);
 }





 if (FUNC_4(VAR_16->intf) && VAR_18 == VAR_7) {
  unsigned char VAR_19[2];

  FUNC_6(VAR_16, VAR_12);
  VAR_19[0] = (VAR_2 << 2);
  VAR_19[1] = VAR_1;

  VAR_16->handlers->start_transaction(
   VAR_16->si_sm, VAR_19, 2);
  VAR_16->si_state = VAR_5;
  goto restart;
 }


 if (VAR_18 == VAR_10) {
  FUNC_6(VAR_16, VAR_15);

  VAR_18 = FUNC_7(VAR_16);
  if (VAR_18 != VAR_10)
   goto restart;
 }

 if ((VAR_18 == VAR_10)
     && (FUNC_0(&VAR_16->req_events))) {




  FUNC_1(&VAR_16->req_events, 0);

  VAR_16->curr_msg = FUNC_3();
  if (!VAR_16->curr_msg)
   goto out;

  VAR_16->curr_msg->data[0] = (VAR_2 << 2);
  VAR_16->curr_msg->data[1] = VAR_3;
  VAR_16->curr_msg->data_size = 2;

  VAR_16->handlers->start_transaction(
   VAR_16->si_sm,
   VAR_16->curr_msg->data,
   VAR_16->curr_msg->data_size);
  VAR_16->si_state = VAR_4;
  goto restart;
 }
 out:
 return VAR_18;
}
