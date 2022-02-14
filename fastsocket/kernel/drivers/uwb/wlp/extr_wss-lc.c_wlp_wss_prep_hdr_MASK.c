
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int type; int mux_hdr; } ;
struct wlp_frame_std_abbrv_hdr {int tag; TYPE_3__ hdr; } ;
struct uwb_dev_addr {int * data; } ;
struct wlp_eda_node {unsigned char* eth_addr; scalar_t__ state; TYPE_4__* wss; struct uwb_dev_addr dev_addr; } ;
struct wlp {TYPE_2__* rc; } ;
struct sk_buff {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int tag; } ;
struct TYPE_5__ {struct device dev; } ;
struct TYPE_6__ {TYPE_1__ uwb_dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,int ,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct sk_buff*) ;

int FUNC_6(struct wlp *VAR_4, struct wlp_eda_node *VAR_5,
       void *VAR_6)
{
 struct device *VAR_7 = &VAR_4->rc->uwb_dev.dev;
 int VAR_8 = 0;
 unsigned char *VAR_9 = VAR_5->eth_addr;
 struct uwb_dev_addr *VAR_10 = &VAR_5->dev_addr;
 struct sk_buff *VAR_11 = VAR_6;
 struct wlp_frame_std_abbrv_hdr *VAR_12;

 if (VAR_5->state == VAR_3) {

  FUNC_0(FUNC_5(VAR_11) < sizeof(*VAR_12));
  VAR_12 = (void *) FUNC_1(VAR_11, sizeof(*VAR_12));
  VAR_12->hdr.mux_hdr = FUNC_2(VAR_2);
  VAR_12->hdr.type = VAR_1;
  VAR_12->tag = VAR_5->wss->tag;
 } else {
  if (FUNC_4())
   FUNC_3(VAR_7, "WLP: Destination neighbor (Ethernet: "
    "%02x:%02x:%02x:%02x:%02x:%02x, Dev: "
    "%02x:%02x) is not connected. \n", VAR_9[0],
    VAR_9[1], VAR_9[2], VAR_9[3],
    VAR_9[4], VAR_9[5], VAR_10->data[1],
    VAR_10->data[0]);
  VAR_8 = -VAR_0;
 }
 return VAR_8;
}
