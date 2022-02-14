
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vino_channel_settings {int dummy; } ;
struct TYPE_3__ {int height; int width; int top; int left; } ;
struct v4l2_crop {int type; TYPE_1__ c; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int input_lock; } ;


 int VAR_0 ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct vino_channel_settings* FUNC_2 (struct file*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (struct vino_channel_settings*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3,
       struct v4l2_crop *VAR_4)
{
 struct vino_channel_settings *VAR_5 = FUNC_2(VAR_2);
 unsigned long VAR_6;

 switch (VAR_4->type) {
 case 129:
  FUNC_0(&VAR_1->input_lock, VAR_6);

  FUNC_3(VAR_5, VAR_4->c.left, VAR_4->c.top,
      VAR_4->c.width, VAR_4->c.height);

  FUNC_1(&VAR_1->input_lock, VAR_6);
  break;
 case 128:
 default:
  return -VAR_0;
 }

 return 0;
}
