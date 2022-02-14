
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ top; scalar_t__ bottom; scalar_t__ left; scalar_t__ right; } ;
struct vino_channel_settings {TYPE_2__ clipping; } ;
struct TYPE_4__ {scalar_t__ height; scalar_t__ width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_crop {int type; TYPE_1__ c; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int input_lock; } ;


 int VAR_0 ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 struct vino_channel_settings* FUNC_2 (struct file*) ;
 TYPE_3__* VAR_1 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3,
       struct v4l2_crop *VAR_4)
{
 struct vino_channel_settings *VAR_5 = FUNC_2(VAR_2);
 unsigned long VAR_6;

 switch (VAR_4->type) {
 case 129:
  FUNC_0(&VAR_1->input_lock, VAR_6);

  VAR_4->c.left = VAR_5->clipping.left;
  VAR_4->c.top = VAR_5->clipping.top;
  VAR_4->c.width = VAR_5->clipping.right - VAR_5->clipping.left;
  VAR_4->c.height = VAR_5->clipping.bottom - VAR_5->clipping.top;

  FUNC_1(&VAR_1->input_lock, VAR_6);
  break;
 case 128:
 default:
  return -VAR_0;
 }

 return 0;
}
