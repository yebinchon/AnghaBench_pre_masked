
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tg3 {TYPE_2__* pdev; int * hwmon_dev; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct tg3 *VAR_1)
{
 if (VAR_1->hwmon_dev) {
  FUNC_0(VAR_1->hwmon_dev);
  VAR_1->hwmon_dev = ((void*)0);
  FUNC_1(&VAR_1->pdev->dev.kobj, &VAR_0);
 }
}
