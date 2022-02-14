
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlp_frame_std_abbrv_hdr {scalar_t__ tag; } ;
struct wlp_eda_node {scalar_t__ tag; scalar_t__ state; } ;
struct wlp {int eda; TYPE_2__* rc; } ;
struct uwb_dev_addr {int * data; } ;
struct sk_buff {scalar_t__ data; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct device*,char*,int ,int ,...) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (int *,struct uwb_dev_addr*,struct wlp_eda_node*) ;

__attribute__((used)) static
int FUNC_4(struct wlp *VAR_2, struct sk_buff *VAR_3,
        struct uwb_dev_addr *VAR_4)
{
 struct device *VAR_5 = &VAR_2->rc->uwb_dev.dev;
 int VAR_6 = -VAR_0;
 struct wlp_eda_node VAR_7;
 struct wlp_frame_std_abbrv_hdr *VAR_8 = (void *) VAR_3->data;


 VAR_6 = FUNC_3(&VAR_2->eda, VAR_4, &VAR_7);
 if (VAR_6 < 0) {
  if (FUNC_1())
   FUNC_0(VAR_5, "WLP: Incoming frame is from unknown "
    "neighbor %02x:%02x.\n", VAR_4->data[1],
    VAR_4->data[0]);
  goto out;
 }
 if (VAR_8->tag != VAR_7.tag) {
  if (FUNC_1())
   FUNC_0(VAR_5, "WLP: Tag of incoming frame from "
    "%02x:%02x does not match expected tag. "
    "Received 0x%02x, expected 0x%02x. \n",
    VAR_4->data[1], VAR_4->data[0], VAR_8->tag,
    VAR_7.tag);
  VAR_6 = -VAR_0;
  goto out;
 }
 if (VAR_7.state != VAR_1) {
  if (FUNC_1())
   FUNC_0(VAR_5, "WLP: Incoming frame from "
    "%02x:%02x does is not from connected WSS.\n",
    VAR_4->data[1], VAR_4->data[0]);
  VAR_6 = -VAR_0;
  goto out;
 }

 FUNC_2(VAR_3, sizeof(*VAR_8));
out:
 return VAR_6;
}
