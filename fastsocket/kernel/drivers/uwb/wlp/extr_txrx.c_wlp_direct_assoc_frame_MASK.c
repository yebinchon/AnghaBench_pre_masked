
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlp_frame_assoc {int type; } ;
struct uwb_dev_addr {int dummy; } ;
struct wlp_assoc_frame_ctx {int ws; struct uwb_dev_addr src; struct sk_buff* skb; struct wlp* wlp; } ;
struct wlp {TYPE_2__* rc; } ;
struct sk_buff {scalar_t__ data; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;




 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct wlp_assoc_frame_ctx*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct wlp_assoc_frame_ctx* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static
void FUNC_6(struct wlp *VAR_4, struct sk_buff *VAR_5,
      struct uwb_dev_addr *VAR_6)
{
 struct device *VAR_7 = &VAR_4->rc->uwb_dev.dev;
 struct wlp_frame_assoc *VAR_8 = (void *) VAR_5->data;
 struct wlp_assoc_frame_ctx *VAR_9;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_0);
 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_7, "WLP: Unable to allocate memory for association "
   "frame handling.\n");
  FUNC_3(VAR_5);
  return;
 }
 VAR_9->wlp = VAR_4;
 VAR_9->skb = VAR_5;
 VAR_9->src = *VAR_6;
 switch (VAR_8->type) {
 case 129:
  FUNC_0(&VAR_9->ws, VAR_3);
  FUNC_5(&VAR_9->ws);
  break;
 case 128:
  FUNC_3(VAR_5);
  FUNC_2(VAR_9);
  break;
 case 131:
  FUNC_0(&VAR_9->ws, VAR_1);
  FUNC_5(&VAR_9->ws);
  break;
 case 130:
  FUNC_0(&VAR_9->ws, VAR_2);
  FUNC_5(&VAR_9->ws);
  break;
 default:
  FUNC_1(VAR_7, "Received unexpected association frame. "
   "Type = %d \n", VAR_8->type);
  FUNC_3(VAR_5);
  FUNC_2(VAR_9);
  break;
 }
}
