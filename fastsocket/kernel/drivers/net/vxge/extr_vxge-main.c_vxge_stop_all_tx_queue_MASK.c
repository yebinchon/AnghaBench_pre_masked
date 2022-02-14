
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ tx_steering_type; } ;
struct vxgedev {int no_of_vpath; TYPE_3__* vpaths; TYPE_1__ config; struct net_device* ndev; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int queue_state; } ;
struct TYPE_6__ {TYPE_2__ fifo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;

void FUNC_1(struct vxgedev *VAR_2)
{
 int VAR_3;
 struct net_device *VAR_4 = VAR_2->ndev;

 if (VAR_2->config.tx_steering_type != VAR_0) {
  for (VAR_3 = 0; VAR_3 < VAR_2->no_of_vpath; VAR_3++)
   VAR_2->vpaths[VAR_3].fifo.queue_state = VAR_1;
 }
 FUNC_0(VAR_4);
}
