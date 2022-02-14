
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_input {size_t index; int std; scalar_t__ tuner; scalar_t__ audioset; int type; int name; } ;
struct go7007_file {struct go7007* go; } ;
struct go7007 {TYPE_2__* board_info; } ;
struct file {int dummy; } ;
struct TYPE_4__ {size_t num_inputs; int flags; int sensor_flags; TYPE_1__* inputs; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_8, void *VAR_9,
    struct v4l2_input *VAR_10)
{
 struct go7007 *VAR_11 = ((struct go7007_file *) VAR_9)->go;

 if (VAR_10->index >= VAR_11->board_info->num_inputs)
  return -VAR_0;

 FUNC_0(VAR_10->name, VAR_11->board_info->inputs[VAR_10->index].name,
   sizeof(VAR_10->name));


 if ((VAR_11->board_info->flags & VAR_1) &&
   VAR_10->index == VAR_11->board_info->num_inputs - 1)
  VAR_10->type = VAR_4;
 else
  VAR_10->type = VAR_3;

 VAR_10->audioset = 0;
 VAR_10->tuner = 0;
 if (VAR_11->board_info->sensor_flags & VAR_2)
  VAR_10->std = VAR_5 | VAR_6 |
      VAR_7;
 else
  VAR_10->std = 0;

 return 0;
}
