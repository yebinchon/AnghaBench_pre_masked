
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef scalar_t__ u64 ;
struct TYPE_10__ {int channel_type; int send_buf_section_index; scalar_t__ send_buf_section_size; } ;
struct TYPE_11__ {TYPE_2__ send_rndis_pkt; } ;
struct TYPE_12__ {TYPE_3__ v1_msg; } ;
struct TYPE_9__ {int msg_type; } ;
struct nvsp_message {TYPE_4__ msg; TYPE_1__ hdr; } ;
struct netvsc_device {int num_outstanding_sends; struct net_device* ndev; } ;
struct net_device {int dummy; } ;
struct TYPE_13__ {scalar_t__ send_completion; } ;
struct TYPE_14__ {TYPE_5__ send; } ;
struct hv_netvsc_packet {scalar_t__ page_buf_cnt; int page_buf; TYPE_6__ completion; scalar_t__ is_data_pkt; } ;
struct hv_device {TYPE_7__* channel; } ;
struct TYPE_15__ {int outbound; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct netvsc_device* FUNC_2 (struct hv_device*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct net_device*,char*,struct hv_netvsc_packet*,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (TYPE_7__*,struct nvsp_message*,int,scalar_t__,int ,int ) ;
 int FUNC_8 (TYPE_7__*,int ,scalar_t__,struct nvsp_message*,int,scalar_t__) ;

int FUNC_9(struct hv_device *VAR_7,
   struct hv_netvsc_packet *VAR_8)
{
 struct netvsc_device *VAR_9;
 int VAR_10 = 0;
 struct nvsp_message VAR_11;
 struct net_device *VAR_12;
 u64 VAR_13;

 VAR_9 = FUNC_2(VAR_7);
 if (!VAR_9)
  return -VAR_1;
 VAR_12 = VAR_9->ndev;

 VAR_11.hdr.msg_type = VAR_3;
 if (VAR_8->is_data_pkt) {

  VAR_11.msg.v1_msg.send_rndis_pkt.channel_type = 0;
 } else {

  VAR_11.msg.v1_msg.send_rndis_pkt.channel_type = 1;
 }


 VAR_11.msg.v1_msg.send_rndis_pkt.send_buf_section_index =
  0xFFFFFFFF;
 VAR_11.msg.v1_msg.send_rndis_pkt.send_buf_section_size = 0;

 if (VAR_8->completion.send.send_completion)
  VAR_13 = (ulong)VAR_8;
 else
  VAR_13 = 0;

 if (VAR_8->page_buf_cnt) {
  VAR_10 = FUNC_8(VAR_7->channel,
        VAR_8->page_buf,
        VAR_8->page_buf_cnt,
        &VAR_11,
        sizeof(struct nvsp_message),
        VAR_13);
 } else {
  VAR_10 = FUNC_7(VAR_7->channel, &VAR_11,
    sizeof(struct nvsp_message),
    VAR_13,
    VAR_6,
    VAR_5);
 }

 if (VAR_10 == 0) {
  FUNC_0(&VAR_9->num_outstanding_sends);
  if (FUNC_3(&VAR_7->channel->outbound) <
   VAR_4) {
   FUNC_5(VAR_12);
   if (FUNC_1(&VAR_9->
    num_outstanding_sends) < 1)
    FUNC_6(VAR_12);
  }
 } else if (VAR_10 == -VAR_0) {
  FUNC_5(VAR_12);
  if (FUNC_1(&VAR_9->num_outstanding_sends) < 1) {
   FUNC_6(VAR_12);
   VAR_10 = -VAR_2;
  }
 } else {
  FUNC_4(VAR_12, "Unable to send packet %p ret %d\n",
      VAR_8, VAR_10);
 }

 return VAR_10;
}
