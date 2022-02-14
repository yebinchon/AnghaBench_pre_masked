
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_channel_settings {int mutex; int fb_queue; int users; } ;
struct file {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vino_channel_settings* FUNC_3 (struct file*) ;
 int FUNC_4 (struct vino_channel_settings*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct vino_channel_settings*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_0)
{
 struct vino_channel_settings *VAR_1 = FUNC_3(VAR_0);
 FUNC_0("close():\n");

 FUNC_1(&VAR_1->mutex);

 VAR_1->users--;

 if (!VAR_1->users) {
  FUNC_6(VAR_1);


  FUNC_4(VAR_1);
  FUNC_5(&VAR_1->fb_queue);
 }

 FUNC_2(&VAR_1->mutex);

 return 0;
}
