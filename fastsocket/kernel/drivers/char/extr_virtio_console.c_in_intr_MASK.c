
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct virtqueue {TYPE_2__* vdev; } ;
struct TYPE_3__ {int hvc; } ;
struct port {TYPE_1__ cons; int waitqueue; int inbuf_lock; int guest_connected; int inbuf; } ;
struct TYPE_4__ {int priv; } ;


 int FUNC_0 (struct port*) ;
 struct port* FUNC_1 (int ,struct virtqueue*) ;
 int FUNC_2 (struct port*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct port*) ;
 int FUNC_6 (struct port*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct virtqueue *VAR_0)
{
 struct port *VAR_1;
 unsigned long VAR_2;

 VAR_1 = FUNC_1(VAR_0->vdev->priv, VAR_0);
 if (!VAR_1)
  return;

 FUNC_7(&VAR_1->inbuf_lock, VAR_2);
 VAR_1->inbuf = FUNC_2(VAR_1);
 if (!VAR_1->guest_connected)
  FUNC_0(VAR_1);


 FUNC_6(VAR_1);

 FUNC_8(&VAR_1->inbuf_lock, VAR_2);

 FUNC_9(&VAR_1->waitqueue);

 if (FUNC_5(VAR_1) && FUNC_4(VAR_1->cons.hvc))
  FUNC_3();
}
