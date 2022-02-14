
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int if_type; } ;
struct vmbus_channel_offer_channel {scalar_t__ is_dedicated_interrupt; scalar_t__ monitorid; TYPE_3__ offer; int connection_id; } ;
struct vmbus_channel_message_header {int dummy; } ;
struct vmbus_channel {int batched_reading; int is_dedicated_interrupt; int monitor_grp; int monitor_bit; int work; int controlwq; int offermsg; int target_vp; struct hv_input_signal_event* sig_event; int sig_buf; } ;
struct TYPE_4__ {int id; } ;
struct TYPE_5__ {TYPE_1__ u; scalar_t__ asu32; } ;
struct hv_input_signal_event {TYPE_2__ connectionid; scalar_t__ rsvdz; scalar_t__ flag_number; } ;


 scalar_t__ FUNC_0 (unsigned long,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct vmbus_channel* FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct vmbus_channel_offer_channel*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_7(struct vmbus_channel_message_header *VAR_5)
{
 struct vmbus_channel_offer_channel *VAR_6;
 struct vmbus_channel *VAR_7;

 VAR_6 = (struct vmbus_channel_offer_channel *)VAR_5;


 VAR_7 = FUNC_2();
 if (!VAR_7) {
  FUNC_5("Unable to allocate channel object\n");
  return;
 }






 VAR_7->batched_reading = 1;




 VAR_7->sig_event = (struct hv_input_signal_event *)
    (FUNC_0((unsigned long)
    &VAR_7->sig_buf,
    VAR_0));

 VAR_7->sig_event->connectionid.asu32 = 0;
 VAR_7->sig_event->connectionid.u.id = VAR_2;
 VAR_7->sig_event->flag_number = 0;
 VAR_7->sig_event->rsvdz = 0;

 if (VAR_4 != VAR_1) {
  VAR_7->is_dedicated_interrupt =
    (VAR_6->is_dedicated_interrupt != 0);
  VAR_7->sig_event->connectionid.u.id =
    VAR_6->connection_id;
 }

 VAR_7->target_vp = FUNC_3(&VAR_6->offer.if_type);

 FUNC_4(&VAR_7->offermsg, VAR_6,
        sizeof(struct vmbus_channel_offer_channel));
 VAR_7->monitor_grp = (u8)VAR_6->monitorid / 32;
 VAR_7->monitor_bit = (u8)VAR_6->monitorid % 32;

 FUNC_1(&VAR_7->work, VAR_3);
 FUNC_6(VAR_7->controlwq, &VAR_7->work);
}
