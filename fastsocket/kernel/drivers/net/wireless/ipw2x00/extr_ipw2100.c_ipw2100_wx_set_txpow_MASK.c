
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; scalar_t__ fixed; int value; int disabled; } ;
union iwreq_data {TYPE_2__ txpower; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int status; int action_mutex; TYPE_1__* ieee; } ;
struct TYPE_3__ {scalar_t__ iw_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ipw2100_priv*,int) ;
 scalar_t__ FUNC_2 (struct ipw2100_priv*,int ) ;
 struct ipw2100_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_10,
    struct iw_request_info *VAR_11,
    union iwreq_data *VAR_12, char *VAR_13)
{
 struct ipw2100_priv *VAR_14 = FUNC_3(VAR_10);
 int VAR_15 = 0, VAR_16;

 if (FUNC_2(VAR_14, VAR_12->txpower.disabled))
  return -VAR_0;

 if (VAR_14->ieee->iw_mode != VAR_6)
  return 0;

 if ((VAR_12->txpower.flags & VAR_8) != VAR_7)
  return -VAR_1;

 if (VAR_12->txpower.fixed == 0)
  VAR_16 = VAR_3;
 else {
  if (VAR_12->txpower.value < VAR_5 ||
      VAR_12->txpower.value > VAR_4)
   return -VAR_1;

  VAR_16 = VAR_12->txpower.value;
 }

 FUNC_4(&VAR_14->action_mutex);
 if (!(VAR_14->status & VAR_9)) {
  VAR_15 = -VAR_2;
  goto done;
 }

 VAR_15 = FUNC_1(VAR_14, VAR_16);

 FUNC_0("SET TX Power -> %d\n", VAR_16);

      done:
 FUNC_5(&VAR_14->action_mutex);
 return VAR_15;
}
