
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {int ap_density; int has_sensitivity; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct orinoco_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct orinoco_private*,unsigned long*) ;
 int FUNC_2 (struct orinoco_private*,unsigned long*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
     struct iw_request_info *VAR_5,
     struct iw_param *VAR_6,
     char *VAR_7)
{
 struct orinoco_private *VAR_8 = FUNC_0(VAR_4);
 int VAR_9 = VAR_6->value;
 unsigned long VAR_10;

 if (!VAR_8->has_sensitivity)
  return -VAR_3;

 if ((VAR_9 < 1) || (VAR_9 > 3))
  return -VAR_2;

 if (FUNC_1(VAR_8, &VAR_10) != 0)
  return -VAR_0;
 VAR_8->ap_density = VAR_9;
 FUNC_2(VAR_8, &VAR_10);

 return -VAR_1;
}
