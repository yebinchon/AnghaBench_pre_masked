
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct htc_target {int htc_flags; struct htc_endpoint* endpoint; int cmd_wait; } ;
struct htc_frame_hdr {size_t endpoint_id; } ;
struct TYPE_2__ {int priv; int (* tx ) (int ,struct sk_buff*,size_t,int) ;} ;
struct htc_endpoint {TYPE_1__ ep_callbacks; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (int ,struct sk_buff*,size_t,int) ;

void FUNC_5(struct htc_target *VAR_3,
          struct sk_buff *VAR_4, bool VAR_5)
{
 struct htc_endpoint *VAR_6;
 struct htc_frame_hdr *VAR_7 = ((void*)0);

 if (VAR_3->htc_flags & VAR_1) {
  FUNC_0(&VAR_3->cmd_wait);
  VAR_3->htc_flags &= ~VAR_1;
  goto ret;
 }

 if (VAR_3->htc_flags & VAR_2) {
  FUNC_0(&VAR_3->cmd_wait);
  VAR_3->htc_flags &= ~VAR_2;
  goto ret;
 }

 if (VAR_4) {
  VAR_7 = (struct htc_frame_hdr *) VAR_4->data;
  VAR_6 = &VAR_3->endpoint[VAR_7->endpoint_id];
  FUNC_3(VAR_4, sizeof(struct htc_frame_hdr));

  if (VAR_6->ep_callbacks.tx) {
   VAR_6->ep_callbacks.tx(VAR_6->ep_callbacks.priv,
        VAR_4, VAR_7->endpoint_id,
        VAR_5);
  } else {
   FUNC_2(VAR_4);
  }
 }

 return;
ret:

 if (VAR_7 && VAR_7->endpoint_id != VAR_0)
  FUNC_1(VAR_4);
 else
  FUNC_2(VAR_4);
}
