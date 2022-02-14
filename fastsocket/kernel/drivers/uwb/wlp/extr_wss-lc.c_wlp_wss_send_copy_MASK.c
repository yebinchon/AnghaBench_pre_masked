
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uwb_dev_addr {int dummy; } ;
struct wlp_eda_node {struct uwb_dev_addr dev_addr; } ;
struct wlp {int (* xmit_frame ) (struct wlp*,struct sk_buff*,struct uwb_dev_addr*) ;TYPE_2__* rc; } ;
struct sk_buff {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 () ;
 struct sk_buff* FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct wlp*,struct sk_buff*,struct uwb_dev_addr*) ;
 int FUNC_6 (struct wlp*,struct wlp_eda_node*,struct sk_buff*) ;

int FUNC_7(struct wlp *VAR_3, struct wlp_eda_node *VAR_4,
        void *VAR_5)
{
 int VAR_6 = -VAR_0;
 struct device *VAR_7 = &VAR_3->rc->uwb_dev.dev;
 struct sk_buff *VAR_8 = VAR_5;
 struct sk_buff *VAR_9;
 struct uwb_dev_addr *VAR_10 = &VAR_4->dev_addr;

 VAR_9 = FUNC_4(VAR_8, VAR_2);
 if (VAR_9 == ((void*)0)) {
  if (FUNC_3())
   FUNC_1(VAR_7, "WLP: Unable to copy skb for "
    "transmission.\n");
  goto out;
 }
 VAR_6 = FUNC_6(VAR_3, VAR_4, VAR_9);
 if (VAR_6 < 0) {
  if (FUNC_3())
   FUNC_1(VAR_7, "WLP: Unable to connect/send skb "
    "to neighbor.\n");
  FUNC_2(VAR_9);
  goto out;
 } else if (VAR_6 == 1)

  goto out;
 FUNC_0(VAR_3->xmit_frame == ((void*)0));
 VAR_6 = VAR_3->xmit_frame(VAR_3, VAR_9, VAR_10);
 if (VAR_6 < 0) {
  if (FUNC_3())
   FUNC_1(VAR_7, "WLP: Unable to transmit frame: %d\n",
    VAR_6);
  if ((VAR_6 == -VAR_1) && FUNC_3())
   FUNC_1(VAR_7, "WLP: Is network interface up? \n");

  FUNC_2(VAR_9);
 }
out:
 return VAR_6;
}
