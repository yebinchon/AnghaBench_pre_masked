
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * bus; } ;
struct virtio_device {int index; TYPE_2__ dev; int vqs; TYPE_1__* config; } ;
struct TYPE_4__ {int (* reset ) (struct virtio_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct virtio_device*,int ) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (struct virtio_device*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_6(struct virtio_device *VAR_5)
{
 int VAR_6;

 VAR_5->dev.bus = &VAR_3;


 VAR_6 = FUNC_4(&VAR_4, 0, 0, VAR_0);
 if (VAR_6 < 0)
  goto out;

 VAR_5->index = VAR_6;
 FUNC_2(&VAR_5->dev, "virtio%u", VAR_5->index);



 VAR_5->config->reset(VAR_5);


 FUNC_1(VAR_5, VAR_1);

 FUNC_0(&VAR_5->vqs);



 VAR_6 = FUNC_3(&VAR_5->dev);
out:
 if (VAR_6)
  FUNC_1(VAR_5, VAR_2);
 return VAR_6;
}
