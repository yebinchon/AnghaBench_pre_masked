
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_security {int auth_mode; int flags; } ;
struct ieee80211_device {int open_wep; int auth_mode; int dev; int (* set_security ) (int ,struct ieee80211_security*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,struct ieee80211_security*) ;

__attribute__((used)) static int FUNC_1(struct ieee80211_device *VAR_7, int VAR_8)
{

 struct ieee80211_security VAR_9 = {
  .flags = VAR_3,
 };
 int VAR_10 = 0;

 if (VAR_8 & VAR_1) {
  VAR_9.auth_mode = VAR_6;
  VAR_7->open_wep = 0;
  VAR_7->auth_mode = 1;
 } else if (VAR_8 & VAR_0){
  VAR_9.auth_mode = VAR_5;
  VAR_7->open_wep = 1;
  VAR_7->auth_mode = 0;
 }
 else if (VAR_8 & VAR_2){
  VAR_9.auth_mode = VAR_4;
  VAR_7->open_wep = 1;
  VAR_7->auth_mode = 2;
 }


 if (VAR_7->set_security)
  VAR_7->set_security(VAR_7->dev, &VAR_9);



 return VAR_10;
}
