
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hvc; int list; } ;
struct port {int guest_connected; int host_connected; int kref; int name; int debugfs_file; int cdev; TYPE_3__* dev; TYPE_2__* portdev; TYPE_1__ cons; int inbuf_lock; int waitqueue; int list; } ;
struct TYPE_8__ {int class; } ;
struct TYPE_7__ {int devt; int kobj; } ;
struct TYPE_6__ {int ports_lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct port*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 TYPE_4__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (struct port*) ;
 int FUNC_9 (struct port*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct port *VAR_4)
{
 FUNC_10(&VAR_4->portdev->ports_lock);
 FUNC_7(&VAR_4->list);
 FUNC_11(&VAR_4->portdev->ports_lock);

 FUNC_10(&VAR_4->inbuf_lock);
 if (VAR_4->guest_connected) {

  FUNC_9(VAR_4);


  VAR_4->guest_connected = 0;
  VAR_4->host_connected = 0;

  FUNC_13(&VAR_4->waitqueue);
 }
 FUNC_11(&VAR_4->inbuf_lock);

 if (FUNC_4(VAR_4)) {
  FUNC_10(&VAR_1);
  FUNC_7(&VAR_4->cons.list);
  FUNC_11(&VAR_1);
  FUNC_3(VAR_4->cons.hvc);
 }

 FUNC_8(VAR_4);






 VAR_4->portdev = ((void*)0);

 FUNC_12(&VAR_4->dev->kobj, &VAR_2);
 FUNC_2(VAR_0.class, VAR_4->dev->devt);
 FUNC_0(VAR_4->cdev);

 FUNC_1(VAR_4->debugfs_file);
 FUNC_5(VAR_4->name);






 FUNC_6(&VAR_4->kref, VAR_3);
}
