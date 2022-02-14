
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ext_controls {scalar_t__ ctrl_class; int count; struct v4l2_ext_control* controls; } ;
struct v4l2_ext_control {scalar_t__ id; int value; } ;
struct TYPE_2__ {int pre_emphasis; } ;
struct poseidon {TYPE_1__ radio_data; } ;
struct file {struct poseidon* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_4, void *VAR_5,
    struct v4l2_ext_controls *VAR_6)
{
 struct poseidon *VAR_7 = VAR_4->private_data;
 int VAR_8;

 if (VAR_6->ctrl_class != VAR_3)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_6->count; VAR_8++) {
  struct v4l2_ext_control *VAR_9 = VAR_6->controls + VAR_8;

  if (VAR_9->id != VAR_2)
   continue;

  if (VAR_8 < VAR_1)
   VAR_9->value = VAR_7->radio_data.pre_emphasis;
 }
 return 0;
}
