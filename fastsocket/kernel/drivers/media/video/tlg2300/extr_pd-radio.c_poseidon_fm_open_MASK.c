
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ pre_emphasis; int users; } ;
struct poseidon {int state; int lock; int kref; TYPE_1__ radio_data; int interface; } ;
struct file {struct poseidon* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct poseidon*) ;
 int FUNC_4 (struct video_device*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct video_device* FUNC_7 (struct file*) ;
 struct poseidon* FUNC_8 (struct video_device*) ;

__attribute__((used)) static int FUNC_9(struct file *VAR_6)
{
 struct video_device *VAR_7 = FUNC_7(VAR_6);
 struct poseidon *VAR_8 = FUNC_8(VAR_7);
 int VAR_9 = 0;

 if (!VAR_8)
  return -1;

 FUNC_1(&VAR_8->lock);
 if (VAR_8->state & VAR_2) {
  VAR_9 = -VAR_1;
  goto out;
 }

 if (VAR_8->state && !(VAR_8->state & VAR_3)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 FUNC_5(VAR_8->interface);
 if (0 == VAR_8->state) {

  if (VAR_8->radio_data.pre_emphasis == 0)
   VAR_8->radio_data.pre_emphasis = VAR_4;
  FUNC_4(VAR_7, VAR_5);

  VAR_9 = FUNC_3(VAR_8);
  if (VAR_9 < 0) {
   FUNC_6(VAR_8->interface);
   goto out;
  }
  VAR_8->state |= VAR_3;
 }
 VAR_8->radio_data.users++;
 FUNC_0(&VAR_8->kref);
 VAR_6->private_data = VAR_8;
out:
 FUNC_2(&VAR_8->lock);
 return VAR_9;
}
