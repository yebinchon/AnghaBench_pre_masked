
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct b43legacy_wldev {TYPE_1__* dev; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int *) ;

void FUNC_1(struct b43legacy_wldev *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev->dev;

 FUNC_0(VAR_3, &VAR_1);
 FUNC_0(VAR_3, &VAR_0);
}
