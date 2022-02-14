
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wlp_wss {int wssid; } ;
struct wlp_uuid {int dummy; } ;
struct wlp {int eda; TYPE_2__* rc; } ;
struct uwb_mac_addr {scalar_t__ data; } ;
struct uwb_dev_addr {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct wlp_uuid*,int *,int) ;
 int FUNC_2 (int *,struct uwb_dev_addr*,struct wlp_wss*,void*,int ,int ) ;

__attribute__((used)) static
int FUNC_3(struct wlp *VAR_2, struct wlp_wss *VAR_3,
    struct uwb_dev_addr *VAR_4,
    struct wlp_uuid *VAR_5, u8 *VAR_6,
    struct uwb_mac_addr *VAR_7)
{
 struct device *VAR_8 = &VAR_2->rc->uwb_dev.dev;
 int VAR_9 = 0;

 if (!FUNC_1(VAR_5, &VAR_3->wssid, sizeof(*VAR_5))) {

  VAR_9 = FUNC_2(&VAR_2->eda, VAR_4, VAR_3,
          (void *) VAR_7->data, *VAR_6,
          VAR_1);
  if (VAR_9 < 0)
   FUNC_0(VAR_8, "WLP: Unable to update EDA cache "
    "with new connected neighbor information.\n");
 } else {
  FUNC_0(VAR_8, "WLP: Neighbor does not have matching WSSID.\n");
  VAR_9 = -VAR_0;
 }
 return VAR_9;
}
