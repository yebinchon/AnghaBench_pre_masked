
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {struct cafe_camera* private_data; } ;
struct cafe_camera {scalar_t__ next_buf; int iowait; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_2,
  struct poll_table_struct *VAR_3)
{
 struct cafe_camera *VAR_4 = VAR_2->private_data;

 FUNC_0(VAR_2, &VAR_4->iowait, VAR_3);
 if (VAR_4->next_buf >= 0)
  return VAR_0 | VAR_1;
 return 0;
}
