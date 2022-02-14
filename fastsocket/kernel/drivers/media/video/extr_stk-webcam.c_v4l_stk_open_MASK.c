
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct stk_camera {int interface; } ;
struct file {struct stk_camera* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct stk_camera*) ;
 int FUNC_1 (int ) ;
 struct stk_camera* FUNC_2 (struct video_device*) ;
 struct video_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1)
{
 struct stk_camera *VAR_2;
 struct video_device *VAR_3;

 VAR_3 = FUNC_3(VAR_1);
 VAR_2 = FUNC_2(VAR_3);

 if (VAR_2 == ((void*)0) || !FUNC_0(VAR_2)) {
  return -VAR_0;
 }
 VAR_1->private_data = VAR_2;
 FUNC_1(VAR_2->interface);

 return 0;
}
