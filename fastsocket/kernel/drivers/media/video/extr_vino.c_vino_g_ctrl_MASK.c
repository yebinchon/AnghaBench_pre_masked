
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vino_channel_settings {int input; } ;
struct v4l2_control {int id; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int input_lock; } ;
struct TYPE_5__ {int id; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (int ,int ,struct v4l2_control*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,struct v4l2_control*) ;
 int VAR_4 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct vino_channel_settings* FUNC_4 (struct file*) ;
 TYPE_3__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static int FUNC_5(struct file *VAR_8, void *VAR_9,
       struct v4l2_control *VAR_10)
{
 struct vino_channel_settings *VAR_11 = FUNC_4(VAR_8);
 unsigned long VAR_12;
 int VAR_13;
 int VAR_14 = 0;

 FUNC_2(&VAR_5->input_lock, VAR_12);

 switch (VAR_11->input) {
 case 129: {
  VAR_14 = -VAR_0;
  for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
   if (VAR_6[VAR_13].id == VAR_10->id) {
    VAR_14 = 0;
    break;
   }
  }

  if (VAR_14)
   goto out;

  VAR_14 = FUNC_0(VAR_3, VAR_4, VAR_10);
  if (VAR_14)
   VAR_14 = -VAR_0;
  break;
 }
 case 130:
 case 128: {
  VAR_14 = -VAR_0;
  for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++) {
   if (VAR_7[VAR_13].id == VAR_10->id) {
    VAR_14 = 0;
    break;
   }
  }

  if (VAR_14)
   goto out;

  VAR_14 = FUNC_1(VAR_3, VAR_4, VAR_10);
  if (VAR_14)
   VAR_14 = -VAR_0;
  break;
 }
 default:
  VAR_14 = -VAR_0;
 }

out:
 FUNC_3(&VAR_5->input_lock, VAR_12);

 return VAR_14;
}
