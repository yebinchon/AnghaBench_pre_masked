
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ data; } ;
struct htc_target {struct htc_endpoint* endpoint; } ;
struct htc_frame_hdr {int endpoint_id; int flags; scalar_t__* control; } ;
struct TYPE_2__ {int priv; int (* rx ) (int ,struct sk_buff*,int) ;} ;
struct htc_endpoint {TYPE_1__ ep_callbacks; } ;
typedef enum htc_endpoint_id { ____Placeholder_htc_endpoint_id } htc_endpoint_id ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct htc_target*,struct htc_frame_hdr*) ;
 int FUNC_4 (struct htc_target*,struct htc_frame_hdr*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (int ,struct sk_buff*,int) ;

void FUNC_9(struct htc_target *VAR_4,
        struct sk_buff *VAR_5, u32 VAR_6, u8 VAR_7)
{
 struct htc_frame_hdr *VAR_8;
 enum htc_endpoint_id VAR_9;
 struct htc_endpoint *VAR_10;
 __be16 *VAR_11;

 if (!VAR_4 || !VAR_5)
  return;

 VAR_8 = (struct htc_frame_hdr *) VAR_5->data;
 VAR_9 = VAR_8->endpoint_id;

 if (VAR_9 >= VAR_1) {
  if (VAR_7 != VAR_3)
   FUNC_2(VAR_5);
  else
   FUNC_5(VAR_5);
  return;
 }

 if (VAR_9 == VAR_0) {


  if (VAR_8->flags & VAR_2) {
   if (FUNC_1(*(__be32 *) VAR_5->data) == 0x00C60000)

    VAR_8 = (struct htc_frame_hdr *)(VAR_5->data + 4);
  }


  VAR_11 = (__be16 *) ((void *) VAR_8 +
         sizeof(struct htc_frame_hdr));


  switch (FUNC_0(*VAR_11)) {
  case 128:
   FUNC_4(VAR_4, VAR_8);
   break;
  case 129:
   FUNC_3(VAR_4, VAR_8);
   break;
  default:
   break;
  }

  FUNC_5(VAR_5);

 } else {
  if (VAR_8->flags & VAR_2)
   FUNC_7(VAR_5, VAR_6 - VAR_8->control[0]);

  FUNC_6(VAR_5, sizeof(struct htc_frame_hdr));

  VAR_10 = &VAR_4->endpoint[VAR_9];
  if (VAR_10->ep_callbacks.rx)
   VAR_10->ep_callbacks.rx(VAR_10->ep_callbacks.priv,
        VAR_5, VAR_9);
 }
}
