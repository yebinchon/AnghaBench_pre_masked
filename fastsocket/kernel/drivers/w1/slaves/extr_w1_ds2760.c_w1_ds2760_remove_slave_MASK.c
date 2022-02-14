
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct w1_slave {TYPE_1__ dev; } ;
struct platform_device {int id; } ;


 struct platform_device* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct w1_slave *VAR_1)
{
 struct platform_device *VAR_2 = FUNC_0(&VAR_1->dev);
 int VAR_3 = VAR_2->id;

 FUNC_1(VAR_2);
 FUNC_2(VAR_3);
 FUNC_3(&VAR_1->dev.kobj, &VAR_0);
}
