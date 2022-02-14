
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct video_device_shadow {int * lock; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int colorspace; int height; int width; } ;
struct soc_camera_link {int (* add_device ) (struct soc_camera_link*,TYPE_3__*) ;int regulators; int num_regulators; int (* del_device ) (struct soc_camera_link*) ;scalar_t__ board_info; scalar_t__ module_name; int (* reset ) (int ) ;} ;
struct soc_camera_host {TYPE_2__* ops; } ;
struct TYPE_7__ {int kobj; } ;
struct soc_camera_device {int vdev; int video_lock; TYPE_3__ dev; int field; int colorspace; int user_height; int user_width; int pdev; } ;
struct device {TYPE_1__* driver; int kobj; int parent; } ;
struct TYPE_6__ {int (* add ) (struct soc_camera_device*) ;int (* remove ) (struct soc_camera_device*) ;} ;
struct TYPE_5__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct soc_camera_device*) ;
 int FUNC_11 (struct soc_camera_device*) ;
 int FUNC_12 (struct soc_camera_device*,struct soc_camera_link*) ;
 int FUNC_13 (struct soc_camera_device*) ;
 int FUNC_14 (struct soc_camera_device*,struct soc_camera_link*,int) ;
 struct v4l2_subdev* FUNC_15 (struct soc_camera_device*) ;
 int FUNC_16 (struct soc_camera_device*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct soc_camera_device*) ;
 int FUNC_19 (struct soc_camera_link*,TYPE_3__*) ;
 int FUNC_20 (struct soc_camera_link*) ;
 int FUNC_21 (struct soc_camera_device*) ;
 int FUNC_22 (struct soc_camera_link*) ;
 int FUNC_23 (struct soc_camera_device*) ;
 scalar_t__ FUNC_24 (int *,int *,char*) ;
 struct device* FUNC_25 (struct soc_camera_device*) ;
 struct soc_camera_device* FUNC_26 (struct device*) ;
 struct soc_camera_host* FUNC_27 (int ) ;
 struct soc_camera_link* FUNC_28 (struct soc_camera_device*) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (struct v4l2_subdev*,int ,int ,struct v4l2_mbus_framefmt*) ;
 int VAR_3 ;
 int FUNC_31 (struct soc_camera_device*) ;
 int FUNC_32 (int ) ;
 struct video_device_shadow* FUNC_33 (int ) ;

__attribute__((used)) static int FUNC_34(struct device *VAR_4)
{
 struct soc_camera_device *VAR_5 = FUNC_26(VAR_4);
 struct soc_camera_host *VAR_6 = FUNC_27(VAR_4->parent);
 struct soc_camera_link *VAR_7 = FUNC_28(VAR_5);
 struct device *VAR_8 = ((void*)0);
 struct v4l2_subdev *VAR_9;
 struct v4l2_mbus_framefmt VAR_10;
 struct video_device_shadow *VAR_11;
 int VAR_12;

 FUNC_1(VAR_4, "Probing %s\n", FUNC_2(VAR_4));

 VAR_12 = FUNC_8(VAR_5->pdev, VAR_7->num_regulators,
     VAR_7->regulators);
 if (VAR_12 < 0)
  goto ereg;

 VAR_12 = FUNC_14(VAR_5, VAR_7, 1);
 if (VAR_12 < 0)
  goto epower;


 if (VAR_7->reset)
  VAR_7->reset(VAR_5->pdev);

 VAR_12 = VAR_6->ops->add(VAR_5);
 if (VAR_12 < 0)
  goto eadd;


 VAR_12 = FUNC_31(VAR_5);
 if (VAR_12 < 0)
  goto evdc;


 if (VAR_7->board_info) {
  VAR_12 = FUNC_12(VAR_5, VAR_7);
  if (VAR_12 < 0)
   goto eadddev;
 } else if (!VAR_7->add_device || !VAR_7->del_device) {
  VAR_12 = -VAR_0;
  goto eadddev;
 } else {
  if (VAR_7->module_name)
   VAR_12 = FUNC_9(VAR_7->module_name);

  VAR_12 = VAR_7->add_device(VAR_7, &VAR_5->dev);
  if (VAR_12 < 0)
   goto eadddev;





  VAR_8 = FUNC_25(VAR_5);
  if (!VAR_8 || !VAR_8->driver || !FUNC_0(VAR_8) ||
      !FUNC_29(VAR_8->driver->owner)) {
   VAR_7->del_device(VAR_7);
   goto enodrv;
  }
 }


 VAR_12 = FUNC_13(VAR_5);
 if (VAR_12 < 0)
  goto eiufmt;

 VAR_5->field = VAR_1;

 VAR_11 = FUNC_33(VAR_5->vdev);
 VAR_11->lock = &VAR_5->video_lock;






 FUNC_5(&VAR_5->video_lock);

 VAR_12 = FUNC_16(VAR_5);
 if (VAR_12 < 0)
  goto evidstart;


 VAR_9 = FUNC_15(VAR_5);
 if (!FUNC_30(VAR_9, VAR_3, VAR_2, &VAR_10)) {
  VAR_5->user_width = VAR_10.width;
  VAR_5->user_height = VAR_10.height;
  VAR_5->colorspace = VAR_10.colorspace;
  VAR_5->field = VAR_10.field;
 }


 if (FUNC_24(&VAR_5->dev.kobj, &FUNC_25(VAR_5)->kobj,
         "control"))
  FUNC_3(&VAR_5->dev, "Failed creating the control symlink\n");

 VAR_6->ops->remove(VAR_5);

 FUNC_14(VAR_5, VAR_7, 0);

 FUNC_6(&VAR_5->video_lock);

 return 0;

evidstart:
 FUNC_6(&VAR_5->video_lock);
 FUNC_11(VAR_5);
eiufmt:
 if (VAR_7->board_info) {
  FUNC_10(VAR_5);
 } else {
  VAR_7->del_device(VAR_7);
  FUNC_4(VAR_8->driver->owner);
 }
enodrv:
eadddev:
 FUNC_32(VAR_5->vdev);
evdc:
 VAR_6->ops->remove(VAR_5);
eadd:
 FUNC_14(VAR_5, VAR_7, 0);
epower:
 FUNC_7(VAR_7->num_regulators, VAR_7->regulators);
ereg:
 return VAR_12;
}
