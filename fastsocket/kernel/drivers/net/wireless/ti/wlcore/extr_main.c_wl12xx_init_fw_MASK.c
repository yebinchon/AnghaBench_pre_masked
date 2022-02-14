
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int fw_ver_str; int id; } ;
struct wl1271 {int state; scalar_t__ enable_11a; TYPE_3__ chip; int mutex; int netstack_work; TYPE_2__* ops; TYPE_1__* hw; } ;
struct wiphy {TYPE_4__** bands; int fw_version; int hw_version; } ;
struct TYPE_8__ {scalar_t__ n_channels; } ;
struct TYPE_6__ {int (* boot ) (struct wl1271*) ;} ;
struct TYPE_5__ {struct wiphy* wiphy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct wl1271*) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (struct wl1271*) ;
 int FUNC_8 (struct wl1271*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (struct wl1271*) ;
 int FUNC_11 (struct wl1271*,int) ;
 int FUNC_12 (struct wl1271*) ;

__attribute__((used)) static int FUNC_13(struct wl1271 *VAR_4)
{
 int VAR_5 = VAR_2;
 bool VAR_6 = 0;
 struct wiphy *VAR_7 = VAR_4->hw->wiphy;
 int VAR_8;

 while (VAR_5) {
  VAR_5--;
  VAR_8 = FUNC_11(VAR_4, 0);
  if (VAR_8 < 0)
   goto power_off;

  VAR_8 = VAR_4->ops->boot(VAR_4);
  if (VAR_8 < 0)
   goto power_off;

  VAR_8 = FUNC_8(VAR_4);
  if (VAR_8 < 0)
   goto irq_disable;

  VAR_6 = 1;
  break;

irq_disable:
  FUNC_2(&VAR_4->mutex);







  FUNC_12(VAR_4);
  FUNC_7(VAR_4);
  FUNC_0(&VAR_4->netstack_work);
  FUNC_1(&VAR_4->mutex);
power_off:
  FUNC_10(VAR_4);
 }

 if (!VAR_6) {
  FUNC_6("firmware boot failed despite %d retries",
        VAR_2);
  goto out;
 }

 FUNC_9("firmware booted (%s)", VAR_4->chip.fw_ver_str);


 VAR_7->hw_version = VAR_4->chip.id;
 FUNC_3(VAR_7->fw_version, VAR_4->chip.fw_ver_str,
  sizeof(VAR_7->fw_version));





 if (!VAR_4->enable_11a)
  VAR_7->bands[VAR_1]->n_channels = 0;

 FUNC_5(VAR_0, "11a is %ssupported",
       VAR_4->enable_11a ? "" : "not ");

 VAR_4->state = VAR_3;
out:
 return VAR_8;
}
