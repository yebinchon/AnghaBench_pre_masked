
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtio_device {TYPE_1__* config; } ;
struct TYPE_2__ {int (* del_vqs ) (struct virtio_device*) ;int (* reset ) (struct virtio_device*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct virtio_device*) ;
 int FUNC_2 (struct virtio_device*) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_3(struct virtio_device *VAR_2)
{
 VAR_2->config->reset(VAR_2);
 FUNC_0(&VAR_0);
 VAR_2->config->del_vqs(VAR_2);
 VAR_1 = ((void*)0);
}
