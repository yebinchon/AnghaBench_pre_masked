
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vmpacket_descriptor {int offset8; scalar_t__ trans_id; } ;
struct TYPE_8__ {scalar_t__ msg_type; } ;
struct nvsp_message {TYPE_4__ hdr; } ;
struct netvsc_device {int start_remove; int wait_drain; scalar_t__ destroy; int num_outstanding_sends; int channel_init_wait; int channel_init_pkt; struct net_device* ndev; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int send_completion_ctx; int (* send_completion ) (int ) ;} ;
struct TYPE_6__ {TYPE_1__ send; } ;
struct hv_netvsc_packet {TYPE_2__ completion; } ;
struct hv_device {TYPE_3__* channel; } ;
struct TYPE_7__ {int outbound; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct netvsc_device* FUNC_2 (struct hv_device*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,struct nvsp_message*,int) ;
 int FUNC_5 (struct net_device*,char*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct hv_device *VAR_5,
       struct vmpacket_descriptor *VAR_6)
{
 struct netvsc_device *VAR_7;
 struct nvsp_message *VAR_8;
 struct hv_netvsc_packet *VAR_9;
 struct net_device *VAR_10;

 VAR_7 = FUNC_2(VAR_5);
 if (!VAR_7)
  return;
 VAR_10 = VAR_7->ndev;

 VAR_8 = (struct nvsp_message *)((unsigned long)VAR_6 +
   (VAR_6->offset8 << 3));

 if ((VAR_8->hdr.msg_type == VAR_3) ||
     (VAR_8->hdr.msg_type ==
      VAR_0) ||
     (VAR_8->hdr.msg_type ==
      VAR_2)) {

  FUNC_4(&VAR_7->channel_init_pkt, VAR_8,
         sizeof(struct nvsp_message));
  FUNC_1(&VAR_7->channel_init_wait);
 } else if (VAR_8->hdr.msg_type ==
     VAR_1) {
  int VAR_11;


  VAR_9 = (struct hv_netvsc_packet *)(unsigned long)
   VAR_6->trans_id;


  if (VAR_9)
   VAR_9->completion.send.send_completion(
    VAR_9->completion.send.
    send_completion_ctx);

  VAR_11 =
   FUNC_0(&VAR_7->num_outstanding_sends);

  if (VAR_7->destroy && VAR_11 == 0)
   FUNC_9(&VAR_7->wait_drain);

  if (FUNC_6(VAR_10) && !VAR_7->start_remove &&
   (FUNC_3(&VAR_5->channel->outbound)
   > VAR_4 ||
   VAR_11 < 1))
    FUNC_7(VAR_10);
 } else {
  FUNC_5(VAR_10, "Unknown send completion packet type- "
      "%d received!!\n", VAR_8->hdr.msg_type);
 }

}
