
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlp_uuid {int dummy; } ;
struct wlp_frame_assoc {int dummy; } ;
struct wlp_device_info {int name; } ;
struct wlp {TYPE_2__* rc; } ;
struct sk_buff {size_t len; void* data; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef enum wlp_wss_sel_mthd { ____Placeholder_wlp_wss_sel_mthd } wlp_wss_sel_mthd ;
typedef enum wlp_assc_error { ____Placeholder_wlp_assc_error } wlp_assc_error ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct wlp*,void*,int ,size_t) ;
 scalar_t__ FUNC_2 (struct wlp*,void*,struct wlp_uuid*,size_t) ;
 scalar_t__ FUNC_3 (struct wlp*,void*,struct wlp_device_info*,size_t) ;
 scalar_t__ FUNC_4 (struct wlp*,void*,int*,size_t) ;
 scalar_t__ FUNC_5 (struct wlp*,void*,int*,size_t) ;

__attribute__((used)) static
int FUNC_6(struct wlp *VAR_0, struct sk_buff *VAR_1,
         struct wlp_uuid *VAR_2,
         enum wlp_wss_sel_mthd *VAR_3,
         struct wlp_device_info *VAR_4,
         enum wlp_assc_error *VAR_5)
{
 struct device *VAR_6 = &VAR_0->rc->uwb_dev.dev;
 struct wlp_frame_assoc *VAR_7 = (void *) VAR_1->data;
 void *VAR_8 = VAR_1->data;
 size_t VAR_9 = VAR_1->len;
 size_t VAR_10;
 ssize_t VAR_11;

 VAR_10 = sizeof(*VAR_7);
 VAR_11 = FUNC_2(VAR_0, VAR_8 + VAR_10, VAR_2, VAR_9 - VAR_10);
 if (VAR_11 < 0) {
  FUNC_0(VAR_6, "WLP: unable to obtain UUID-E attribute from D1 "
   "message.\n");
  goto error_parse;
 }
 VAR_10 += VAR_11;
 VAR_11 = FUNC_5(VAR_0, VAR_8 + VAR_10, VAR_3, VAR_9 - VAR_10);
 if (VAR_11 < 0) {
  FUNC_0(VAR_6, "WLP: unable to obtain WSS selection method "
   "from D1 message.\n");
  goto error_parse;
 }
 VAR_10 += VAR_11;
 VAR_11 = FUNC_1(VAR_0, VAR_8 + VAR_10, VAR_4->name,
         VAR_9 - VAR_10);
 if (VAR_11 < 0) {
  FUNC_0(VAR_6, "WLP: unable to obtain Device Name from D1 "
   "message.\n");
  goto error_parse;
 }
 VAR_10 += VAR_11;
 VAR_11 = FUNC_3(VAR_0, VAR_8 + VAR_10, VAR_4, VAR_9 - VAR_10);
 if (VAR_11 < 0) {
  FUNC_0(VAR_6, "WLP: unable to obtain Device Information from "
   "D1 message.\n");
  goto error_parse;
 }
 VAR_10 += VAR_11;
 VAR_11 = FUNC_4(VAR_0, VAR_8 + VAR_10, VAR_5, VAR_9 - VAR_10);
 if (VAR_11 < 0) {
  FUNC_0(VAR_6, "WLP: unable to obtain WLP Association Error "
   "Information from D1 message.\n");
  goto error_parse;
 }
 VAR_11 = 0;
error_parse:
 return VAR_11;
}
