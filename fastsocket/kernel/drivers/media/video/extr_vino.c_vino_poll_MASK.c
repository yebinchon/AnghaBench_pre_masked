
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frame_wait_queue; } ;
struct vino_channel_settings {TYPE_1__ fb_queue; } ;
struct file {int dummy; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct file*,int *,int *) ;
 struct vino_channel_settings* FUNC_2 (struct file*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,unsigned int*) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_3, poll_table *VAR_4)
{
 struct vino_channel_settings *VAR_5 = FUNC_2(VAR_3);
 unsigned int VAR_6;
 unsigned int VAR_7 = 0;




 FUNC_0("poll():\n");

 if (FUNC_3(&VAR_5->fb_queue, &VAR_6)) {
  FUNC_0("poll(): vino_queue_get_outgoing() failed\n");
  VAR_7 = VAR_0;
  goto error;
 }
 if (VAR_6 > 0)
  goto over;

 FUNC_1(VAR_3, &VAR_5->fb_queue.frame_wait_queue, VAR_4);

 if (FUNC_3(&VAR_5->fb_queue, &VAR_6)) {
  FUNC_0("poll(): vino_queue_get_outgoing() failed\n");
  VAR_7 = VAR_0;
  goto error;
 }

over:
 FUNC_0("poll(): data %savailable\n",
  (VAR_6 > 0) ? "" : "not ");

 if (VAR_6 > 0)
  VAR_7 = VAR_1 | VAR_2;

error:
 return VAR_7;
}
