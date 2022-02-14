
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int privid; } ;
struct orinoco_private {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct wiphy*,int ) ;
 struct orinoco_private* FUNC_1 (struct wiphy*) ;

void FUNC_2(struct wiphy *VAR_1)
{
 struct orinoco_private *VAR_2 = FUNC_1(VAR_1);

 VAR_1->privid = VAR_0;

 FUNC_0(VAR_1, VAR_2->dev);
}
