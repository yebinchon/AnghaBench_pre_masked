
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vino_channel_settings {scalar_t__ channel; int mutex; scalar_t__ users; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct vino_channel_settings* FUNC_3 (struct file*) ;
 int FUNC_4 (struct vino_channel_settings*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2)
{
 struct vino_channel_settings *VAR_3 = FUNC_3(VAR_2);
 int VAR_4 = 0;
 FUNC_0("open(): channel = %c\n",
        (VAR_3->channel == VAR_1) ? 'A' : 'B');

 FUNC_1(&VAR_3->mutex);

 if (VAR_3->users) {
  FUNC_0("open(): driver busy\n");
  VAR_4 = -VAR_0;
  goto out;
 }

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4) {
  FUNC_0("open(): vino_acquire_input() failed\n");
  goto out;
 }

 VAR_3->users++;

 out:
 FUNC_2(&VAR_3->mutex);

 FUNC_0("open(): %s!\n", VAR_4 ? "failed" : "complete");

 return VAR_4;
}
