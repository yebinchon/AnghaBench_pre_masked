
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ports_device {int out_vqs; int in_vqs; TYPE_2__* vdev; } ;
struct TYPE_4__ {TYPE_1__* config; } ;
struct TYPE_3__ {int (* del_vqs ) (TYPE_2__*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct ports_device *VAR_0)
{
 VAR_0->vdev->config->del_vqs(VAR_0->vdev);
 FUNC_0(VAR_0->in_vqs);
 FUNC_0(VAR_0->out_vqs);
}
