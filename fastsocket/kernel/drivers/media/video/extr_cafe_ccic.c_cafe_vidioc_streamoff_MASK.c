
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct cafe_camera* private_data; } ;
struct cafe_camera {scalar_t__ state; int s_mutex; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cafe_camera*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
  enum v4l2_buf_type VAR_5)
{
 struct cafe_camera *VAR_6 = VAR_3->private_data;
 int VAR_7 = -VAR_0;

 if (VAR_5 != VAR_2)
  goto out;
 FUNC_1(&VAR_6->s_mutex);
 if (VAR_6->state != VAR_1)
  goto out_unlock;

 FUNC_0(VAR_6);
 VAR_7 = 0;

  out_unlock:
 FUNC_2(&VAR_6->s_mutex);
  out:
 return VAR_7;
}
