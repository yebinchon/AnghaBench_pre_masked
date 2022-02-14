
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {TYPE_1__* vdev; } ;
struct ports_device {int control_work; } ;
struct TYPE_2__ {struct ports_device* priv; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct virtqueue *VAR_0)
{
 struct ports_device *VAR_1;

 VAR_1 = VAR_0->vdev->priv;
 FUNC_0(&VAR_1->control_work);
}
