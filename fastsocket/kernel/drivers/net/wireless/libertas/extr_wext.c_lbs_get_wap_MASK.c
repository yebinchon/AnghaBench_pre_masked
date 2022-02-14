
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_family; int sa_data; } ;
struct net_device {struct lbs_private* ml_priv; } ;
struct TYPE_2__ {int bssid; } ;
struct lbs_private {scalar_t__ connect_status; TYPE_1__ curbssparams; } ;
struct iw_request_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4, struct iw_request_info *VAR_5,
   struct sockaddr *VAR_6, char *VAR_7)
{
 struct lbs_private *VAR_8 = VAR_4->ml_priv;

 FUNC_0(VAR_3);

 if (VAR_8->connect_status == VAR_2) {
  FUNC_2(VAR_6->sa_data, VAR_8->curbssparams.bssid, VAR_1);
 } else {
  FUNC_3(VAR_6->sa_data, 0, VAR_1);
 }
 VAR_6->sa_family = VAR_0;

 FUNC_1(VAR_3);
 return 0;
}
