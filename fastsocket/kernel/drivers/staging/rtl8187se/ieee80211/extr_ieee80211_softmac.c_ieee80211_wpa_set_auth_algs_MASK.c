
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_security {int auth_mode; int flags; } ;
struct ieee80211_device {int open_wep; int dev; int (* set_security ) (int ,struct ieee80211_security*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct ieee80211_security*) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_device *VAR_5, int VAR_6)
{

 struct ieee80211_security VAR_7 = {
  .flags = VAR_2,
 };
 int VAR_8 = 0;

 if (VAR_6 & VAR_0) {
  VAR_7.auth_mode = VAR_4;
  VAR_5->open_wep = 0;
 } else {
  VAR_7.auth_mode = VAR_3;
  VAR_5->open_wep = 1;
 }

 if (VAR_5->set_security)
  VAR_5->set_security(VAR_5->dev, &VAR_7);
 else
  VAR_8 = -VAR_1;

 return VAR_8;
}
