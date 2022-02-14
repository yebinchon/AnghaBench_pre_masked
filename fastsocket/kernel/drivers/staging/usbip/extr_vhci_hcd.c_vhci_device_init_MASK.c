
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int unusable; int reset; int shutdown; } ;
struct TYPE_4__ {TYPE_1__ eh_ops; int lock; int status; int side; int tcp_tx; int tcp_rx; } ;
struct vhci_device {TYPE_2__ ud; int waitq_tx; int priv_lock; int unlink_rx; int unlink_tx; int priv_tx; int priv_rx; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vhci_device*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_6(struct vhci_device *VAR_7)
{
 FUNC_2(VAR_7, 0, sizeof(*VAR_7));

 FUNC_5(&VAR_7->ud.tcp_rx, "vhci_rx", VAR_4);
 FUNC_5(&VAR_7->ud.tcp_tx, "vhci_tx", VAR_6);

 VAR_7->ud.side = VAR_0;
 VAR_7->ud.status = VAR_1;

 FUNC_3(&VAR_7->ud.lock);

 FUNC_0(&VAR_7->priv_rx);
 FUNC_0(&VAR_7->priv_tx);
 FUNC_0(&VAR_7->unlink_tx);
 FUNC_0(&VAR_7->unlink_rx);

 FUNC_3(&VAR_7->priv_lock);

 FUNC_1(&VAR_7->waitq_tx);

 VAR_7->ud.eh_ops.shutdown = VAR_5;
 VAR_7->ud.eh_ops.reset = VAR_2;
 VAR_7->ud.eh_ops.unusable = VAR_3;

 FUNC_4(&VAR_7->ud);
}
