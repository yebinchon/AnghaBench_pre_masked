
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {scalar_t__ value; scalar_t__ disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct lbs_private*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, struct iw_request_info *VAR_5,
   struct iw_param *VAR_6, char *VAR_7)
{
 int VAR_8 = 0;
 struct lbs_private *VAR_9 = VAR_4->ml_priv;
 u32 VAR_10 = VAR_6->value;

 FUNC_0(VAR_1);

 if (VAR_6->disabled)
  VAR_10 = VAR_2;

 if (VAR_10 > VAR_2)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_9, VAR_3, (u16) VAR_10);

 FUNC_1(VAR_1, "ret %d", VAR_8);
 return VAR_8;
}
