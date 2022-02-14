
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status; int lock; int tcp_socket; } ;
struct vhci_device {int speed; int devid; TYPE_2__ ud; TYPE_1__* udev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int lock; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int *) ;
 struct vhci_device* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*,...) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3, struct device_attribute *VAR_4,
      char *VAR_5)
{
 char *VAR_6 = VAR_5;
 int VAR_7 = 0;

 FUNC_0(!VAR_2 || !VAR_5);

 FUNC_3(&VAR_2->lock);
 VAR_5 += FUNC_5(VAR_5, "prt sta spd bus dev socket           "
         "local_busid\n");

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  struct vhci_device *VAR_8 = FUNC_2(VAR_7);

  FUNC_3(&VAR_8->ud.lock);

  VAR_5 += FUNC_5(VAR_5, "%03u %03u ", VAR_7, VAR_8->ud.status);

  if (VAR_8->ud.status == VAR_0) {
   VAR_5 += FUNC_5(VAR_5, "%03u %08x ",
     VAR_8->speed, VAR_8->devid);
   VAR_5 += FUNC_5(VAR_5, "%16p ", VAR_8->ud.tcp_socket);
   VAR_5 += FUNC_5(VAR_5, "%s", FUNC_1(&VAR_8->udev->dev));

  } else
   VAR_5 += FUNC_5(VAR_5, "000 000 000 0000000000000000 0-0");

  VAR_5 += FUNC_5(VAR_5, "\n");

  FUNC_4(&VAR_8->ud.lock);
 }

 FUNC_4(&VAR_2->lock);

 return VAR_5 - VAR_6;
}
