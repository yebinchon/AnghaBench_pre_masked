
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int dummy; } ;
struct file {struct cpia2_fh* private_data; } ;
struct cpia2_fh {int open_count; scalar_t__ prio; int busy_lock; scalar_t__ present; scalar_t__ mmapped; } ;
struct camera_data {int open_count; scalar_t__ prio; int busy_lock; scalar_t__ present; scalar_t__ mmapped; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cpia2_fh*) ;
 int FUNC_1 (struct cpia2_fh*) ;
 int FUNC_2 (struct cpia2_fh*) ;
 int FUNC_3 (struct cpia2_fh*) ;
 int FUNC_4 (struct cpia2_fh*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__*,scalar_t__*) ;
 struct video_device* FUNC_8 (struct file*) ;
 struct cpia2_fh* FUNC_9 (struct video_device*) ;
 int FUNC_10 (struct video_device*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_1)
{
 struct video_device *VAR_2 = FUNC_8(VAR_1);
 struct camera_data *VAR_3 = FUNC_9(VAR_2);
 struct cpia2_fh *VAR_4 = VAR_1->private_data;

 FUNC_5(&VAR_3->busy_lock);

 if (VAR_3->present &&
     (VAR_3->open_count == 1
      || VAR_4->prio == VAR_0
     )) {
  FUNC_3(VAR_3);

  if(VAR_3->open_count == 1) {

   FUNC_1(VAR_3);

   FUNC_2(VAR_3);
   FUNC_0(VAR_3);
  }
 }

 {
  if(VAR_4->mmapped)
   VAR_3->mmapped = 0;
  FUNC_7(&VAR_3->prio,&VAR_4->prio);
  VAR_1->private_data = ((void*)0);
  FUNC_4(VAR_4);
 }

 if (--VAR_3->open_count == 0) {
  FUNC_0(VAR_3);
  if (!VAR_3->present) {
   FUNC_10(VAR_2);
   FUNC_6(&VAR_3->busy_lock);
   FUNC_4(VAR_3);
   return 0;
  }
 }

 FUNC_6(&VAR_3->busy_lock);

 return 0;
}
