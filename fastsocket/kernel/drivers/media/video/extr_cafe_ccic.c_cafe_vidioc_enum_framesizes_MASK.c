
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frmsizeenum {int dummy; } ;
struct file {int dummy; } ;
struct cafe_camera {int s_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cafe_camera*,int ,int ,struct v4l2_frmsizeenum*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
  struct v4l2_frmsizeenum *VAR_4)
{
 struct cafe_camera *VAR_5 = VAR_3;
 int VAR_6;

 FUNC_0(&VAR_5->s_mutex);
 VAR_6 = FUNC_2(VAR_5, VAR_1, VAR_0, VAR_4);
 FUNC_1(&VAR_5->s_mutex);
 return VAR_6;
}
