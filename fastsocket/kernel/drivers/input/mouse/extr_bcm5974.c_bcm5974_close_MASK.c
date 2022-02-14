
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct bcm5974 {int intf; int pm_mutex; scalar_t__ opened; } ;


 int FUNC_0 (struct bcm5974*) ;
 struct bcm5974* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct input_dev *VAR_0)
{
 struct bcm5974 *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->pm_mutex);

 FUNC_0(VAR_1);
 VAR_1->opened = 0;

 FUNC_3(&VAR_1->pm_mutex);

 FUNC_4(VAR_1->intf);
}
