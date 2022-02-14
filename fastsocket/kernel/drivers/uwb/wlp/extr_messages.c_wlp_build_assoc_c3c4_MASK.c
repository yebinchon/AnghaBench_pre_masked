
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlp_wss {int virtual_addr; int tag; int wssid; } ;
struct TYPE_6__ {int type; int mux_hdr; } ;
struct wlp_frame_assoc {int type; int msg_type; int version; TYPE_3__ hdr; } ;
struct wlp_attr_wssid {int dummy; } ;
struct wlp_attr_wss_virt {int dummy; } ;
struct wlp_attr_wss_tag {int dummy; } ;
struct wlp {TYPE_2__* rc; } ;
struct sk_buff {scalar_t__ data; } ;
struct device {int dummy; } ;
typedef enum wlp_assoc_type { ____Placeholder_wlp_assoc_type } wlp_assoc_type ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_5__ {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct wlp_attr_wss_tag*,int ) ;
 int FUNC_7 (struct wlp_attr_wss_virt*,int *) ;
 int FUNC_8 (struct wlp_attr_wssid*,int *) ;

__attribute__((used)) static
int FUNC_9(struct wlp *VAR_4, struct wlp_wss *VAR_5,
    struct sk_buff **VAR_6, enum wlp_assoc_type VAR_7)
{
 struct device *VAR_8 = &VAR_4->rc->uwb_dev.dev;
 int VAR_9 = -VAR_0;
 struct {
  struct wlp_frame_assoc c_hdr;
  struct wlp_attr_wssid wssid;
  struct wlp_attr_wss_tag wss_tag;
  struct wlp_attr_wss_virt wss_virt;
 } *VAR_10;
 struct sk_buff *VAR_11;

 VAR_11 = FUNC_1(sizeof(*VAR_10));
 if (VAR_11 == ((void*)0)) {
  FUNC_2(VAR_8, "WLP: Unable to allocate memory for C3/C4 "
   "association frame. \n");
  goto error_alloc;
 }
 VAR_10 = (void *) VAR_11->data;
 VAR_10->c_hdr.hdr.mux_hdr = FUNC_0(VAR_2);
 VAR_10->c_hdr.hdr.type = VAR_1;
 VAR_10->c_hdr.type = VAR_7;
 FUNC_5(&VAR_10->c_hdr.version, VAR_3);
 FUNC_4(&VAR_10->c_hdr.msg_type, VAR_7);
 FUNC_8(&VAR_10->wssid, &VAR_5->wssid);
 FUNC_6(&VAR_10->wss_tag, VAR_5->tag);
 FUNC_7(&VAR_10->wss_virt, &VAR_5->virtual_addr);
 FUNC_3(VAR_11, sizeof(*VAR_10));
 *VAR_6 = VAR_11;
 VAR_9 = 0;
error_alloc:
 return VAR_9;
}
