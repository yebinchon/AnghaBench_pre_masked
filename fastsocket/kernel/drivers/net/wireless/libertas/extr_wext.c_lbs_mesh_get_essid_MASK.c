
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int mesh_ssid_len; int mesh_ssid; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; int length; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
         struct iw_request_info *VAR_2,
         struct iw_point *VAR_3, char *VAR_4)
{
 struct lbs_private *VAR_5 = VAR_1->ml_priv;

 FUNC_0(VAR_0);

 FUNC_2(VAR_4, VAR_5->mesh_ssid, VAR_5->mesh_ssid_len);

 VAR_3->length = VAR_5->mesh_ssid_len;

 VAR_3->flags = 1;

 FUNC_1(VAR_0);
 return 0;
}
