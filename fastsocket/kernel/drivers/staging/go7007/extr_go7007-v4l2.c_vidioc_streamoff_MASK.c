
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007_file {int lock; struct go7007* go; } ;
struct go7007 {int dummy; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct go7007*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
     enum v4l2_buf_type VAR_4)
{
 struct go7007_file *VAR_5 = VAR_3;
 struct go7007 *VAR_6 = VAR_5->go;

 if (VAR_4 != VAR_1)
  return -VAR_0;
 FUNC_1(&VAR_5->lock);
 FUNC_0(VAR_6);
 FUNC_2(&VAR_5->lock);

 return 0;
}
