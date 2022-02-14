
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_priv {int scan_check; int workqueue; int status; TYPE_1__* ops; int scan_start; int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_2__ {int (* request_scan ) (struct il_priv*,struct ieee80211_vif*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct il_priv*) ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct il_priv*,struct ieee80211_vif*) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int
FUNC_10(struct il_priv *VAR_7, struct ieee80211_vif *VAR_8)
{
 int VAR_9;

 FUNC_5(&VAR_7->mutex);

 FUNC_2(&VAR_7->scan_check);

 if (!FUNC_4(VAR_7)) {
  FUNC_1("Request scan called when driver not ready.\n");
  return -VAR_1;
 }

 if (FUNC_9(VAR_5, &VAR_7->status)) {
  FUNC_0("Multiple concurrent scan requests in parallel.\n");
  return -VAR_0;
 }

 if (FUNC_9(VAR_4, &VAR_7->status)) {
  FUNC_0("Scan request while abort pending.\n");
  return -VAR_0;
 }

 FUNC_0("Starting scan...\n");

 FUNC_7(VAR_3, &VAR_7->status);
 VAR_7->scan_start = VAR_6;

 VAR_9 = VAR_7->ops->request_scan(VAR_7, VAR_8);
 if (VAR_9) {
  FUNC_3(VAR_3, &VAR_7->status);
  return VAR_9;
 }

 FUNC_6(VAR_7->workqueue, &VAR_7->scan_check,
      VAR_2);

 return 0;
}
