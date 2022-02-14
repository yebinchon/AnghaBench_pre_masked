
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int wchar_t ;
typedef int u64 ;
typedef int u32 ;
struct vmbuspipe_hdr {int dummy; } ;
struct vmbus_channel {int * onchannel_callback; } ;
struct icmsg_hdr {int status; int icflags; } ;
struct hv_kvp_exchg_msg_value {char* key; int key_size; char* value; int value_size; int value_type; } ;
struct TYPE_10__ {struct hv_kvp_exchg_msg_value data; } ;
struct TYPE_9__ {struct hv_kvp_exchg_msg_value data; } ;
struct TYPE_11__ {TYPE_4__ kvp_enum_data; TYPE_3__ kvp_get; } ;
struct hv_kvp_msg {TYPE_5__ body; } ;
struct hv_kvp_ip_msg {int dummy; } ;
struct TYPE_12__ {int active; TYPE_2__* kvp_msg; int recv_req_id; struct vmbus_channel* recv_channel; int recv_len; } ;
struct TYPE_7__ {int operation; } ;
struct TYPE_8__ {TYPE_1__ kvp_hdr; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_6__ VAR_8 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct hv_kvp_msg*,struct hv_kvp_ip_msg*,int const) ;
 int * VAR_9 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ,int ,int *,int) ;
 int FUNC_4 (struct vmbus_channel*,int *,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct hv_kvp_msg *VAR_10, int VAR_11)
{
 struct hv_kvp_msg *VAR_12;
 struct hv_kvp_exchg_msg_value *VAR_13;
 char *VAR_14;
 char *VAR_15;
 struct icmsg_hdr *VAR_16;
 int VAR_17 = 0;
 int VAR_18 = 0;
 u32 VAR_19;
 struct vmbus_channel *VAR_20;
 u64 VAR_21;
 int VAR_22;





 if (!VAR_8.active) {



  FUNC_0("KVP: Transaction not active\n");
  return;
 }





 VAR_19 = VAR_8.recv_len;
 VAR_20 = VAR_8.recv_channel;
 VAR_21 = VAR_8.recv_req_id;

 VAR_8.active = 0;

 VAR_16 = (struct icmsg_hdr *)
   &VAR_9[sizeof(struct vmbuspipe_hdr)];

 if (VAR_20->onchannel_callback == ((void*)0))




  return;

 VAR_16->status = VAR_11;





 if (VAR_11) {




  goto response_done;
 }

 VAR_12 = (struct hv_kvp_msg *)
   &VAR_9[sizeof(struct vmbuspipe_hdr) +
   sizeof(struct icmsg_hdr)];

 switch (VAR_8.kvp_msg->kvp_hdr.operation) {
 case 130:
  VAR_22 = FUNC_1(VAR_10,
     (struct hv_kvp_ip_msg *)VAR_12,
     130);
  if (VAR_22 < 0)
   VAR_16->status = VAR_0;

  goto response_done;
 case 128:
  goto response_done;
 case 131:
  VAR_13 = &VAR_12->body.kvp_get.data;
  goto copy_value;

 case 129:
 case 132:
  goto response_done;

 default:
  break;
 }

 VAR_13 = &VAR_12->body.kvp_enum_data.data;
 VAR_14 = VAR_10->body.kvp_enum_data.data.key;







 VAR_17 = FUNC_3(VAR_14, FUNC_2(VAR_14), VAR_6,
    (wchar_t *) VAR_13->key,
    (VAR_1 / 2) - 2);
 VAR_13->key_size = 2*(VAR_17 + 1);

copy_value:
 VAR_15 = VAR_10->body.kvp_enum_data.data.value;
 VAR_18 = FUNC_3(VAR_15, FUNC_2(VAR_15), VAR_6,
    (wchar_t *) VAR_13->value,
    (VAR_2 / 2) - 2);
 VAR_13->value_size = 2*(VAR_18 + 1);





 if ((VAR_17 < 0) || (VAR_18 < 0))
  VAR_16->status = VAR_0;

 VAR_13->value_type = VAR_5;

response_done:
 VAR_16->icflags = VAR_4 | VAR_3;

 FUNC_4(VAR_20, VAR_9, VAR_19, VAR_21,
    VAR_7, 0);

}
