
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vino_framebuffer {scalar_t__ state; int state_lock; } ;
struct vino_channel_settings {int dummy; } ;
struct TYPE_2__ {int vino_lock; int input_lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct vino_channel_settings*,struct vino_framebuffer*) ;
 int FUNC_3 (struct vino_channel_settings*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int FUNC_4(struct vino_channel_settings *VAR_3,
   struct vino_framebuffer *VAR_4)
{
 int VAR_5 = 0;
 unsigned long VAR_6, VAR_7;

 FUNC_0(&VAR_4->state_lock, VAR_6);

 if (VAR_4->state == VAR_1)
  VAR_5 = -VAR_0;
 VAR_4->state = VAR_1;

 FUNC_1(&VAR_4->state_lock, VAR_6);

 if (VAR_5)
  return VAR_5;

 FUNC_0(&VAR_2->vino_lock, VAR_6);
 FUNC_0(&VAR_2->input_lock, VAR_7);

 FUNC_2(VAR_3, VAR_4);
 FUNC_3(VAR_3);

 FUNC_1(&VAR_2->input_lock, VAR_7);
 FUNC_1(&VAR_2->vino_lock, VAR_6);

 return VAR_5;
}
