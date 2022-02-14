
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {scalar_t__ open; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct orinoco_private*) ;
 struct orinoco_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct orinoco_private*) ;
 int FUNC_3 (struct orinoco_private*) ;

int FUNC_4(struct net_device *VAR_0)
{
 struct orinoco_private *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = 0;




 FUNC_2(VAR_1);

 VAR_1->open = 0;

 VAR_2 = FUNC_0(VAR_1);

 FUNC_3(VAR_1);

 return VAR_2;
}
