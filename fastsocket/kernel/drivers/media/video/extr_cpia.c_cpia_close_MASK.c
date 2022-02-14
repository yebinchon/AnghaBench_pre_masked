
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
struct cam_data {scalar_t__ open_count; TYPE_3__* ops; scalar_t__ frame_buf; TYPE_2__ decompressed_frame; int * raw_image; int lowlevel_data; int frame; TYPE_1__* proc_entry; } ;
struct TYPE_6__ {int (* close ) (int ) ;} ;
struct TYPE_4__ {scalar_t__ uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cam_data*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct cam_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cam_data*) ;
 int FUNC_4 (struct cam_data*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct cam_data*) ;
 int FUNC_8 (int ) ;
 struct cam_data* FUNC_9 (struct video_device*) ;

__attribute__((used)) static int FUNC_10(struct file *VAR_3)
{
 struct video_device *VAR_4 = VAR_3->private_data;
 struct cam_data *VAR_5 = FUNC_9(VAR_4);

 if (VAR_5->ops) {

  if(VAR_5->proc_entry)
   VAR_5->proc_entry->uid = 0;


  FUNC_7(VAR_5);


  FUNC_3(VAR_5);


  FUNC_0(VAR_5, VAR_0, 0, 0, 0, 0);


  FUNC_2(VAR_5->frame);


  VAR_5->ops->close(VAR_5->lowlevel_data);

  FUNC_5(VAR_5->ops);
 }

 if (--VAR_5->open_count == 0) {

  if (VAR_5->raw_image) {
   FUNC_6(VAR_5->raw_image, VAR_2);
   VAR_5->raw_image = ((void*)0);
  }

  if (VAR_5->decompressed_frame.data) {
   FUNC_6(VAR_5->decompressed_frame.data, VAR_1);
   VAR_5->decompressed_frame.data = ((void*)0);
  }

  if (VAR_5->frame_buf)
   FUNC_1(VAR_5);

  if (!VAR_5->ops)
   FUNC_4(VAR_5);
 }
 VAR_3->private_data = ((void*)0);

 return 0;
}
