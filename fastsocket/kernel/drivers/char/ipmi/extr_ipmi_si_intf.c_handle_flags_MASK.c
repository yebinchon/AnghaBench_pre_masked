
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smi_info {int msg_flags; void* si_state; scalar_t__ (* oem_data_avail_handler ) (struct smi_info*) ;TYPE_2__* curr_msg; int si_sm; TYPE_1__* handlers; int intf; } ;
struct TYPE_4__ {int* data; int data_size; } ;
struct TYPE_3__ {int (* start_transaction ) (int ,int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct smi_info*) ;
 int FUNC_1 (struct smi_info*) ;
 void* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct smi_info*,int ) ;
 int FUNC_5 (struct smi_info*) ;
 int FUNC_6 (int ,int*,int) ;
 int FUNC_7 (int ,int*,int) ;
 scalar_t__ FUNC_8 (struct smi_info*) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_9(struct smi_info *VAR_11)
{
 retry:
 if (VAR_11->msg_flags & VAR_9) {

  FUNC_4(VAR_11, VAR_10);

  FUNC_5(VAR_11);
  VAR_11->msg_flags &= ~VAR_9;
  FUNC_3(VAR_11->intf);
 } else if (VAR_11->msg_flags & VAR_5) {

  VAR_11->curr_msg = FUNC_2();
  if (!VAR_11->curr_msg) {
   FUNC_0(VAR_11);
   VAR_11->si_state = VAR_8;
   return;
  }
  FUNC_1(VAR_11);

  VAR_11->curr_msg->data[0] = (VAR_2 << 2);
  VAR_11->curr_msg->data[1] = VAR_1;
  VAR_11->curr_msg->data_size = 2;

  VAR_11->handlers->start_transaction(
   VAR_11->si_sm,
   VAR_11->curr_msg->data,
   VAR_11->curr_msg->data_size);
  VAR_11->si_state = VAR_7;
 } else if (VAR_11->msg_flags & VAR_0) {

  VAR_11->curr_msg = FUNC_2();
  if (!VAR_11->curr_msg) {
   FUNC_0(VAR_11);
   VAR_11->si_state = VAR_8;
   return;
  }
  FUNC_1(VAR_11);

  VAR_11->curr_msg->data[0] = (VAR_2 << 2);
  VAR_11->curr_msg->data[1] = VAR_3;
  VAR_11->curr_msg->data_size = 2;

  VAR_11->handlers->start_transaction(
   VAR_11->si_sm,
   VAR_11->curr_msg->data,
   VAR_11->curr_msg->data_size);
  VAR_11->si_state = VAR_6;
 } else if (VAR_11->msg_flags & VAR_4 &&
     VAR_11->oem_data_avail_handler) {
  if (VAR_11->oem_data_avail_handler(VAR_11))
   goto retry;
 } else
  VAR_11->si_state = VAR_8;
}
