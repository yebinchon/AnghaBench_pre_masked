
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vhci_priv {int seqnum; int list; struct urb* urb; struct vhci_device* vdev; } ;
struct vhci_device {int priv_lock; int waitq_tx; int priv_tx; int ud; } ;
struct urb {void* hcpriv; TYPE_2__* dev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int seqnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*) ;
 struct vhci_device* FUNC_3 (TYPE_2__*) ;
 struct vhci_priv* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 TYPE_1__* VAR_2 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct urb *VAR_3)
{
 struct vhci_device *VAR_4 = FUNC_3(VAR_3->dev);
 struct vhci_priv *VAR_5;
 unsigned long VAR_6;

 if (!VAR_4) {
  FUNC_2("could not get virtual device");

  return;
 }

 VAR_5 = FUNC_4(sizeof(struct vhci_priv), VAR_0);

 FUNC_6(&VAR_4->priv_lock, VAR_6);

 if (!VAR_5) {
  FUNC_1(&VAR_3->dev->dev, "malloc vhci_priv\n");
  FUNC_7(&VAR_4->priv_lock, VAR_6);
  FUNC_8(&VAR_4->ud, VAR_1);
  return;
 }

 VAR_5->seqnum = FUNC_0(&VAR_2->seqnum);
 if (VAR_5->seqnum == 0xffff)
  FUNC_9("seqnum max\n");

 VAR_5->vdev = VAR_4;
 VAR_5->urb = VAR_3;

 VAR_3->hcpriv = (void *) VAR_5;


 FUNC_5(&VAR_5->list, &VAR_4->priv_tx);

 FUNC_10(&VAR_4->waitq_tx);
 FUNC_7(&VAR_4->priv_lock, VAR_6);
}
