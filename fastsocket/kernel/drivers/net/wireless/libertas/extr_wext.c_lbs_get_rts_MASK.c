
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int disabled; int fixed; scalar_t__ value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct lbs_private*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, struct iw_request_info *VAR_4,
   struct iw_param *VAR_5, char *VAR_6)
{
 struct lbs_private *VAR_7 = VAR_3->ml_priv;
 int VAR_8 = 0;
 u16 VAR_9 = 0;

 FUNC_0(VAR_0);

 VAR_8 = FUNC_2(VAR_7, VAR_2, &VAR_9);
 if (VAR_8)
  goto out;

 VAR_5->value = VAR_9;
 VAR_5->disabled = VAR_9 > VAR_1;
 VAR_5->fixed = 1;

out:
 FUNC_1(VAR_0, "ret %d", VAR_8);
 return VAR_8;
}
