
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_15__ {int ieee8021q; } ;
struct TYPE_16__ {TYPE_6__ capability; int mtu; } ;
struct TYPE_17__ {TYPE_7__ send_ndis_config; } ;
struct TYPE_11__ {scalar_t__ status; } ;
struct TYPE_10__ {scalar_t__ max_protocol_ver; scalar_t__ min_protocol_ver; } ;
struct TYPE_12__ {TYPE_2__ init_complete; TYPE_1__ init; } ;
struct TYPE_18__ {TYPE_8__ v2_msg; TYPE_3__ init_msg; } ;
struct TYPE_13__ {int msg_type; } ;
struct nvsp_message {TYPE_9__ msg; TYPE_4__ hdr; } ;
struct netvsc_device {TYPE_5__* ndev; int channel_init_wait; } ;
struct hv_device {int channel; } ;
struct TYPE_14__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct nvsp_message*,int ,int) ;
 int FUNC_1 (int ,struct nvsp_message*,int,unsigned long,int ,int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(struct hv_device *VAR_9,
         struct netvsc_device *VAR_10,
         struct nvsp_message *VAR_11,
         u32 VAR_12)
{
 int VAR_13, VAR_14;

 FUNC_0(VAR_11, 0, sizeof(struct nvsp_message));
 VAR_11->hdr.msg_type = VAR_4;
 VAR_11->msg.init_msg.init.min_protocol_ver = VAR_12;
 VAR_11->msg.init_msg.init.max_protocol_ver = VAR_12;


 VAR_13 = FUNC_1(VAR_9->channel, VAR_11,
          sizeof(struct nvsp_message),
          (unsigned long)VAR_11,
          VAR_8,
          VAR_7);

 if (VAR_13 != 0)
  return VAR_13;

 VAR_14 = FUNC_2(&VAR_10->channel_init_wait, 5*VAR_2);

 if (VAR_14 == 0)
  return -VAR_1;

 if (VAR_11->msg.init_msg.init_complete.status !=
     VAR_6)
  return -VAR_0;

 if (VAR_12 != VAR_5)
  return 0;


 FUNC_0(VAR_11, 0, sizeof(struct nvsp_message));
 VAR_11->hdr.msg_type = VAR_3;
 VAR_11->msg.v2_msg.send_ndis_config.mtu = VAR_10->ndev->mtu;
 VAR_11->msg.v2_msg.send_ndis_config.capability.ieee8021q = 1;

 VAR_13 = FUNC_1(VAR_9->channel, VAR_11,
    sizeof(struct nvsp_message),
    (unsigned long)VAR_11,
    VAR_8, 0);

 return VAR_13;
}
