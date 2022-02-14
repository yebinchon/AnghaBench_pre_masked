
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct b43_wldev {TYPE_1__* dev; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int *) ;

void FUNC_1(struct b43_wldev *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev->dev;

 FUNC_0(VAR_2, &VAR_0);
}
