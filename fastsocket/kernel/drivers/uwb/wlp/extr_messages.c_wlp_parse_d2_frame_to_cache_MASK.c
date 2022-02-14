
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uuid_e ;
struct wlp_uuid {int dummy; } ;
struct wlp_neighbor_e {struct wlp_device_info* info; int uuid; } ;
struct wlp_frame_assoc {int dummy; } ;
struct wlp_device_info {int name; } ;
struct wlp {int uuid; TYPE_2__* rc; } ;
struct sk_buff {size_t len; void* data; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef enum wlp_assc_error { ____Placeholder_wlp_assc_error } wlp_assc_error ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct wlp_device_info* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct wlp_uuid*,int *,int) ;
 size_t FUNC_3 (struct wlp*,void*,int ,size_t) ;
 size_t FUNC_4 (struct wlp*,void*,struct wlp_uuid*,size_t) ;
 size_t FUNC_5 (struct wlp*,void*,int *,size_t) ;
 size_t FUNC_6 (struct wlp*,void*,struct wlp_device_info*,size_t) ;
 size_t FUNC_7 (struct wlp*,void*,int*,size_t) ;
 size_t FUNC_8 (struct wlp*,void*,struct wlp_neighbor_e*,size_t) ;
 int FUNC_9 (struct wlp_neighbor_e*) ;

int FUNC_10(struct wlp *VAR_4, struct sk_buff *VAR_5,
    struct wlp_neighbor_e *VAR_6)
{
 struct device *VAR_7 = &VAR_4->rc->uwb_dev.dev;
 struct wlp_frame_assoc *VAR_8 = (void *) VAR_5->data;
 void *VAR_9 = VAR_5->data;
 size_t VAR_10 = VAR_5->len;
 size_t VAR_11;
 ssize_t VAR_12;
 struct wlp_uuid VAR_13;
 struct wlp_device_info *VAR_14;
 enum wlp_assc_error VAR_15;

 VAR_11 = sizeof(*VAR_8);
 VAR_12 = FUNC_4(VAR_4, VAR_9 + VAR_11, &VAR_13, VAR_10 - VAR_11);
 if (VAR_12 < 0) {
  FUNC_0(VAR_7, "WLP: unable to obtain UUID-E attribute from D2 "
   "message.\n");
  goto error_parse;
 }
 if (FUNC_2(&VAR_13, &VAR_4->uuid, sizeof(VAR_13))) {
  FUNC_0(VAR_7, "WLP: UUID-E in incoming D2 does not match "
   "local UUID sent in D1. \n");
  goto error_parse;
 }
 VAR_11 += VAR_12;
 VAR_12 = FUNC_5(VAR_4, VAR_9 + VAR_11, &VAR_6->uuid, VAR_10 - VAR_11);
 if (VAR_12 < 0) {
  FUNC_0(VAR_7, "WLP: unable to obtain UUID-R attribute from D2 "
   "message.\n");
  goto error_parse;
 }
 VAR_11 += VAR_12;
 VAR_12 = FUNC_8(VAR_4, VAR_9 + VAR_11, VAR_6,
        VAR_10 - VAR_11);
 if (VAR_12 < 0) {
  FUNC_0(VAR_7, "WLP: unable to obtain WSS information "
   "from D2 message.\n");
  goto error_parse;
 }
 VAR_11 += VAR_12;
 VAR_6->info = FUNC_1(sizeof(struct wlp_device_info), VAR_2);
 if (VAR_6->info == ((void*)0)) {
  FUNC_0(VAR_7, "WLP: cannot allocate memory to store device "
   "info.\n");
  VAR_12 = -VAR_1;
  goto error_parse;
 }
 VAR_14 = VAR_6->info;
 VAR_12 = FUNC_3(VAR_4, VAR_9 + VAR_11, VAR_14->name,
      VAR_10 - VAR_11);
 if (VAR_12 < 0) {
  FUNC_0(VAR_7, "WLP: unable to obtain Device Name from D2 "
   "message.\n");
  goto error_parse;
 }
 VAR_11 += VAR_12;
 VAR_12 = FUNC_6(VAR_4, VAR_9 + VAR_11, VAR_14, VAR_10 - VAR_11);
 if (VAR_12 < 0) {
  FUNC_0(VAR_7, "WLP: unable to obtain Device Information from "
   "D2 message.\n");
  goto error_parse;
 }
 VAR_11 += VAR_12;
 VAR_12 = FUNC_7(VAR_4, VAR_9 + VAR_11, &VAR_15, VAR_10 - VAR_11);
 if (VAR_12 < 0) {
  FUNC_0(VAR_7, "WLP: unable to obtain WLP Association Error "
   "Information from D2 message.\n");
  goto error_parse;
 }
 if (VAR_15 != VAR_3) {
  FUNC_0(VAR_7, "WLP: neighbor device returned association "
   "error %d\n", VAR_15);
  VAR_12 = -VAR_0;
  goto error_parse;
 }
 VAR_12 = 0;
error_parse:
 if (VAR_12 < 0)
  FUNC_9(VAR_6);
 return VAR_12;
}
