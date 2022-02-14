
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct r8192_priv {int qos_activate; int priv_wq; TYPE_3__* ieee80211; } ;
struct ieee80211_qos_parameters {int dummy; } ;
struct TYPE_8__ {int active; int supported; scalar_t__ old_param_count; scalar_t__ param_count; } ;
struct ieee80211_network {int flags; TYPE_4__ qos_data; } ;
struct TYPE_5__ {int parameters; } ;
struct TYPE_6__ {TYPE_1__ qos_data; } ;
struct TYPE_7__ {scalar_t__ state; scalar_t__ iw_mode; TYPE_2__ current_network; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct r8192_priv *VAR_6,
  int VAR_7,
  struct ieee80211_network *VAR_8)
{
 int VAR_9 = 0;
 u32 VAR_10 = sizeof(struct ieee80211_qos_parameters);

 if(VAR_6->ieee80211->state !=VAR_1)
                return VAR_9;

        if ((VAR_6->ieee80211->iw_mode != VAR_2))
                return VAR_9;

 if (VAR_8->flags & VAR_3) {
  if (VAR_7 &&
    (VAR_8->flags & VAR_4))
   VAR_8->qos_data.active = VAR_8->qos_data.supported;

  if ((VAR_8->qos_data.active == 1) && (VAR_7 == 1) &&
    (VAR_8->flags & VAR_4) &&
    (VAR_8->qos_data.old_param_count !=
     VAR_8->qos_data.param_count)) {
   VAR_8->qos_data.old_param_count =
    VAR_8->qos_data.param_count;
   FUNC_2(VAR_6->priv_wq, &VAR_6->qos_activate);
   FUNC_0 (VAR_0, "QoS parameters change call "
     "qos_activate\n");
  }
 } else {
  FUNC_1(&VAR_6->ieee80211->current_network.qos_data.parameters, &VAR_5, VAR_10);


  if ((VAR_8->qos_data.active == 1) && (VAR_7 == 1)) {
   FUNC_2(VAR_6->priv_wq, &VAR_6->qos_activate);
   FUNC_0(VAR_0, "QoS was disabled call qos_activate \n");
  }
  VAR_8->qos_data.active = 0;
  VAR_8->qos_data.supported = 0;
 }

 return 0;
}
