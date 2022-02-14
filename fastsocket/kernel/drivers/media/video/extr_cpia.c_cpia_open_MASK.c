
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct file {struct video_device* private_data; } ;
struct TYPE_5__ {int * data; } ;
struct cam_data {scalar_t__ open_count; int first_frame; TYPE_3__* ops; int busy_lock; int * raw_image; TYPE_2__ decompressed_frame; scalar_t__ mmap_kludge; TYPE_1__* proc_entry; int lowlevel_data; } ;
struct TYPE_6__ {int (* close ) (int ) ;scalar_t__ (* open ) (int ) ;int owner; } ;
struct TYPE_4__ {int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct cam_data*) ;
 int FUNC_6 (int *,int ) ;
 void* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct video_device* FUNC_12 (struct file*) ;
 struct cam_data* FUNC_13 (struct video_device*) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_7)
{
 struct video_device *VAR_8 = FUNC_12(VAR_7);
 struct cam_data *VAR_9 = FUNC_13(VAR_8);
 int VAR_10;

 if (!VAR_9) {
  FUNC_0("Internal error, cam_data not found!\n");
  return -VAR_4;
 }

 if (VAR_9->open_count > 0) {
  FUNC_0("Camera already open\n");
  return -VAR_2;
 }

 if (!FUNC_11(VAR_9->ops->owner))
  return -VAR_4;

 FUNC_2(&VAR_9->busy_lock);
 VAR_10 = -VAR_5;
 if (!VAR_9->raw_image) {
  VAR_9->raw_image = FUNC_7(VAR_1);
  if (!VAR_9->raw_image)
   goto oops;
 }

 if (!VAR_9->decompressed_frame.data) {
  VAR_9->decompressed_frame.data = FUNC_7(VAR_0);
  if (!VAR_9->decompressed_frame.data)
   goto oops;
 }


 VAR_10 = -VAR_4;
 if (VAR_9->ops->open(VAR_9->lowlevel_data))
  goto oops;


 if ((VAR_10 = FUNC_5(VAR_9)) != 0) {
  VAR_9->ops->close(VAR_9->lowlevel_data);
  goto oops;
 }

 VAR_10 = -VAR_3;
 if(FUNC_8(VAR_6))
  goto oops;


 if(VAR_9->proc_entry)
  VAR_9->proc_entry->uid = FUNC_1();


 VAR_9->first_frame = 1;


 VAR_9->mmap_kludge = 0;

 ++VAR_9->open_count;
 VAR_7->private_data = VAR_8;
 FUNC_3(&VAR_9->busy_lock);
 return 0;

 oops:
 if (VAR_9->decompressed_frame.data) {
  FUNC_6(VAR_9->decompressed_frame.data, VAR_0);
  VAR_9->decompressed_frame.data = ((void*)0);
 }
 if (VAR_9->raw_image) {
  FUNC_6(VAR_9->raw_image, VAR_1);
  VAR_9->raw_image = ((void*)0);
 }
 FUNC_3(&VAR_9->busy_lock);
 FUNC_4(VAR_9->ops);
 return VAR_10;
}
