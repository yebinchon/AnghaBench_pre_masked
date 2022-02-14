
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007_file {int lock; struct go7007* go; } ;
struct go7007 {int streaming; int hw_lock; int * active_buf; scalar_t__ next_seq; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct go7007*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
     enum v4l2_buf_type VAR_5)
{
 struct go7007_file *VAR_6 = VAR_4;
 struct go7007 *VAR_7 = VAR_6->go;
 int VAR_8 = 0;

 if (VAR_5 != VAR_2)
  return -VAR_0;

 FUNC_1(&VAR_6->lock);
 FUNC_1(&VAR_7->hw_lock);

 if (!VAR_7->streaming) {
  VAR_7->streaming = 1;
  VAR_7->next_seq = 0;
  VAR_7->active_buf = ((void*)0);
  if (FUNC_0(VAR_7) < 0)
   VAR_8 = -VAR_1;
  else
   VAR_8 = 0;
 }
 FUNC_2(&VAR_7->hw_lock);
 FUNC_2(&VAR_6->lock);

 return VAR_8;
}
