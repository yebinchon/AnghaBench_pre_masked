
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct cafe_camera* private_data; } ;
struct cafe_camera {scalar_t__ state; scalar_t__ n_sbufs; int s_mutex; scalar_t__ sequence; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cafe_camera*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
  enum v4l2_buf_type VAR_6)
{
 struct cafe_camera *VAR_7 = VAR_4->private_data;
 int VAR_8 = -VAR_0;

 if (VAR_6 != VAR_3)
  goto out;
 FUNC_1(&VAR_7->s_mutex);
 if (VAR_7->state != VAR_1 || VAR_7->n_sbufs == 0)
  goto out_unlock;

 VAR_7->sequence = 0;
 VAR_8 = FUNC_0(VAR_7, VAR_2);

  out_unlock:
 FUNC_2(&VAR_7->s_mutex);
  out:
 return VAR_8;
}
