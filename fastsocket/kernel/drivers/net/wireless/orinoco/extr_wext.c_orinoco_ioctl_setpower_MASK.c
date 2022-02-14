
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {int pm_on; int pm_mcast; int pm_timeout; int pm_period; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; int value; scalar_t__ disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;

 struct orinoco_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct orinoco_private*,unsigned long*) ;
 int FUNC_2 (struct orinoco_private*,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_6,
      struct iw_request_info *VAR_7,
      struct iw_param *VAR_8,
      char *VAR_9)
{
 struct orinoco_private *VAR_10 = FUNC_0(VAR_6);
 int VAR_11 = -VAR_1;
 unsigned long VAR_12;

 if (FUNC_1(VAR_10, &VAR_12) != 0)
  return -VAR_0;

 if (VAR_8->disabled) {
  VAR_10->pm_on = 0;
 } else {
  switch (VAR_8->flags & VAR_3) {
  case 128:
   VAR_10->pm_mcast = 0;
   VAR_10->pm_on = 1;
   break;
  case 130:
   VAR_10->pm_mcast = 1;
   VAR_10->pm_on = 1;
   break;
  case 129:

   break;
  default:
   VAR_11 = -VAR_2;
   goto out;
  }

  if (VAR_8->flags & VAR_5) {
   VAR_10->pm_on = 1;
   VAR_10->pm_timeout = VAR_8->value / 1000;
  }
  if (VAR_8->flags & VAR_4) {
   VAR_10->pm_on = 1;
   VAR_10->pm_period = VAR_8->value / 1000;
  }


  if (!VAR_10->pm_on) {
   VAR_11 = -VAR_2;
   goto out;
  }
 }

 out:
 FUNC_2(VAR_10, &VAR_12);

 return VAR_11;
}
