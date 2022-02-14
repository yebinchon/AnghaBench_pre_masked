
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {int open; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct orinoco_private*) ;
 struct orinoco_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct orinoco_private*,unsigned long*) ;
 int FUNC_3 (struct orinoco_private*,unsigned long*) ;

int FUNC_4(struct net_device *VAR_1)
{
 struct orinoco_private *VAR_2 = FUNC_1(VAR_1);
 unsigned long VAR_3;
 int VAR_4;

 if (FUNC_2(VAR_2, &VAR_3) != 0)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_2);

 if (!VAR_4)
  VAR_2->open = 1;

 FUNC_3(VAR_2, &VAR_3);

 return VAR_4;
}
