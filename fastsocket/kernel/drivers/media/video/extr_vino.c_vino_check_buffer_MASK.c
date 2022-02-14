
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vino_framebuffer {int state; scalar_t__ data_format; int state_lock; } ;
struct vino_channel_settings {int dummy; } ;
struct TYPE_2__ {int vino_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct vino_channel_settings*) ;
 int FUNC_4 (struct vino_framebuffer*) ;
 int FUNC_5 (struct vino_channel_settings*) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (struct vino_framebuffer*) ;

__attribute__((used)) static int FUNC_7(struct vino_channel_settings *VAR_6,
        struct vino_framebuffer *VAR_7)
{
 int VAR_8 = 0;
 unsigned long VAR_9;

 FUNC_0("vino_check_buffer():\n");

 FUNC_1(&VAR_7->state_lock, VAR_9);
 switch (VAR_7->state) {
 case 129:
  VAR_8 = -VAR_1;
  break;
 case 128:
  FUNC_6(VAR_7);
  VAR_7->state = VAR_3;
  break;
 default:
  VAR_8 = -VAR_0;
 }
 FUNC_2(&VAR_7->state_lock, VAR_9);

 if (!VAR_8) {
  if (VAR_5
      && (VAR_7->data_format == VAR_2)) {
   FUNC_4(VAR_7);
  }
 } else if (VAR_8 && (VAR_8 != -VAR_0)) {
  FUNC_0("vino_check_buffer(): buffer not ready\n");

  FUNC_1(&VAR_4->vino_lock, VAR_9);
  FUNC_5(VAR_6);
  FUNC_3(VAR_6);
  FUNC_2(&VAR_4->vino_lock, VAR_9);
 }

 return VAR_8;
}
