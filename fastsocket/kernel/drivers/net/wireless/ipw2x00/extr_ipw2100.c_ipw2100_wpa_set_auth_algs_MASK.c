
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct libipw_security {int auth_mode; int flags; } ;
struct libipw_device {int open_wep; int dev; int (* set_security ) (int ,struct libipw_security*) ;} ;
struct ipw2100_priv {struct libipw_device* ieee; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,struct libipw_security*) ;

__attribute__((used)) static int FUNC_1(struct ipw2100_priv *VAR_9, int VAR_10)
{

 struct libipw_device *VAR_11 = VAR_9->ieee;
 struct libipw_security VAR_12 = {
  .flags = VAR_5,
 };
 int VAR_13 = 0;

 if (VAR_10 & VAR_4) {
  VAR_12.auth_mode = VAR_8;
  VAR_11->open_wep = 0;
 } else if (VAR_10 & VAR_3) {
  VAR_12.auth_mode = VAR_7;
  VAR_11->open_wep = 1;
 } else if (VAR_10 & VAR_2) {
  VAR_12.auth_mode = VAR_6;
  VAR_11->open_wep = 1;
 } else
  return -VAR_0;

 if (VAR_11->set_security)
  VAR_11->set_security(VAR_11->dev, &VAR_12);
 else
  VAR_13 = -VAR_1;

 return VAR_13;
}
