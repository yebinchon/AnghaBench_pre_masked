
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wlp_wss {int dummy; } ;
struct wlp {TYPE_2__* rc; } ;
struct uwb_dev_addr {int dummy; } ;
struct device {int dummy; } ;
typedef enum wlp_assoc_type { ____Placeholder_wlp_assoc_type } wlp_assoc_type ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;



 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct wlp*,struct wlp_wss*,struct uwb_dev_addr*) ;
 int FUNC_2 (struct wlp*,struct wlp_wss*,struct uwb_dev_addr*) ;
 int FUNC_3 (struct wlp*,struct wlp_wss*,struct uwb_dev_addr*) ;

int FUNC_4(struct wlp *VAR_1, struct wlp_wss *VAR_2,
    struct uwb_dev_addr *VAR_3,
    enum wlp_assoc_type VAR_4)
{
 int VAR_5 = 0;
 struct device *VAR_6 = &VAR_1->rc->uwb_dev.dev;
 switch (VAR_4) {
 case 128:
  VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3);
  break;
 case 130:
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
  break;
 case 129:
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
  break;
 default:
  FUNC_0(VAR_6, "WLP: Received request to send unknown "
   "association message.\n");
  VAR_5 = -VAR_0;
  break;
 }
 return VAR_5;
}
