
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sn9c102_device {int state; int kref; int open_mutex; TYPE_1__* v4ldev; scalar_t__ frame_count; scalar_t__ nbuffers; int stream; int io; scalar_t__ users; int wait_open; int probe; } ;
struct file {int f_flags; struct sn9c102_device* private_data; } ;
struct TYPE_2__ {int num; } ;


 int FUNC_0 (int,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_9 ;
 int FUNC_7 (struct sn9c102_device*) ;
 int FUNC_8 (struct sn9c102_device*) ;
 int VAR_10 ;
 int FUNC_9 (struct sn9c102_device*) ;
 int FUNC_10 (int *) ;
 struct sn9c102_device* FUNC_11 (struct file*) ;
 int FUNC_12 (int ,int) ;
 scalar_t__ FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_11)
{
 struct sn9c102_device* VAR_12;
 int VAR_13 = 0;
 if (!FUNC_2(&VAR_9))
  return -VAR_3;

 VAR_12 = FUNC_11(VAR_11);

 if (FUNC_13(&VAR_12->probe)) {
  FUNC_10(&VAR_9);
  return -VAR_3;
 }

 FUNC_3(&VAR_12->kref);




 if (FUNC_5(&VAR_12->open_mutex)) {
  FUNC_4(&VAR_12->kref, VAR_10);
  FUNC_10(&VAR_9);
  return -VAR_3;
 }

 if (VAR_12->state & VAR_0) {
  FUNC_0(1, "Device not present");
  VAR_13 = -VAR_2;
  goto out;
 }

 if (VAR_12->users) {
  FUNC_0(2, "Device /dev/video%d is already in use",
         VAR_12->v4ldev->num);
  FUNC_0(3, "Simultaneous opens are not supported");




  if ((VAR_11->f_flags & VAR_7) ||
      (VAR_11->f_flags & VAR_6)) {
   VAR_13 = -VAR_4;
   goto out;
  }
  FUNC_0(2, "A blocking open() has been requested. Wait for the "
         "device to be released...");
  FUNC_10(&VAR_9);






  VAR_13 = FUNC_12(VAR_12->wait_open,
      (VAR_12->state & VAR_0)
        || !VAR_12->users);
  FUNC_1(&VAR_9);
  if (VAR_13)
   goto out;
  if (VAR_12->state & VAR_0) {
   VAR_13 = -VAR_2;
   goto out;
  }
 }

 if (VAR_12->state & VAR_1) {
  VAR_13 = FUNC_8(VAR_12);
  if (VAR_13) {
   FUNC_0(1, "Initialization failed again. "
          "I will retry on next open().");
   goto out;
  }
  VAR_12->state &= ~VAR_1;
 }

 if ((VAR_13 = FUNC_9(VAR_12)))
  goto out;

 VAR_11->private_data = VAR_12;
 VAR_12->users++;
 VAR_12->io = VAR_5;
 VAR_12->stream = VAR_8;
 VAR_12->nbuffers = 0;
 VAR_12->frame_count = 0;
 FUNC_7(VAR_12);

 FUNC_0(3, "Video device /dev/video%d is open", VAR_12->v4ldev->num);

out:
 FUNC_6(&VAR_12->open_mutex);
 if (VAR_13)
  FUNC_4(&VAR_12->kref, VAR_10);

 FUNC_10(&VAR_9);
 return VAR_13;
}
