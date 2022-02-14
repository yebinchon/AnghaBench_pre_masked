
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {int status; } ;
struct TYPE_7__ {TYPE_2__ send_rndis_pkt_complete; } ;
struct TYPE_8__ {TYPE_3__ v1_msg; } ;
struct TYPE_5__ {int msg_type; } ;
struct nvsp_message {TYPE_4__ msg; TYPE_1__ hdr; } ;
struct netvsc_device {struct net_device* ndev; } ;
struct net_device {int dummy; } ;
struct hv_device {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct netvsc_device* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (struct net_device*,char*,int ,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct nvsp_message*,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct hv_device *VAR_3,
     u64 VAR_4, u32 VAR_5)
{
 struct nvsp_message VAR_6;
 int VAR_7 = 0;
 int VAR_8;
 struct net_device *VAR_9;
 struct netvsc_device *VAR_10 = FUNC_0(VAR_3);

 VAR_9 = VAR_10->ndev;

 VAR_6.hdr.msg_type =
    VAR_1;

 VAR_6.msg.v1_msg.send_rndis_pkt_complete.status = VAR_5;

retry_send_cmplt:

 VAR_8 = FUNC_3(VAR_3->channel, &VAR_6,
          sizeof(struct nvsp_message), VAR_4,
          VAR_2, 0);
 if (VAR_8 == 0) {


 } else if (VAR_8 == -VAR_0) {

  VAR_7++;
  FUNC_1(VAR_9, "unable to send receive completion pkt"
   " (tid %llx)...retrying %d\n", VAR_4, VAR_7);

  if (VAR_7 < 4) {
   FUNC_2(100);
   goto retry_send_cmplt;
  } else {
   FUNC_1(VAR_9, "unable to send receive "
    "completion pkt (tid %llx)...give up retrying\n",
    VAR_4);
  }
 } else {
  FUNC_1(VAR_9, "unable to send receive "
   "completion pkt - %llx\n", VAR_4);
 }
}
