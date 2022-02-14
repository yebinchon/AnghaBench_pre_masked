
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_ext_controls {scalar_t__ ctrl_class; int count; struct v4l2_ext_control* controls; } ;
struct v4l2_ext_control {scalar_t__ id; size_t value; } ;
struct TYPE_2__ {int pre_emphasis; } ;
struct poseidon {TYPE_1__ radio_data; } ;
struct file {struct poseidon* private_data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int* VAR_5 ;
 int FUNC_0 (struct poseidon*,int ,int,int *) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_6, void *VAR_7,
   struct v4l2_ext_controls *VAR_8)
{
 int VAR_9;

 if (VAR_8->ctrl_class != VAR_4)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_8->count; VAR_9++) {
  struct v4l2_ext_control *VAR_10 = VAR_8->controls + VAR_9;

  if (VAR_10->id != VAR_3)
   continue;

  if (VAR_10->value >= 0 && VAR_10->value < VAR_1) {
   struct poseidon *VAR_11 = VAR_6->private_data;
   int VAR_12 = VAR_5[VAR_10->value];
   u32 VAR_13;

   FUNC_0(VAR_11, VAR_2,
      VAR_12, &VAR_13);
   VAR_11->radio_data.pre_emphasis = VAR_12;
  }
 }
 return 0;
}
