
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct bcm5974 {int opened; int intf; int pm_mutex; } ;


 int FUNC_0 (struct bcm5974*) ;
 struct bcm5974* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct input_dev *VAR_0)
{
 struct bcm5974 *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_4(VAR_1->intf);
 if (VAR_2)
  return VAR_2;

 FUNC_2(&VAR_1->pm_mutex);

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2)
  VAR_1->opened = 1;

 FUNC_3(&VAR_1->pm_mutex);

 if (VAR_2)
  FUNC_5(VAR_1->intf);

 return VAR_2;
}
