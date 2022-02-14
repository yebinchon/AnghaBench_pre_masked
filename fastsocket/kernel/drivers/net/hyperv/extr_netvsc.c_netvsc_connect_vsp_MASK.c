
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ndis_major_ver; int ndis_minor_ver; } ;
struct TYPE_7__ {TYPE_2__ send_ndis_ver; } ;
struct TYPE_8__ {TYPE_3__ v1_msg; } ;
struct TYPE_5__ {int msg_type; } ;
struct nvsp_message {TYPE_4__ msg; TYPE_1__ hdr; } ;
struct netvsc_device {void* nvsp_version; struct nvsp_message channel_init_pkt; struct net_device* ndev; } ;
struct net_device {int dummy; } ;
struct hv_device {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 struct netvsc_device* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (struct nvsp_message*,int ,int) ;
 scalar_t__ FUNC_2 (struct hv_device*,struct netvsc_device*,struct nvsp_message*,void*) ;
 int FUNC_3 (struct hv_device*) ;
 int FUNC_4 (char*,void*) ;
 int FUNC_5 (int ,struct nvsp_message*,int,unsigned long,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct hv_device *VAR_6)
{
 int VAR_7;
 struct netvsc_device *VAR_8;
 struct nvsp_message *VAR_9;
 int VAR_10;
 struct net_device *VAR_11;

 VAR_8 = FUNC_0(VAR_6);
 if (!VAR_8)
  return -VAR_0;
 VAR_11 = VAR_8->ndev;

 VAR_9 = &VAR_8->channel_init_pkt;


 if (FUNC_2(VAR_6, VAR_8, VAR_9,
          VAR_4) == 0) {
  VAR_8->nvsp_version = VAR_4;
 } else if (FUNC_2(VAR_6, VAR_8, VAR_9,
        VAR_3) == 0) {
  VAR_8->nvsp_version = VAR_3;
 } else {
  VAR_7 = -VAR_1;
  goto cleanup;
 }

 FUNC_4("Negotiated NVSP version:%x\n", VAR_8->nvsp_version);


 FUNC_1(VAR_9, 0, sizeof(struct nvsp_message));

 VAR_10 = 0x00050001;

 VAR_9->hdr.msg_type = VAR_2;
 VAR_9->msg.v1_msg.
  send_ndis_ver.ndis_major_ver =
    (VAR_10 & 0xFFFF0000) >> 16;
 VAR_9->msg.v1_msg.
  send_ndis_ver.ndis_minor_ver =
    VAR_10 & 0xFFFF;


 VAR_7 = FUNC_5(VAR_6->channel, VAR_9,
    sizeof(struct nvsp_message),
    (unsigned long)VAR_9,
    VAR_5, 0);
 if (VAR_7 != 0)
  goto cleanup;


 VAR_7 = FUNC_3(VAR_6);

cleanup:
 return VAR_7;
}
