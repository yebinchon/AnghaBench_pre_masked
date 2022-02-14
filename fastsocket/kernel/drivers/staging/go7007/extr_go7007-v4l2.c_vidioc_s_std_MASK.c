
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct go7007_file {struct go7007* go; } ;
struct go7007 {int input; int sensor_framerate; int i2c_adapter; scalar_t__ i2c_adapter_online; void* standard; TYPE_1__* board_info; scalar_t__ streaming; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int sensor_flags; int flags; int num_inputs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (struct go7007*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_11, void *VAR_12, v4l2_std_id *VAR_13)
{
 struct go7007 *VAR_14 = ((struct go7007_file *) VAR_12)->go;

 if (VAR_14->streaming)
  return -VAR_0;

 if (!(VAR_14->board_info->sensor_flags & VAR_4) &&
   *VAR_13 != 0)
  return -VAR_1;

 if (*VAR_13 == 0)
  return -VAR_1;

 if ((VAR_14->board_info->flags & VAR_3) &&
   VAR_14->input == VAR_14->board_info->num_inputs - 1) {
  if (!VAR_14->i2c_adapter_online)
   return -VAR_2;
  FUNC_0(&VAR_14->i2c_adapter,
     VAR_10, VAR_13);
  if (!*VAR_13)
   return -VAR_1;
 }

 if (*VAR_13 & VAR_7) {
  VAR_14->standard = VAR_5;
  VAR_14->sensor_framerate = 30000;
 } else if (*VAR_13 & VAR_8) {
  VAR_14->standard = VAR_6;
  VAR_14->sensor_framerate = 25025;
 } else if (*VAR_13 & VAR_9) {
  VAR_14->standard = VAR_6;
  VAR_14->sensor_framerate = 25025;
 } else
  return -VAR_1;

 if (VAR_14->i2c_adapter_online)
  FUNC_0(&VAR_14->i2c_adapter,
     VAR_10, VAR_13);
 FUNC_1(VAR_14, ((void*)0), 0);

 return 0;
}
