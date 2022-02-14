
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct orinoco_private {int dummy; } ;
struct net_device {int dummy; } ;


 struct wireless_dev* FUNC_0 (struct net_device*) ;
 struct orinoco_private* FUNC_1 (struct wireless_dev*) ;

__attribute__((used)) static inline struct orinoco_private *FUNC_2(struct net_device *VAR_0)
{
 struct wireless_dev *VAR_1 = FUNC_0(VAR_0);
 return FUNC_1(VAR_1);
}
