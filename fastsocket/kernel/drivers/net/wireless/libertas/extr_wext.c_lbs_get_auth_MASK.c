
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {struct lbs_private* ml_priv; } ;
struct TYPE_2__ {int key_mgmt; int auth_mode; int WPA2enabled; int WPAenabled; } ;
struct lbs_private {TYPE_1__ secinfo; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; int value; } ;


 int VAR_0 ;

 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_6,
    struct iw_request_info *VAR_7,
    struct iw_param *VAR_8,
    char *VAR_9)
{
 int VAR_10 = 0;
 struct lbs_private *VAR_11 = VAR_6->ml_priv;

 FUNC_0(VAR_5);

 switch (VAR_8->flags & VAR_1) {
 case 130:
  VAR_8->value = VAR_11->secinfo.key_mgmt;
  break;

 case 128:
  VAR_8->value = 0;
  if (VAR_11->secinfo.WPAenabled)
   VAR_8->value |= VAR_3;
  if (VAR_11->secinfo.WPA2enabled)
   VAR_8->value |= VAR_4;
  if (!VAR_8->value)
   VAR_8->value |= VAR_2;
  break;

 case 131:
  VAR_8->value = VAR_11->secinfo.auth_mode;
  break;

 case 129:
  if (VAR_11->secinfo.WPAenabled && VAR_11->secinfo.WPA2enabled)
   VAR_8->value = 1;
  break;

 default:
  VAR_10 = -VAR_0;
 }

 FUNC_1(VAR_5, "ret %d", VAR_10);
 return VAR_10;
}
