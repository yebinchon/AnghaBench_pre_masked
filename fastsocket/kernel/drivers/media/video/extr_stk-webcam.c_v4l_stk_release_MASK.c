
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk_camera {int interface; struct file* owner; } ;
struct file {struct stk_camera* private_data; } ;


 scalar_t__ FUNC_0 (struct stk_camera*) ;
 int FUNC_1 (struct stk_camera*) ;
 int FUNC_2 (struct stk_camera*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0)
{
 struct stk_camera *VAR_1 = VAR_0->private_data;

 if (VAR_1->owner == VAR_0) {
  FUNC_2(VAR_1);
  FUNC_1(VAR_1);
  VAR_1->owner = ((void*)0);
 }

 if(FUNC_0(VAR_1))
  FUNC_3(VAR_1->interface);

 return 0;
}
