
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct front_face {int type; int q; } ;
struct file {struct front_face* private_data; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int FUNC_0 (struct front_face*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1, void *VAR_2,
    enum v4l2_buf_type VAR_3)
{
 struct front_face *VAR_4 = VAR_1->private_data;

 FUNC_0(VAR_4);
 if (FUNC_1(VAR_3 != VAR_4->type))
  return -VAR_0;
 return FUNC_2(&VAR_4->q);
}
