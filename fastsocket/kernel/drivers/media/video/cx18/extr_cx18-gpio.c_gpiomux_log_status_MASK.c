
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct cx18 {int gpio_lock; int gpio_val; int gpio_dir; } ;


 int FUNC_0 (struct v4l2_subdev*,char*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct cx18* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0)
{
 struct cx18 *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_1->gpio_lock);
 FUNC_0(VAR_0, "GPIO:  direction 0x%08x, value 0x%08x\n",
        VAR_1->gpio_dir, VAR_1->gpio_val);
 FUNC_2(&VAR_1->gpio_lock);
 return 0;
}
