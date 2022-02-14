
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_handle {struct evdev* private; } ;
struct evdev {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct evdev*) ;
 int FUNC_2 (struct input_handle*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct input_handle *VAR_0)
{
 struct evdev *VAR_1 = VAR_0->private;

 FUNC_0(&VAR_1->dev);
 FUNC_1(VAR_1);
 FUNC_2(VAR_0);
 FUNC_3(&VAR_1->dev);
}
