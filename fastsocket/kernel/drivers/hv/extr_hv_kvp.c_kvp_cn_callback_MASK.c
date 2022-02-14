
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netlink_skb_parms {int dummy; } ;
struct TYPE_3__ {int * key; } ;
struct hv_kvp_msg_enumerate {TYPE_1__ data; } ;
struct TYPE_4__ {struct hv_kvp_msg_enumerate kvp_enum_data; } ;
struct hv_kvp_msg {int error; TYPE_2__ body; } ;
struct cn_msg {scalar_t__ data; } ;


 int VAR_0 ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct hv_kvp_msg*) ;
 int FUNC_2 (struct hv_kvp_msg*,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(struct cn_msg *VAR_4, struct netlink_skb_parms *VAR_5)
{
 struct hv_kvp_msg *VAR_6;
 struct hv_kvp_msg_enumerate *VAR_7;
 int VAR_8 = 0;

 VAR_6 = (struct hv_kvp_msg *)VAR_4->data;






 if (VAR_2) {
  if (FUNC_1(VAR_6))
   VAR_2 = 0;
  return;
 }






 VAR_7 = &VAR_6->body.kvp_enum_data;

 switch (VAR_1) {
 case 129:



  if (VAR_7->data.key[0] == 0)
   VAR_8 = VAR_0;
  break;

 case 128:




  VAR_8 = VAR_6->error;
  break;
 }





 if (FUNC_0(&VAR_3))
  FUNC_2(VAR_6, VAR_8);
}
