
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlp_wss {int dummy; } ;
struct TYPE_6__ {int type; int mux_hdr; } ;
struct wlp_frame_assoc {void* attr; int msg_type; int version; int type; TYPE_3__ hdr; } ;
struct wlp_device_info {int prim_dev_type; int serial; int model_nr; int model_name; int manufacturer; int name; } ;
struct wlp_attr_wss_sel_mthd {int dummy; } ;
struct wlp_attr_wlp_assc_err {int dummy; } ;
struct wlp_attr_uuid_e {int dummy; } ;
struct wlp_attr_serial {int dummy; } ;
struct wlp_attr_prim_dev_type {int dummy; } ;
struct wlp_attr_model_nr {int dummy; } ;
struct wlp_attr_model_name {int dummy; } ;
struct wlp_attr_manufacturer {int dummy; } ;
struct wlp_attr_dev_name {int dummy; } ;
struct wlp {int uuid; struct wlp_device_info* dev_info; TYPE_2__* rc; } ;
struct sk_buff {scalar_t__ data; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_5__ {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct wlp*) ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (void*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (void*,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (void*,int ,scalar_t__) ;
 scalar_t__ FUNC_9 (void*,int ,scalar_t__) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (void*,int *) ;
 scalar_t__ FUNC_12 (void*,int ,scalar_t__) ;
 size_t FUNC_13 (void*,int *) ;
 int FUNC_14 (int *,int ) ;
 scalar_t__ FUNC_15 (void*,int ) ;
 scalar_t__ FUNC_16 (void*,int ) ;

__attribute__((used)) static int FUNC_17(struct wlp *VAR_7, struct wlp_wss *VAR_8,
         struct sk_buff **VAR_9)
{

 struct device *VAR_10 = &VAR_7->rc->uwb_dev.dev;
 int VAR_11 = 0;
 struct wlp_device_info *VAR_12;
 size_t VAR_13 = 0;
 struct wlp_frame_assoc *VAR_14;
 struct sk_buff *VAR_15;
 void *VAR_16;

 if (VAR_7->dev_info == ((void*)0)) {
  VAR_11 = FUNC_0(VAR_7);
  if (VAR_11 < 0) {
   FUNC_3(VAR_10, "WLP: Unable to setup device "
    "information for D1 message.\n");
   goto error;
  }
 }
 VAR_12 = VAR_7->dev_info;
 VAR_15 = FUNC_2(sizeof(*VAR_14)
        + sizeof(struct wlp_attr_uuid_e)
        + sizeof(struct wlp_attr_wss_sel_mthd)
        + sizeof(struct wlp_attr_dev_name)
        + FUNC_5(VAR_12->name)
        + sizeof(struct wlp_attr_manufacturer)
        + FUNC_5(VAR_12->manufacturer)
        + sizeof(struct wlp_attr_model_name)
        + FUNC_5(VAR_12->model_name)
        + sizeof(struct wlp_attr_model_nr)
        + FUNC_5(VAR_12->model_nr)
        + sizeof(struct wlp_attr_serial)
        + FUNC_5(VAR_12->serial)
        + sizeof(struct wlp_attr_prim_dev_type)
        + sizeof(struct wlp_attr_wlp_assc_err));
 if (VAR_15 == ((void*)0)) {
  FUNC_3(VAR_10, "WLP: Cannot allocate memory for association "
   "message.\n");
  VAR_11 = -VAR_0;
  goto error;
 }
 VAR_14 = (void *) VAR_15->data;
 VAR_14->hdr.mux_hdr = FUNC_1(VAR_4);
 VAR_14->hdr.type = VAR_3;
 VAR_14->type = VAR_1;

 FUNC_14(&VAR_14->version, VAR_5);
 FUNC_10(&VAR_14->msg_type, VAR_1);
 VAR_16 = VAR_14->attr;
 VAR_13 = FUNC_13(VAR_16, &VAR_7->uuid);
 VAR_13 += FUNC_16(VAR_16 + VAR_13, VAR_6);
 VAR_13 += FUNC_6(VAR_16 + VAR_13, VAR_12->name,
     FUNC_5(VAR_12->name));
 VAR_13 += FUNC_7(VAR_16 + VAR_13, VAR_12->manufacturer,
         FUNC_5(VAR_12->manufacturer));
 VAR_13 += FUNC_8(VAR_16 + VAR_13, VAR_12->model_name,
       FUNC_5(VAR_12->model_name));
 VAR_13 += FUNC_9(VAR_16 + VAR_13, VAR_12->model_nr,
     FUNC_5(VAR_12->model_nr));
 VAR_13 += FUNC_12(VAR_16 + VAR_13, VAR_12->serial,
          FUNC_5(VAR_12->serial));
 VAR_13 += FUNC_11(VAR_16 + VAR_13, &VAR_12->prim_dev_type);
 VAR_13 += FUNC_15(VAR_16 + VAR_13, VAR_2);
 FUNC_4(VAR_15, sizeof(*VAR_14) + VAR_13);
 *VAR_9 = VAR_15;
error:
 return VAR_11;
}
