
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wait_queue_t ;
struct TYPE_2__ {int frame_wait_queue; } ;
struct vino_channel_settings {TYPE_1__ fb_queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct vino_channel_settings *VAR_2)
{
 wait_queue_t VAR_3;
 int VAR_4 = 0;

 FUNC_1("vino_wait_for_frame():\n");

 FUNC_2(&VAR_3, VAR_1);

 FUNC_0(&VAR_2->fb_queue.frame_wait_queue, &VAR_3);



 FUNC_5(FUNC_3(100));

 if (FUNC_6(VAR_1))
  VAR_4 = -VAR_0;

 FUNC_4(&VAR_2->fb_queue.frame_wait_queue, &VAR_3);

 FUNC_1("vino_wait_for_frame(): waiting for frame %s\n",
  VAR_4 ? "failed" : "ok");

 return VAR_4;
}
