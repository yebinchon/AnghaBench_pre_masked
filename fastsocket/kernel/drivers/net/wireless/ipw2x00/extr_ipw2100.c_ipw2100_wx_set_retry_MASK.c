
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int value; scalar_t__ disabled; } ;
union iwreq_data {TYPE_1__ retry; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ipw2100_priv {int status; int action_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ipw2100_priv*,int ) ;
 int FUNC_2 (struct ipw2100_priv*,int ) ;
 struct ipw2100_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_7,
    struct iw_request_info *VAR_8,
    union iwreq_data *VAR_9, char *VAR_10)
{
 struct ipw2100_priv *VAR_11 = FUNC_3(VAR_7);
 int VAR_12 = 0;

 if (VAR_9->retry.flags & VAR_2 || VAR_9->retry.disabled)
  return -VAR_0;

 if (!(VAR_9->retry.flags & VAR_3))
  return 0;

 FUNC_4(&VAR_11->action_mutex);
 if (!(VAR_11->status & VAR_6)) {
  VAR_12 = -VAR_1;
  goto done;
 }

 if (VAR_9->retry.flags & VAR_5) {
  VAR_12 = FUNC_2(VAR_11, VAR_9->retry.value);
  FUNC_0("SET Short Retry Limit -> %d\n",
        VAR_9->retry.value);
  goto done;
 }

 if (VAR_9->retry.flags & VAR_4) {
  VAR_12 = FUNC_1(VAR_11, VAR_9->retry.value);
  FUNC_0("SET Long Retry Limit -> %d\n",
        VAR_9->retry.value);
  goto done;
 }

 VAR_12 = FUNC_2(VAR_11, VAR_9->retry.value);
 if (!VAR_12)
  VAR_12 = FUNC_1(VAR_11, VAR_9->retry.value);

 FUNC_0("SET Both Retry Limits -> %d\n", VAR_9->retry.value);

      done:
 FUNC_5(&VAR_11->action_mutex);
 return VAR_12;
}
