
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wlp_wss {scalar_t__ state; scalar_t__ secure_status; } ;
struct wlp_uuid {int dummy; } ;
struct wlp_neighbor_e {TYPE_3__* uwb_dev; } ;
struct wlp {TYPE_2__* rc; } ;
struct uwb_dev_addr {int * data; } ;
struct device {int dummy; } ;
typedef int buf ;
struct TYPE_6__ {struct uwb_dev_addr dev_addr; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_5__ {TYPE_1__ uwb_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,char*,int ,int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct wlp*,struct wlp_neighbor_e*,struct wlp_wss*,struct wlp_uuid*) ;
 int FUNC_3 (struct wlp_wss*) ;
 int FUNC_4 (char*,int,struct wlp_uuid*) ;

int FUNC_5(struct wlp *VAR_5, struct wlp_neighbor_e *VAR_6,
   struct wlp_wss *VAR_7, struct wlp_uuid *VAR_8)
{
 int VAR_9 = 0;
 struct device *VAR_10 = &VAR_5->rc->uwb_dev.dev;
 char VAR_11[VAR_4];
 struct uwb_dev_addr *VAR_12 = &VAR_6->uwb_dev->dev_addr;

 FUNC_4(VAR_11, sizeof(VAR_11), VAR_8);

 VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_9 < 0) {
  FUNC_1(VAR_10, "WLP: D1/D2 message exchange for enrollment "
   "failed. result = %d \n", VAR_9);
  goto out;
 }
 if (VAR_7->state != VAR_3) {
  FUNC_1(VAR_10, "WLP: Unable to enroll into WSS %s using "
   "neighbor %02x:%02x. \n", VAR_11,
   VAR_12->data[1], VAR_12->data[0]);
  VAR_9 = -VAR_0;
  goto out;
 }
 if (VAR_7->secure_status == VAR_1) {
  FUNC_1(VAR_10, "FIXME: need to complete secure enrollment.\n");
  VAR_9 = -VAR_0;
  goto error;
 } else {
  VAR_7->state = VAR_2;
  FUNC_0(VAR_10, "WLP: Success Enrollment into unsecure WSS "
   "%s using neighbor %02x:%02x. \n",
   VAR_11, VAR_12->data[1], VAR_12->data[0]);
 }
out:
 return VAR_9;
error:
 FUNC_3(VAR_7);
 return VAR_9;
}
