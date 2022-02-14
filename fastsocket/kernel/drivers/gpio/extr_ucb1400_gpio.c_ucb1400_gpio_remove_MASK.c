
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ngpio; } ;
struct ucb1400_gpio {TYPE_2__ gc; } ;
struct platform_device {int dev; } ;
struct TYPE_3__ {int (* gpio_teardown ) (int *,int ) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 struct ucb1400_gpio* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 int VAR_2 = 0;
 struct ucb1400_gpio *VAR_3 = FUNC_1(VAR_1);

 if (VAR_0 && VAR_0->gpio_teardown) {
  VAR_2 = VAR_0->gpio_teardown(&VAR_1->dev, VAR_3->gc.ngpio);
  if (VAR_2)
   return VAR_2;
 }

 VAR_2 = FUNC_0(&VAR_3->gc);
 return VAR_2;
}
