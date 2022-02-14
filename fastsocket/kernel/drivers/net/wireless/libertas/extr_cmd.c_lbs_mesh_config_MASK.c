
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct mrvl_meshie_val {int dummy; } ;
struct TYPE_2__ {int* oui; int mesh_id; scalar_t__ mesh_id_len; int mesh_capability; int active_metric_id; int active_protocol_id; int version; int subtype; int type; } ;
struct mrvl_meshie {scalar_t__ len; TYPE_1__ val; int id; } ;
struct lbs_private {int mesh_tlv; scalar_t__ mesh_ssid_len; int mesh_ssid; } ;
struct cmd_ds_mesh_config {void* length; scalar_t__ data; void* channel; } ;
typedef int cmd ;




 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct lbs_private*,struct cmd_ds_mesh_config*,int,int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (char*,int,int ,int,int ) ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (struct cmd_ds_mesh_config*,int ,int) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int VAR_8 ;

int FUNC_7(struct lbs_private *VAR_9, uint16_t VAR_10, uint16_t VAR_11)
{
 struct cmd_ds_mesh_config VAR_12;
 struct mrvl_meshie *VAR_13;
 FUNC_0(VAR_8);

 FUNC_5(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.channel = FUNC_2(VAR_11);
 VAR_13 = (struct mrvl_meshie *)VAR_12.data;

 switch (VAR_10) {
 case 129:
  VAR_13->id = VAR_7;
  VAR_13->val.oui[0] = 0x00;
  VAR_13->val.oui[1] = 0x50;
  VAR_13->val.oui[2] = 0x43;
  VAR_13->val.type = VAR_3;
  VAR_13->val.subtype = VAR_2;
  VAR_13->val.version = VAR_4;
  VAR_13->val.active_protocol_id = VAR_6;
  VAR_13->val.active_metric_id = VAR_5;
  VAR_13->val.mesh_capability = VAR_1;
  VAR_13->val.mesh_id_len = VAR_9->mesh_ssid_len;
  FUNC_4(VAR_13->val.mesh_id, VAR_9->mesh_ssid, VAR_9->mesh_ssid_len);
  VAR_13->len = sizeof(struct mrvl_meshie_val) -
   VAR_0 + VAR_9->mesh_ssid_len;
  VAR_12.length = FUNC_2(sizeof(struct mrvl_meshie_val));
  break;
 case 128:
  break;
 default:
  return -1;
 }
 FUNC_3("mesh config action %d type %x channel %d SSID %s\n",
      VAR_10, VAR_9->mesh_tlv, VAR_11,
      FUNC_6(VAR_8, VAR_9->mesh_ssid, VAR_9->mesh_ssid_len));

 return FUNC_1(VAR_9, &VAR_12, VAR_10, VAR_9->mesh_tlv);
}
