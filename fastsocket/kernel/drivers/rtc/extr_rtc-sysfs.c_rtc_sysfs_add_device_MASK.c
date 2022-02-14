
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct rtc_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (struct rtc_device*) ;

void FUNC_3(struct rtc_device *VAR_1)
{
 int VAR_2;


 if (!FUNC_2(VAR_1))
  return;

 VAR_2 = FUNC_1(&VAR_1->dev, &VAR_0);
 if (VAR_2)
  FUNC_0(VAR_1->dev.parent,
   "failed to create alarm attribute, %d\n", VAR_2);
}
