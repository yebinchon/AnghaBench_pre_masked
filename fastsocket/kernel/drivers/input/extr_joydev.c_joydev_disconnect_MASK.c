
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct joydev {int dev; } ;
struct input_handle {struct joydev* private; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct input_handle*) ;
 int FUNC_2 (struct joydev*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct input_handle *VAR_0)
{
 struct joydev *VAR_1 = VAR_0->private;

 FUNC_0(&VAR_1->dev);
 FUNC_2(VAR_1);
 FUNC_1(VAR_0);
 FUNC_3(&VAR_1->dev);
}
