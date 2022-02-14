
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_priv {scalar_t__ tx_power_user_lmt; scalar_t__ tx_power_device_lmt; scalar_t__ tx_power_next; TYPE_1__* ops; int staging; int active; int status; int mutex; } ;
typedef scalar_t__ s8 ;
struct TYPE_2__ {int (* send_tx_power ) (struct il_priv*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,scalar_t__,...) ;
 int VAR_3 ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct il_priv*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

int
FUNC_7(struct il_priv *VAR_4, s8 VAR_5, bool VAR_6)
{
 int VAR_7;
 s8 VAR_8;
 bool VAR_9;

 FUNC_3(&VAR_4->mutex);

 if (VAR_4->tx_power_user_lmt == VAR_5 && !VAR_6)
  return 0;

 if (!VAR_4->ops->send_tx_power)
  return -VAR_2;


 if (VAR_5 < 0) {
  FUNC_1("Requested user TXPOWER %d below 1 mW.\n", VAR_5);
  return -VAR_0;
 }

 if (VAR_5 > VAR_4->tx_power_device_lmt) {
  FUNC_1("Requested user TXPOWER %d above upper limit %d.\n",
   VAR_5, VAR_4->tx_power_device_lmt);
  return -VAR_0;
 }

 if (!FUNC_2(VAR_4))
  return -VAR_1;



 VAR_4->tx_power_next = VAR_5;


 VAR_9 = FUNC_6(VAR_3, &VAR_4->status) ||
     FUNC_4(&VAR_4->active, &VAR_4->staging, sizeof(VAR_4->staging));
 if (VAR_9 && !VAR_6) {
  FUNC_0("Deferring tx power set\n");
  return 0;
 }

 VAR_8 = VAR_4->tx_power_user_lmt;
 VAR_4->tx_power_user_lmt = VAR_5;

 VAR_7 = VAR_4->ops->send_tx_power(VAR_4);


 if (VAR_7) {
  VAR_4->tx_power_user_lmt = VAR_8;
  VAR_4->tx_power_next = VAR_8;
 }
 return VAR_7;
}
