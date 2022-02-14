
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zc0301_device {int state; int kref; int open_mutex; TYPE_1__* v4ldev; scalar_t__ frame_count; scalar_t__ nbuffers; int stream; int io; scalar_t__ users; int wait_open; int probe; } ;
struct file {int f_flags; struct zc0301_device* private_data; } ;
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
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct zc0301_device* FUNC_8 (struct file*) ;
 int FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int *) ;
 int VAR_10 ;
 int FUNC_11 (struct zc0301_device*) ;
 int FUNC_12 (struct zc0301_device*) ;
 int VAR_11 ;
 int FUNC_13 (struct zc0301_device*) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_12)
{
 struct zc0301_device* VAR_13;
 int VAR_14 = 0;

 if (!FUNC_2(&VAR_10))
  return -VAR_2;

 VAR_13 = FUNC_8(VAR_12);

 if (FUNC_10(&VAR_13->probe)) {
  FUNC_7(&VAR_10);
  return -VAR_4;
 }

 FUNC_3(&VAR_13->kref);

 if (FUNC_5(&VAR_13->open_mutex)) {
  FUNC_4(&VAR_13->kref, VAR_11);
  FUNC_7(&VAR_10);
  return -VAR_4;
 }

 if (VAR_13->state & VAR_0) {
  FUNC_0(1, "Device not present");
  VAR_14 = -VAR_3;
  goto out;
 }

 if (VAR_13->users) {
  FUNC_0(2, "Device /dev/video%d is busy...", VAR_13->v4ldev->num);
  FUNC_0(3, "Simultaneous opens are not supported");
  if ((VAR_12->f_flags & VAR_8) ||
      (VAR_12->f_flags & VAR_7)) {
   VAR_14 = -VAR_5;
   goto out;
  }
  FUNC_0(2, "A blocking open() has been requested. Wait for the "
         "device to be released...");
  FUNC_7(&VAR_10);
  VAR_14 = FUNC_9(VAR_13->wait_open,
      (VAR_13->state & VAR_0)
        || !VAR_13->users);
  FUNC_1(&VAR_10);
  if (VAR_14)
   goto out;
  if (VAR_13->state & VAR_0) {
   VAR_14 = -VAR_3;
   goto out;
  }
 }

 if (VAR_13->state & VAR_1) {
  VAR_14 = FUNC_12(VAR_13);
  if (VAR_14) {
   FUNC_0(1, "Initialization failed again. "
          "I will retry on next open().");
   goto out;
  }
  VAR_13->state &= ~VAR_1;
 }

 if ((VAR_14 = FUNC_13(VAR_13)))
  goto out;

 VAR_12->private_data = VAR_13;
 VAR_13->users++;
 VAR_13->io = VAR_6;
 VAR_13->stream = VAR_9;
 VAR_13->nbuffers = 0;
 VAR_13->frame_count = 0;
 FUNC_11(VAR_13);

 FUNC_0(3, "Video device /dev/video%d is open", VAR_13->v4ldev->num);

out:
 FUNC_6(&VAR_13->open_mutex);
 if (VAR_14)
  FUNC_4(&VAR_13->kref, VAR_11);
 FUNC_7(&VAR_10);
 return VAR_14;
}
