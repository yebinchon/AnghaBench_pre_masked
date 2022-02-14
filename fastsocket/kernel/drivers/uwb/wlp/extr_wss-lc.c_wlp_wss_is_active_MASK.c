
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wssid ;
struct wlp_wss {int wssid; } ;
struct wlp_uuid {int dummy; } ;
struct uwb_dev_addr {int * data; } ;
struct wlp_session {struct sk_buff* data; struct uwb_dev_addr neighbor_addr; int * cb_priv; int cb; int exp_message; } ;
struct wlp_frame_assoc {scalar_t__ type; } ;
struct wlp {int mutex; struct wlp_session* session; TYPE_2__* rc; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct wlp_uuid*,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct wlp*,void*,struct wlp_uuid*,scalar_t__) ;
 int FUNC_9 (struct wlp*,struct sk_buff*) ;
 int FUNC_10 (struct wlp*,struct wlp_wss*,struct uwb_dev_addr*,int ) ;
 int VAR_6 ;

int FUNC_11(struct wlp *VAR_7, struct wlp_wss *VAR_8,
        struct uwb_dev_addr *VAR_9)
{
 int VAR_10 = 0;
 struct device *VAR_11 = &VAR_7->rc->uwb_dev.dev;
 FUNC_1(VAR_5);
 struct wlp_session VAR_12;
 struct sk_buff *VAR_13;
 struct wlp_frame_assoc *VAR_14;
 struct wlp_uuid VAR_15;

 FUNC_5(&VAR_7->mutex);

 VAR_10 = FUNC_10(VAR_7, VAR_8, VAR_9, VAR_1);
 if (VAR_10 < 0) {
  FUNC_2(VAR_11, "Unable to send C1 frame to neighbor "
   "%02x:%02x (%d)\n", VAR_9->data[1],
   VAR_9->data[0], VAR_10);
  VAR_10 = 0;
  goto out;
 }

 VAR_12.exp_message = VAR_2;
 VAR_12.cb = VAR_6;
 VAR_12.cb_priv = &VAR_5;
 VAR_12.neighbor_addr = *VAR_9;
 FUNC_0(VAR_7->session != ((void*)0));
 VAR_7->session = &VAR_12;

 VAR_10 = FUNC_7(&VAR_5,
         VAR_4 * VAR_0);
 if (VAR_10 == 0) {
  FUNC_2(VAR_11, "Timeout while sending C1 to neighbor "
        "%02x:%02x.\n", VAR_9->data[1],
        VAR_9->data[0]);
  goto out;
 }
 if (VAR_10 < 0) {
  FUNC_2(VAR_11, "Unable to send C1 to neighbor %02x:%02x.\n",
   VAR_9->data[1], VAR_9->data[0]);
  VAR_10 = 0;
  goto out;
 }

 VAR_13 = VAR_12.data;
 VAR_14 = (void *) VAR_13->data;
 if (VAR_14->type == VAR_3) {
  VAR_10 = FUNC_9(VAR_7, VAR_13);
  if (VAR_10 < 0)
   FUNC_2(VAR_11, "WLP:  unable to parse incoming F0 "
    "frame from neighbor %02x:%02x.\n",
    VAR_9->data[1], VAR_9->data[0]);
  VAR_10 = 0;
  goto error_resp_parse;
 }

 VAR_10 = FUNC_8(VAR_7, (void *)VAR_14 + sizeof(*VAR_14), &VAR_15,
          VAR_13->len - sizeof(*VAR_14));
 if (VAR_10 < 0) {
  FUNC_2(VAR_11, "WLP: unable to obtain WSSID from C2 frame.\n");
  VAR_10 = 0;
  goto error_resp_parse;
 }
 if (!FUNC_4(&VAR_15, &VAR_8->wssid, sizeof(VAR_15)))
  VAR_10 = 1;
 else {
  FUNC_2(VAR_11, "WLP: Received a C2 frame without matching "
   "WSSID.\n");
  VAR_10 = 0;
 }
error_resp_parse:
 FUNC_3(VAR_13);
out:
 VAR_7->session = ((void*)0);
 FUNC_6(&VAR_7->mutex);
 return VAR_10;
}
