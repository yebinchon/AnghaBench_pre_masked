
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wchar_t ;
struct work_struct {int dummy; } ;
struct TYPE_14__ {int index; } ;
struct TYPE_13__ {scalar_t__ key; int key_size; } ;
struct TYPE_11__ {int value_u32; int value_u64; scalar_t__ key; int key_size; scalar_t__ value; int value_size; int value_type; } ;
struct TYPE_12__ {TYPE_3__ data; } ;
struct TYPE_15__ {TYPE_6__ kvp_enum_data; TYPE_5__ kvp_delete; TYPE_4__ kvp_set; } ;
struct TYPE_10__ {int operation; void* pool; } ;
struct hv_kvp_msg {TYPE_7__ body; TYPE_2__ kvp_hdr; } ;
struct TYPE_9__ {int val; int idx; } ;
struct cn_msg {int len; scalar_t__ data; TYPE_1__ id; } ;
typedef void* __u8 ;
typedef int __u64 ;
typedef int __u32 ;
struct TYPE_16__ {struct hv_kvp_msg* kvp_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cn_msg*,int ,int ) ;
 int FUNC_1 (struct cn_msg*) ;
 TYPE_8__ VAR_6 ;
 struct cn_msg* FUNC_2 (int,int ) ;
 int FUNC_3 (struct hv_kvp_msg*,struct hv_kvp_msg*,int const) ;
 int FUNC_4 (scalar_t__,char*,int) ;
 int FUNC_5 (int *,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_6(struct work_struct *VAR_7)
{
 struct cn_msg *VAR_8;
 struct hv_kvp_msg *VAR_9;
 struct hv_kvp_msg *VAR_10;
 __u8 VAR_11 = VAR_6.kvp_msg->kvp_hdr.operation;
 __u8 VAR_12 = VAR_6.kvp_msg->kvp_hdr.pool;
 __u32 VAR_13;
 __u64 VAR_14;

 VAR_8 = FUNC_2(sizeof(*VAR_8) + sizeof(struct hv_kvp_msg) , VAR_2);
 if (!VAR_8)
  return;

 VAR_8->id.idx = VAR_0;
 VAR_8->id.val = VAR_1;

 VAR_9 = (struct hv_kvp_msg *)VAR_8->data;
 VAR_9->kvp_hdr.operation = VAR_11;
 VAR_9->kvp_hdr.pool = VAR_12;
 VAR_10 = VAR_6.kvp_msg;
 switch (VAR_9->kvp_hdr.operation) {
 case 131:
  FUNC_3(VAR_10, VAR_9, 131);
  break;
 case 133:
  FUNC_3(VAR_10, VAR_9, 133);
  break;
 case 132:
  switch (VAR_10->body.kvp_set.data.value_type) {
  case 130:



   VAR_9->body.kvp_set.data.value_size =
    FUNC_5(
    (wchar_t *)VAR_10->body.kvp_set.data.value,
    VAR_10->body.kvp_set.data.value_size,
    VAR_5,
    VAR_9->body.kvp_set.data.value,
    VAR_4 - 1) + 1;
    break;

  case 129:




   VAR_13 = VAR_10->body.kvp_set.data.value_u32;
   VAR_9->body.kvp_set.data.value_size =
    FUNC_4(VAR_9->body.kvp_set.data.value,
     "%d", VAR_13) + 1;
   break;

  case 128:




   VAR_14 = VAR_10->body.kvp_set.data.value_u64;
   VAR_9->body.kvp_set.data.value_size =
    FUNC_4(VAR_9->body.kvp_set.data.value,
     "%llu", VAR_14) + 1;
   break;

  }
 case 134:
  VAR_9->body.kvp_set.data.key_size =
   FUNC_5(
   (wchar_t *)VAR_10->body.kvp_set.data.key,
   VAR_10->body.kvp_set.data.key_size,
   VAR_5,
   VAR_9->body.kvp_set.data.key,
   VAR_3 - 1) + 1;
   break;

 case 136:
  VAR_9->body.kvp_delete.key_size =
   FUNC_5(
   (wchar_t *)VAR_10->body.kvp_delete.key,
   VAR_10->body.kvp_delete.key_size,
   VAR_5,
   VAR_9->body.kvp_delete.key,
   VAR_3 - 1) + 1;
   break;

 case 135:
  VAR_9->body.kvp_enum_data.index =
   VAR_10->body.kvp_enum_data.index;
   break;
 }

 VAR_8->len = sizeof(struct hv_kvp_msg);
 FUNC_0(VAR_8, 0, VAR_2);
 FUNC_1(VAR_8);

 return;
}
