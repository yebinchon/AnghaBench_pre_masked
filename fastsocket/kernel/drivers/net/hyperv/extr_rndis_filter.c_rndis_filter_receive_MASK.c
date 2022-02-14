
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rndis_message {int ndis_msg_type; int msg_len; } ;
struct rndis_device {scalar_t__ state; } ;
struct netvsc_device {scalar_t__ extension; struct net_device* ndev; } ;
struct net_device {int dummy; } ;
struct hv_netvsc_packet {int status; struct rndis_message* data; } ;
struct hv_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;





 int FUNC_0 (struct hv_device*,struct rndis_message*) ;
 struct netvsc_device* FUNC_1 (struct hv_device*) ;
 int FUNC_2 (struct net_device*,char*,...) ;
 int FUNC_3 (struct rndis_device*,struct rndis_message*,struct hv_netvsc_packet*) ;
 int FUNC_4 (struct rndis_device*,struct rndis_message*) ;
 int FUNC_5 (struct rndis_device*,struct rndis_message*) ;

int FUNC_6(struct hv_device *VAR_4,
    struct hv_netvsc_packet *VAR_5)
{
 struct netvsc_device *VAR_6 = FUNC_1(VAR_4);
 struct rndis_device *VAR_7;
 struct rndis_message *VAR_8;
 struct net_device *VAR_9;
 int VAR_10 = 0;

 if (!VAR_6) {
  VAR_10 = -VAR_0;
  goto exit;
 }

 VAR_9 = VAR_6->ndev;


 if (!VAR_6->extension) {
  FUNC_2(VAR_9, "got rndis message but no rndis device - "
     "dropping this message!\n");
  VAR_10 = -VAR_1;
  goto exit;
 }

 VAR_7 = (struct rndis_device *)VAR_6->extension;
 if (VAR_7->state == VAR_3) {
  FUNC_2(VAR_9, "got rndis message but rndis device "
      "uninitialized...dropping this message!\n");
  VAR_10 = -VAR_1;
  goto exit;
 }

 VAR_8 = VAR_5->data;

 FUNC_0(VAR_4, VAR_8);

 switch (VAR_8->ndis_msg_type) {
 case 130:

  FUNC_3(VAR_7, VAR_8, VAR_5);
  break;

 case 131:
 case 129:
 case 128:

  FUNC_5(VAR_7, VAR_8);
  break;

 case 132:

  FUNC_4(VAR_7, VAR_8);
  break;
 default:
  FUNC_2(VAR_9,
   "unhandled rndis message (type %u len %u)\n",
      VAR_8->ndis_msg_type,
      VAR_8->msg_len);
  break;
 }

exit:
 if (VAR_10 != 0)
  VAR_5->status = VAR_2;

 return VAR_10;
}
