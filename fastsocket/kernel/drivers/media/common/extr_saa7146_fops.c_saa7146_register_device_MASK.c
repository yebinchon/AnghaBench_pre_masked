
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device_shadow {int * lock; } ;
struct video_device {int name; int tvnorms; int (* release ) (struct video_device*) ;int * ioctl_ops; int * fops; } ;
struct saa7146_dev {int name; TYPE_2__* ext_vv_data; int v4l2_lock; } ;
struct TYPE_4__ {int num_stds; TYPE_1__* stds; int ops; } ;
struct TYPE_3__ {int id; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*,int) ;
 struct video_device* FUNC_4 () ;
 int FUNC_5 (struct video_device*) ;
 int FUNC_6 (struct video_device*) ;
 struct video_device_shadow* FUNC_7 (struct video_device*) ;
 int VAR_1 ;
 int FUNC_8 (struct video_device*,int,int) ;
 int FUNC_9 (struct video_device*,struct saa7146_dev*) ;

int FUNC_10(struct video_device **VAR_2, struct saa7146_dev* VAR_3,
       char *VAR_4, int VAR_5)
{
 struct video_device *VAR_6;
 struct video_device_shadow *VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_0(("dev:%p, name:'%s', type:%d\n",VAR_3,VAR_4,VAR_5));


 VAR_6 = FUNC_4();
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_7(VAR_6);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_6->fops = &VAR_1;
 VAR_6->ioctl_ops = &VAR_3->ext_vv_data->ops;
 VAR_6->release = FUNC_6;
 VAR_7->lock = &VAR_3->v4l2_lock;
 VAR_6->tvnorms = 0;
 for (VAR_9 = 0; VAR_9 < VAR_3->ext_vv_data->num_stds; VAR_9++)
  VAR_6->tvnorms |= VAR_3->ext_vv_data->stds[VAR_9].id;
 FUNC_3(VAR_6->name, VAR_4, sizeof(VAR_6->name));
 FUNC_9(VAR_6, VAR_3);

 VAR_8 = FUNC_8(VAR_6, VAR_5, -1);
 if (VAR_8 < 0) {
  FUNC_1(("cannot register v4l2 device. skipping.\n"));
  FUNC_6(VAR_6);
  return VAR_8;
 }

 FUNC_2(("%s: registered device %s [v4l2]\n",
  VAR_3->name, FUNC_5(VAR_6)));

 *VAR_2 = VAR_6;
 return 0;
}
