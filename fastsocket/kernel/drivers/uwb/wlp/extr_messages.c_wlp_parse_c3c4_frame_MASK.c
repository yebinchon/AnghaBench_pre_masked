
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wlp_uuid {int dummy; } ;
struct wlp_frame_assoc {int type; } ;
struct wlp {TYPE_2__* rc; } ;
struct uwb_mac_addr {int dummy; } ;
struct sk_buff {size_t len; void* data; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct wlp*,void*,int *,size_t) ;
 int FUNC_3 (struct wlp*,void*,struct uwb_mac_addr*,size_t) ;
 int FUNC_4 (struct wlp*,void*,struct wlp_uuid*,size_t) ;

int FUNC_5(struct wlp *VAR_0, struct sk_buff *VAR_1,
         struct wlp_uuid *VAR_2, u8 *VAR_3,
         struct uwb_mac_addr *VAR_4)
{
 struct device *VAR_5 = &VAR_0->rc->uwb_dev.dev;
 int VAR_6;
 void *VAR_7 = VAR_1->data;
 size_t VAR_8 = VAR_1->len;
 size_t VAR_9;
 struct wlp_frame_assoc *VAR_10 = VAR_7;

 VAR_9 = sizeof(*VAR_10);
 VAR_6 = FUNC_4(VAR_0, VAR_7 + VAR_9, VAR_2, VAR_8 - VAR_9);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5, "WLP: unable to obtain WSSID attribute from "
   "%s message.\n", FUNC_1(VAR_10->type));
  goto error_parse;
 }
 VAR_9 += VAR_6;
 VAR_6 = FUNC_2(VAR_0, VAR_7 + VAR_9, VAR_3, VAR_8 - VAR_9);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5, "WLP: unable to obtain WSS tag attribute from "
   "%s message.\n", FUNC_1(VAR_10->type));
  goto error_parse;
 }
 VAR_9 += VAR_6;
 VAR_6 = FUNC_3(VAR_0, VAR_7 + VAR_9, VAR_4, VAR_8 - VAR_9);
 if (VAR_6 < 0) {
  FUNC_0(VAR_5, "WLP: unable to obtain WSS virtual address "
   "attribute from %s message.\n",
   FUNC_1(VAR_10->type));
  goto error_parse;
 }
error_parse:
 return VAR_6;
}
