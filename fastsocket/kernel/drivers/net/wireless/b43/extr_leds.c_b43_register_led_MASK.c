
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct b43_wldev {int * wl; TYPE_1__* dev; } ;
struct TYPE_4__ {char const* default_trigger; int brightness_set; int name; } ;
struct b43_led {int activelow; int * wl; TYPE_2__ led_dev; int name; int state; int index; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_4(struct b43_wldev *VAR_3, struct b43_led *VAR_4,
       const char *VAR_5, const char *VAR_6,
       u8 VAR_7, bool VAR_8)
{
 int VAR_9;

 if (VAR_4->wl)
  return -VAR_0;
 if (!VAR_6)
  return -VAR_1;
 VAR_4->wl = VAR_3->wl;
 VAR_4->index = VAR_7;
 VAR_4->activelow = VAR_8;
 FUNC_3(VAR_4->name, VAR_5, sizeof(VAR_4->name));
 FUNC_0(&VAR_4->state, 0);

 VAR_4->led_dev.name = VAR_4->name;
 VAR_4->led_dev.default_trigger = VAR_6;
 VAR_4->led_dev.brightness_set = VAR_2;

 VAR_9 = FUNC_2(VAR_3->dev->dev, &VAR_4->led_dev);
 if (VAR_9) {
  FUNC_1(VAR_3->wl, "LEDs: Failed to register %s\n", VAR_5);
  VAR_4->wl = ((void*)0);
  return VAR_9;
 }

 return 0;
}
