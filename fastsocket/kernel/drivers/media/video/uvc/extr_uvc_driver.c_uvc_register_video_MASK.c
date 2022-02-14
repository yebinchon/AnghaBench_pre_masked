
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int name; int release; int * fops; int * parent; } ;
struct uvc_streaming {struct video_device* vdev; } ;
struct uvc_device {int nstreams; int name; TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int) ;
 int VAR_4 ;
 int FUNC_3 (struct uvc_streaming*) ;
 struct video_device* FUNC_4 () ;
 int FUNC_5 (struct video_device*) ;
 int FUNC_6 (struct video_device*,int ,int) ;
 int FUNC_7 (struct video_device*,struct uvc_streaming*) ;

__attribute__((used)) static int FUNC_8(struct uvc_device *VAR_5,
  struct uvc_streaming *VAR_6)
{
 struct video_device *VAR_7;
 int VAR_8;




 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8 < 0) {
  FUNC_2(VAR_1, "Failed to initialize the device "
   "(%d).\n", VAR_8);
  return VAR_8;
 }


 VAR_7 = FUNC_4();
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_1, "Failed to allocate video device (%d).\n",
      VAR_8);
  return -VAR_0;
 }





 VAR_7->parent = &VAR_5->intf->dev;
 VAR_7->fops = &VAR_3;
 VAR_7->release = VAR_4;
 FUNC_1(VAR_7->name, VAR_5->name, sizeof VAR_7->name);




 VAR_6->vdev = VAR_7;
 FUNC_7(VAR_7, VAR_6);

 VAR_8 = FUNC_6(VAR_7, VAR_2, -1);
 if (VAR_8 < 0) {
  FUNC_2(VAR_1, "Failed to register video device (%d).\n",
      VAR_8);
  VAR_6->vdev = ((void*)0);
  FUNC_5(VAR_7);
  return VAR_8;
 }

 FUNC_0(&VAR_5->nstreams);
 return 0;
}
