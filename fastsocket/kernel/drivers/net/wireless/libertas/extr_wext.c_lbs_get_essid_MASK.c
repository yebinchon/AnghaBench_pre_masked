
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {struct lbs_private* ml_priv; } ;
struct TYPE_2__ {int ssid_len; int ssid; } ;
struct lbs_private {scalar_t__ connect_status; TYPE_1__ curbssparams; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct iw_request_info *VAR_3,
     struct iw_point *VAR_4, char *VAR_5)
{
 struct lbs_private *VAR_6 = VAR_2->ml_priv;

 FUNC_0(VAR_1);
 if (VAR_6->connect_status == VAR_0) {
  FUNC_2(VAR_5, VAR_6->curbssparams.ssid,
         VAR_6->curbssparams.ssid_len);
 } else {
  FUNC_3(VAR_5, 0, 32);
 }




 VAR_4->length = VAR_6->curbssparams.ssid_len;

 VAR_4->flags = 1;

 FUNC_1(VAR_1);
 return 0;
}
