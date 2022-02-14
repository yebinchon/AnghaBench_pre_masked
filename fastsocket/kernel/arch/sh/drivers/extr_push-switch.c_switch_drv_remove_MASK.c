
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct push_switch_platform_info {scalar_t__ name; } ;
struct push_switch {int debounce; } ;
struct TYPE_2__ {struct push_switch_platform_info* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int,struct platform_device*) ;
 int FUNC_4 (struct push_switch*) ;
 struct push_switch* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct push_switch *VAR_2 = FUNC_5(VAR_1);
 struct push_switch_platform_info *VAR_3 = VAR_1->dev.platform_data;
 int VAR_4 = FUNC_6(VAR_1, 0);

 if (VAR_3->name)
  FUNC_1(&VAR_1->dev, &VAR_0);

 FUNC_7(VAR_1, ((void*)0));
 FUNC_2();
 FUNC_0(&VAR_2->debounce);
 FUNC_3(VAR_4, VAR_1);

 FUNC_4(VAR_2);

 return 0;
}
