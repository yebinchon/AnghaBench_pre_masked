
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
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct lbs_private*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, struct iw_request_info *VAR_5,
    struct iw_param *VAR_6, char *VAR_7)
{
 struct lbs_private *VAR_8 = VAR_4->ml_priv;
 int VAR_9 = 0;
 u16 VAR_10 = 0;

 FUNC_0(VAR_0);

 VAR_9 = FUNC_2(VAR_8, VAR_3, &VAR_10);
 if (VAR_9)
  goto out;

 VAR_6->value = VAR_10;
 VAR_6->disabled = ((VAR_10 < VAR_2)
     || (VAR_10 > VAR_1));
 VAR_6->fixed = 1;

out:
 FUNC_1(VAR_0, "ret %d", VAR_9);
 return VAR_9;
}
