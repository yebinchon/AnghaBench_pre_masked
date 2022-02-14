
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {struct lbs_private* ml_priv; } ;
struct TYPE_2__ {int channel; } ;
struct lbs_private {TYPE_1__ curbssparams; int mesh_ssid_len; int mesh_ssid; int radio_on; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct lbs_private*,int ,int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5,
         struct iw_request_info *VAR_6,
         struct iw_point *VAR_7, char *VAR_8)
{
 struct lbs_private *VAR_9 = VAR_5->ml_priv;
 int VAR_10 = 0;

 FUNC_0(VAR_4);

 if (!VAR_9->radio_on) {
  VAR_10 = -VAR_2;
  goto out;
 }


 if (VAR_7->length > VAR_3) {
  VAR_10 = -VAR_1;
  goto out;
 }

 if (!VAR_7->flags || !VAR_7->length) {
  VAR_10 = -VAR_2;
  goto out;
 } else {

  FUNC_3(VAR_9->mesh_ssid, VAR_8, VAR_7->length);
  VAR_9->mesh_ssid_len = VAR_7->length;
 }

 FUNC_2(VAR_9, VAR_0,
   VAR_9->curbssparams.channel);
 out:
 FUNC_1(VAR_4, "ret %d", VAR_10);
 return VAR_10;
}
