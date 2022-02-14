
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlp_nonce {int dummy; } ;
struct wlp_frame_assoc {int dummy; } ;
struct wlp {TYPE_2__* rc; } ;
struct sk_buff {size_t len; void* data; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int rnonce_buf ;
typedef enum wlp_assc_error { ____Placeholder_wlp_assc_error } wlp_assc_error ;
typedef int enonce_buf ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct wlp*,void*,struct wlp_nonce*,size_t) ;
 scalar_t__ FUNC_3 (struct wlp*,void*,struct wlp_nonce*,size_t) ;
 scalar_t__ FUNC_4 (struct wlp*,void*,int*,size_t) ;
 int FUNC_5 (char*,int,struct wlp_nonce*) ;

int FUNC_6(struct wlp *VAR_1, struct sk_buff *VAR_2)
{
 struct device *VAR_3 = &VAR_1->rc->uwb_dev.dev;
 struct wlp_frame_assoc *VAR_4 = (void *) VAR_2->data;
 void *VAR_5 = VAR_2->data;
 size_t VAR_6 = VAR_2->len;
 size_t VAR_7;
 ssize_t VAR_8;
 struct wlp_nonce VAR_9, VAR_10;
 enum wlp_assc_error VAR_11;
 char VAR_12[VAR_0];
 char VAR_13[VAR_0];

 VAR_7 = sizeof(*VAR_4);
 VAR_8 = FUNC_2(VAR_1, VAR_5 + VAR_7, &VAR_9, VAR_6 - VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(VAR_3, "WLP: unable to obtain Enrollee nonce "
   "attribute from F0 message.\n");
  goto error_parse;
 }
 VAR_7 += VAR_8;
 VAR_8 = FUNC_3(VAR_1, VAR_5 + VAR_7, &VAR_10, VAR_6 - VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(VAR_3, "WLP: unable to obtain Registrar nonce "
   "attribute from F0 message.\n");
  goto error_parse;
 }
 VAR_7 += VAR_8;
 VAR_8 = FUNC_4(VAR_1, VAR_5 + VAR_7, &VAR_11, VAR_6 - VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(VAR_3, "WLP: unable to obtain WLP Association error "
   "attribute from F0 message.\n");
  goto error_parse;
 }
 FUNC_5(VAR_12, sizeof(VAR_12), &VAR_9);
 FUNC_5(VAR_13, sizeof(VAR_13), &VAR_10);
 FUNC_0(VAR_3, "WLP: Received F0 error frame from neighbor. Enrollee "
  "nonce: %s, Registrar nonce: %s, WLP Association error: %s.\n",
  VAR_12, VAR_13, FUNC_1(VAR_11));
 VAR_8 = 0;
error_parse:
 return VAR_8;
}
