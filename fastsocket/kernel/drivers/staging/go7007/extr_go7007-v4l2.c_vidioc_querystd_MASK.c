
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct go7007_file {struct go7007* go; } ;
struct go7007 {int input; TYPE_1__* board_info; int i2c_adapter; int i2c_adapter_online; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int flags; int num_inputs; int sensor_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_7, void *VAR_8, v4l2_std_id *VAR_9)
{
 struct go7007 *VAR_10 = ((struct go7007_file *) VAR_8)->go;

 if ((VAR_10->board_info->flags & VAR_1) &&
   VAR_10->input == VAR_10->board_info->num_inputs - 1) {
  if (!VAR_10->i2c_adapter_online)
   return -VAR_0;
  FUNC_0(&VAR_10->i2c_adapter, VAR_6, VAR_9);
 } else if (VAR_10->board_info->sensor_flags & VAR_2)
  *VAR_9 = VAR_3 | VAR_4 | VAR_5;
 else
  *VAR_9 = 0;

 return 0;
}
