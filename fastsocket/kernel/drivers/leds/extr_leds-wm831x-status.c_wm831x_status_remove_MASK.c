
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct wm831x_status {TYPE_1__ cdev; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct wm831x_status*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct wm831x_status* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct wm831x_status *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(VAR_2->cdev.dev, &VAR_0);
 FUNC_2(&VAR_2->cdev);
 FUNC_1(VAR_2);

 return 0;
}
