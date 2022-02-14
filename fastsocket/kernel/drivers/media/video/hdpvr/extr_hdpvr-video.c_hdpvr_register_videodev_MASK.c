
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct hdpvr_device {int v4l2_dev; TYPE_1__* video_dev; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device* parent; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,char*) ;
 TYPE_1__* FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (TYPE_1__*,struct hdpvr_device*) ;

int FUNC_5(struct hdpvr_device *VAR_3, struct device *VAR_4,
       int VAR_5)
{

 VAR_3->video_dev = FUNC_2();
 if (!VAR_3->video_dev) {
  FUNC_1(&VAR_3->v4l2_dev, "video_device_alloc() failed\n");
  goto error;
 }

 *(VAR_3->video_dev) = VAR_2;
 FUNC_0(VAR_3->video_dev->name, "Hauppauge HD PVR");
 VAR_3->video_dev->parent = VAR_4;
 FUNC_4(VAR_3->video_dev, VAR_3);

 if (FUNC_3(VAR_3->video_dev, VAR_1, VAR_5)) {
  FUNC_1(&VAR_3->v4l2_dev, "video_device registration failed\n");
  goto error;
 }

 return 0;
error:
 return -VAR_0;
}
