
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int memory; scalar_t__ fr_o; int fr_i; int streaming; struct file* capt_file; int present; } ;
struct file {int dummy; } ;
typedef enum v4l2_memory { ____Placeholder_v4l2_memory } v4l2_memory ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_2, struct file *VAR_3,
    enum v4l2_memory VAR_4)
{
 if (!VAR_2->present)
  return -VAR_1;
 if (VAR_2->capt_file != VAR_3 || VAR_2->memory != VAR_4 ||
   !VAR_2->streaming)
  return -VAR_0;


 return VAR_2->fr_o != FUNC_0(&VAR_2->fr_i);
}
