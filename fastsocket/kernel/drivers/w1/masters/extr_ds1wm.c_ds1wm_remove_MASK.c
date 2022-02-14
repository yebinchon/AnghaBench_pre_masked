
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ds1wm_data {int map; int irq; } ;


 int FUNC_0 (struct ds1wm_data*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct ds1wm_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ds1wm_data*) ;
 struct ds1wm_data* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct ds1wm_data *VAR_2 = FUNC_4(VAR_1);

 FUNC_5(&VAR_0);
 FUNC_0(VAR_2);
 FUNC_1(VAR_2->irq, VAR_2);
 FUNC_2(VAR_2->map);
 FUNC_3(VAR_2);

 return 0;
}
