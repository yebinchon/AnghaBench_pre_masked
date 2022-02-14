
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orinoco_private {int dummy; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct orinoco_private*) ;
 int FUNC_1 (struct orinoco_private*,struct net_device*,int,int) ;
 struct orinoco_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_2)
{
 struct orinoco_private *VAR_3 = FUNC_2(VAR_2);
 int VAR_4 = 0;
 int VAR_5, VAR_6;



 if ((VAR_2->flags & VAR_1) || (VAR_2->flags & VAR_0) ||
     (FUNC_3(VAR_2) > FUNC_0(VAR_3))) {
  VAR_5 = 1;
  VAR_6 = 0;
 } else {
  VAR_5 = 0;
  VAR_6 = FUNC_3(VAR_2);
 }

 VAR_4 = FUNC_1(VAR_3, VAR_2, VAR_6, VAR_5);

 return VAR_4;
}
