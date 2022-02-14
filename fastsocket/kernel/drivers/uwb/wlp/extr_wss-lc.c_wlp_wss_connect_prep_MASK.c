
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlp_eda_node {scalar_t__ state; } ;
struct wlp_assoc_conn_ctx {int ws; struct wlp_eda_node eda_entry; struct sk_buff* skb; struct wlp* wlp; } ;
struct wlp {int (* stop_queue ) (struct wlp*) ;TYPE_2__* rc; } ;
struct sk_buff {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct device*,char*) ;
 struct wlp_assoc_conn_ctx* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct wlp*) ;
 int VAR_5 ;
 int FUNC_7 (struct wlp*,struct wlp_eda_node*,struct sk_buff*) ;

int FUNC_8(struct wlp *VAR_6, struct wlp_eda_node *VAR_7,
    void *VAR_8)
{
 int VAR_9 = 0;
 struct device *VAR_10 = &VAR_6->rc->uwb_dev.dev;
 struct sk_buff *VAR_11 = VAR_8;
 struct wlp_assoc_conn_ctx *VAR_12;

 if (VAR_7->state == VAR_4) {

  FUNC_0(VAR_6->stop_queue == ((void*)0));
  VAR_6->stop_queue(VAR_6);
  VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_2);
  if (VAR_12 == ((void*)0)) {
   if (FUNC_4())
    FUNC_2(VAR_10, "WLP: Unable to allocate memory "
     "for connection handling.\n");
   VAR_9 = -VAR_0;
   goto out;
  }
  VAR_12->wlp = VAR_6;
  VAR_12->skb = VAR_11;
  VAR_12->eda_entry = *VAR_7;
  FUNC_1(&VAR_12->ws, VAR_5);
  FUNC_5(&VAR_12->ws);
  VAR_9 = 1;
 } else if (VAR_7->state == VAR_3) {


  if (FUNC_4())
   FUNC_2(VAR_10, "Could not connect to neighbor "
    "previously. Not retrying. \n");
  VAR_9 = -VAR_1;
  goto out;
 } else
  VAR_9 = FUNC_7(VAR_6, VAR_7, VAR_11);
out:
 return VAR_9;
}
