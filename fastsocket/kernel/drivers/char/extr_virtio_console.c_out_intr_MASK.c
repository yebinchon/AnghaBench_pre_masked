
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct virtqueue {TYPE_1__* vdev; } ;
struct port {int waitqueue; } ;
struct TYPE_2__ {int priv; } ;


 struct port* FUNC_0 (int ,struct virtqueue*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct virtqueue *VAR_0)
{
 struct port *VAR_1;

 VAR_1 = FUNC_0(VAR_0->vdev->priv, VAR_0);
 if (!VAR_1)
  return;

 FUNC_1(&VAR_1->waitqueue);
}
