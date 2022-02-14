
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct soc_camera_host {TYPE_2__* ops; } ;
struct TYPE_6__ {int parent; } ;
struct TYPE_4__ {int stream; } ;
struct soc_camera_device {TYPE_3__ dev; TYPE_1__ vb_vidq; struct file* streamer; } ;
struct file {struct soc_camera_device* private_data; } ;
typedef int poll_table ;
struct TYPE_5__ {unsigned int (* poll ) (struct file*,int *) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 unsigned int FUNC_2 (struct file*,int *) ;
 struct soc_camera_host* FUNC_3 (int ) ;

__attribute__((used)) static unsigned int FUNC_4(struct file *VAR_2, poll_table *VAR_3)
{
 struct soc_camera_device *VAR_4 = VAR_2->private_data;
 struct soc_camera_host *VAR_5 = FUNC_3(VAR_4->dev.parent);

 if (VAR_4->streamer != VAR_2)
  return -VAR_0;

 if (FUNC_1(&VAR_4->vb_vidq.stream)) {
  FUNC_0(&VAR_4->dev, "Trying to poll with no queued buffers!\n");
  return VAR_1;
 }

 return VAR_5->ops->poll(VAR_2, VAR_3);
}
