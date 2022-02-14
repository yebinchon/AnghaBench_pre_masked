
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hdpvr_video_info {int fps; int height; int width; } ;
struct TYPE_2__ {int video_input; } ;
struct hdpvr_device {scalar_t__ status; TYPE_1__ options; int v4l2_dev; int worker; int workqueue; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct hdpvr_video_info* FUNC_1 (struct hdpvr_device*) ;
 int FUNC_2 (struct hdpvr_device*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct hdpvr_video_info*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int,int,int,int ,int *,int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int *,char*,...) ;

__attribute__((used)) static int FUNC_9(struct hdpvr_device *VAR_8)
{
 int VAR_9;
 struct hdpvr_video_info *VAR_10;

 if (VAR_8->status == VAR_5)
  return 0;
 else if (VAR_8->status != VAR_4)
  return -VAR_1;

 VAR_10 = FUNC_1(VAR_8);

 if (VAR_10) {
  FUNC_8(VAR_2, VAR_6, &VAR_8->v4l2_dev,
    "video signal: %dx%d@%dhz\n", VAR_10->width,
    VAR_10->height, VAR_10->fps);
  FUNC_3(VAR_10);


  VAR_9 = FUNC_6(VAR_8->udev,
          FUNC_7(VAR_8->udev, 0),
          0xb8, 0x38, 0x1, 0, ((void*)0), 0, 8000);
  FUNC_8(VAR_2, VAR_6, &VAR_8->v4l2_dev,
    "encoder start control request returned %d\n", VAR_9);

  FUNC_2(VAR_8, VAR_0, 0x00);

  FUNC_0(&VAR_8->worker, VAR_7);
  FUNC_5(VAR_8->workqueue, &VAR_8->worker);

  FUNC_8(VAR_2, VAR_6, &VAR_8->v4l2_dev,
    "streaming started\n");
  VAR_8->status = VAR_5;

  return 0;
 }
 FUNC_4(250);
 FUNC_8(VAR_3, VAR_6, &VAR_8->v4l2_dev,
   "no video signal at input %d\n", VAR_8->options.video_input);
 return -VAR_1;
}
