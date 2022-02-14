
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wlp_wss_info {int dummy; } ;
struct wlp_wss {int dummy; } ;
struct wlp_uuid {int dummy; } ;
struct TYPE_7__ {int type; int mux_hdr; } ;
struct wlp_frame_assoc {void* attr; int msg_type; int version; int type; TYPE_3__ hdr; } ;
struct wlp_device_info {int prim_dev_type; int serial; int model_nr; int model_name; int manufacturer; int name; } ;
struct wlp_attr_wss_info {int dummy; } ;
struct wlp_attr_wlp_assc_err {int dummy; } ;
struct wlp_attr_uuid_r {int dummy; } ;
struct wlp_attr_uuid_e {int dummy; } ;
struct wlp_attr_serial {int dummy; } ;
struct wlp_attr_prim_dev_type {int dummy; } ;
struct wlp_attr_model_nr {int dummy; } ;
struct wlp_attr_model_name {int dummy; } ;
struct wlp_attr_manufacturer {int dummy; } ;
struct wlp_attr_dev_name {int dummy; } ;
struct TYPE_8__ {scalar_t__ state; int name; } ;
struct wlp {TYPE_4__ wss; int uuid; struct wlp_device_info* dev_info; TYPE_2__* rc; } ;
struct sk_buff {scalar_t__ data; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device dev; } ;
struct TYPE_6__ {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct wlp*) ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (size_t) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (void*,int ,int) ;
 scalar_t__ FUNC_7 (void*,int ,int) ;
 scalar_t__ FUNC_8 (void*,int ,int) ;
 scalar_t__ FUNC_9 (void*,int ,int) ;
 int FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (void*,int *) ;
 scalar_t__ FUNC_12 (void*,int ,int) ;
 size_t FUNC_13 (void*,struct wlp_uuid*) ;
 scalar_t__ FUNC_14 (void*,int *) ;
 int FUNC_15 (int *,int ) ;
 scalar_t__ FUNC_16 (void*,int ) ;
 scalar_t__ FUNC_17 (void*,TYPE_4__*) ;

__attribute__((used)) static
int FUNC_18(struct wlp *VAR_7, struct wlp_wss *VAR_8,
         struct sk_buff **VAR_9, struct wlp_uuid *VAR_10)
{

 struct device *VAR_11 = &VAR_7->rc->uwb_dev.dev;
 int VAR_12 = 0;
 struct wlp_device_info *VAR_13;
 size_t VAR_14 = 0;
 struct wlp_frame_assoc *VAR_15;
 struct sk_buff *VAR_16;
 void *VAR_17;
 size_t VAR_18;

 if (VAR_7->dev_info == ((void*)0)) {
  VAR_12 = FUNC_0(VAR_7);
  if (VAR_12 < 0) {
   FUNC_3(VAR_11, "WLP: Unable to setup device "
    "information for D2 message.\n");
   goto error;
  }
 }
 VAR_13 = VAR_7->dev_info;
 VAR_18 = sizeof(*VAR_15)
        + sizeof(struct wlp_attr_uuid_e)
        + sizeof(struct wlp_attr_uuid_r)
        + sizeof(struct wlp_attr_dev_name)
        + FUNC_5(VAR_13->name)
        + sizeof(struct wlp_attr_manufacturer)
        + FUNC_5(VAR_13->manufacturer)
        + sizeof(struct wlp_attr_model_name)
        + FUNC_5(VAR_13->model_name)
        + sizeof(struct wlp_attr_model_nr)
        + FUNC_5(VAR_13->model_nr)
        + sizeof(struct wlp_attr_serial)
        + FUNC_5(VAR_13->serial)
        + sizeof(struct wlp_attr_prim_dev_type)
        + sizeof(struct wlp_attr_wlp_assc_err);
 if (VAR_7->wss.state >= VAR_6)
  VAR_18 += sizeof(struct wlp_attr_wss_info)
         + sizeof(struct wlp_wss_info)
         + FUNC_5(VAR_7->wss.name);
 VAR_16 = FUNC_2(VAR_18);
 if (VAR_16 == ((void*)0)) {
  FUNC_3(VAR_11, "WLP: Cannot allocate memory for association "
   "message.\n");
  VAR_12 = -VAR_0;
  goto error;
 }
 VAR_15 = (void *) VAR_16->data;
 VAR_15->hdr.mux_hdr = FUNC_1(VAR_4);
 VAR_15->hdr.type = VAR_3;
 VAR_15->type = VAR_1;

 FUNC_15(&VAR_15->version, VAR_5);
 FUNC_10(&VAR_15->msg_type, VAR_1);
 VAR_17 = VAR_15->attr;
 VAR_14 = FUNC_13(VAR_17, VAR_10);
 VAR_14 += FUNC_14(VAR_17 + VAR_14, &VAR_7->uuid);
 if (VAR_7->wss.state >= VAR_6)
  VAR_14 += FUNC_17(VAR_17 + VAR_14, &VAR_7->wss);
 VAR_14 += FUNC_6(VAR_17 + VAR_14, VAR_13->name,
     FUNC_5(VAR_13->name));
 VAR_14 += FUNC_7(VAR_17 + VAR_14, VAR_13->manufacturer,
         FUNC_5(VAR_13->manufacturer));
 VAR_14 += FUNC_8(VAR_17 + VAR_14, VAR_13->model_name,
       FUNC_5(VAR_13->model_name));
 VAR_14 += FUNC_9(VAR_17 + VAR_14, VAR_13->model_nr,
     FUNC_5(VAR_13->model_nr));
 VAR_14 += FUNC_12(VAR_17 + VAR_14, VAR_13->serial,
          FUNC_5(VAR_13->serial));
 VAR_14 += FUNC_11(VAR_17 + VAR_14, &VAR_13->prim_dev_type);
 VAR_14 += FUNC_16(VAR_17 + VAR_14, VAR_2);
 FUNC_4(VAR_16, sizeof(*VAR_15) + VAR_14);
 *VAR_9 = VAR_16;
error:
 return VAR_12;
}
