
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vino_channel_settings {int input; } ;
struct v4l2_control {int value; int id; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int input_lock; } ;
struct TYPE_5__ {int maximum; int minimum; int id; } ;
struct TYPE_4__ {int maximum; int minimum; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (int ,int ,struct v4l2_control*) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,struct v4l2_control*) ;
 int VAR_6 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct vino_channel_settings* FUNC_4 (struct file*) ;
 TYPE_3__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 int FUNC_5 (struct vino_channel_settings*) ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static int FUNC_6(struct file *VAR_10, void *VAR_11,
       struct v4l2_control *VAR_12)
{
 struct vino_channel_settings *VAR_13 = FUNC_4(VAR_10);
 unsigned long VAR_14;
 int VAR_15;
 int VAR_16 = 0;

 FUNC_2(&VAR_7->input_lock, VAR_14);

 if (!FUNC_5(VAR_13)) {
  VAR_16 = -VAR_0;
  goto out;
 }

 switch (VAR_13->input) {
 case 129: {
  VAR_16 = -VAR_1;
  for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
   if (VAR_8[VAR_15].id == VAR_12->id) {
    VAR_16 = 0;
    break;
   }
  }
  if (VAR_16)
   goto out;
  if (VAR_12->value < VAR_8[VAR_15].minimum ||
      VAR_12->value > VAR_8[VAR_15].maximum) {
   VAR_16 = -VAR_2;
   goto out;
  }
  VAR_16 = FUNC_0(VAR_5, VAR_6, VAR_12);
  if (VAR_16)
   VAR_16 = -VAR_1;
  break;
 }
 case 130:
 case 128: {
  VAR_16 = -VAR_1;
  for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
   if (VAR_9[VAR_15].id == VAR_12->id) {
    VAR_16 = 0;
    break;
   }
  }
  if (VAR_16)
   goto out;
  if (VAR_12->value < VAR_9[VAR_15].minimum ||
      VAR_12->value > VAR_9[VAR_15].maximum) {
   VAR_16 = -VAR_2;
   goto out;
  }

  VAR_16 = FUNC_1(VAR_5, VAR_6, VAR_12);
  if (VAR_16)
   VAR_16 = -VAR_1;
  break;
 }
 default:
  VAR_16 = -VAR_1;
 }

out:
 FUNC_3(&VAR_7->input_lock, VAR_14);

 return VAR_16;
}
