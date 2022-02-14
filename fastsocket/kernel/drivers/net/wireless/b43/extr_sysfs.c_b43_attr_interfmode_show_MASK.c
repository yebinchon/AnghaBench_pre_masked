
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_5__ {scalar_t__ type; TYPE_1__* g; } ;
struct b43_wldev {TYPE_3__* wl; TYPE_2__ phy; } ;
typedef int ssize_t ;
struct TYPE_6__ {int mutex; } ;
struct TYPE_4__ {int interfmode; } ;





 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 struct b43_wldev* FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_5,
     struct device_attribute *VAR_6,
     char *VAR_7)
{
 struct b43_wldev *VAR_8 = FUNC_2(VAR_5);
 ssize_t VAR_9 = 0;

 if (!FUNC_1(VAR_1))
  return -VAR_3;

 FUNC_3(&VAR_8->wl->mutex);

 if (VAR_8->phy.type != VAR_0) {
  FUNC_4(&VAR_8->wl->mutex);
  return -VAR_2;
 }

 switch (VAR_8->phy.g->interfmode) {
 case 129:
  VAR_9 =
      FUNC_5(VAR_7, VAR_4,
        "0 (No Interference Mitigation)\n");
  break;
 case 128:
  VAR_9 =
      FUNC_5(VAR_7, VAR_4,
        "1 (Non-WLAN Interference Mitigation)\n");
  break;
 case 130:
  VAR_9 =
      FUNC_5(VAR_7, VAR_4,
        "2 (WLAN Interference Mitigation)\n");
  break;
 default:
  FUNC_0(1);
 }

 FUNC_4(&VAR_8->wl->mutex);

 return VAR_9;
}
