
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union iwreq_data {int dummy; } iwreq_data ;
struct r8180_priv {int wx_sem; struct ieee80211_device* ieee80211; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct ieee80211_device {int modulation; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct r8180_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
          struct iw_request_info *VAR_3,
          union iwreq_data *VAR_4, char *VAR_5)
{
 struct r8180_priv *VAR_6 = FUNC_1(VAR_2);
 struct ieee80211_device *VAR_7;
 int VAR_8 = 0;



 FUNC_0(&VAR_6->wx_sem);

 VAR_7 = VAR_6->ieee80211;

 FUNC_3(VAR_5, "802.11");
 if(VAR_7->modulation & VAR_0) {
  FUNC_2(VAR_5, "b");
  if(VAR_7->modulation & VAR_1)
   FUNC_2(VAR_5, "/g");
 } else if(VAR_7->modulation & VAR_1)
  FUNC_2(VAR_5, "g");

 FUNC_4(&VAR_6->wx_sem);

 return VAR_8;
}
