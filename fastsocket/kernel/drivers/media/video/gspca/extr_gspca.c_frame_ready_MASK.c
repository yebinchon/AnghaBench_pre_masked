
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int queue_lock; } ;
struct file {int dummy; } ;
typedef enum v4l2_memory { ____Placeholder_v4l2_memory } v4l2_memory ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,struct file*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_1, struct file *VAR_2,
   enum v4l2_memory VAR_3)
{
 int VAR_4;

 if (FUNC_1(&VAR_1->queue_lock))
  return -VAR_0;
 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_1->queue_lock);
 return VAR_4;
}
