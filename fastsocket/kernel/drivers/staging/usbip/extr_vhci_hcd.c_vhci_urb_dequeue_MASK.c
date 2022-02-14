
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vhci_unlink {int seqnum; int list; int unlink_seqnum; } ;
struct vhci_priv {int seqnum; int list; struct vhci_device* vdev; } ;
struct TYPE_5__ {int tcp_socket; } ;
struct vhci_device {int status; TYPE_2__ ud; int priv_lock; int waitq_tx; int unlink_tx; struct vhci_priv* hcpriv; } ;
struct usb_hcd {int dummy; } ;
struct urb {int status; TYPE_2__ ud; int priv_lock; int waitq_tx; int unlink_tx; struct vhci_priv* hcpriv; } ;
struct TYPE_4__ {int lock; int seqnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vhci_priv*) ;
 struct vhci_unlink* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 TYPE_1__* VAR_3 ;
 int FUNC_7 (struct usb_hcd*,struct vhci_device*,int) ;
 int FUNC_8 (int ,struct vhci_device*,int ) ;
 int FUNC_9 (struct usb_hcd*,struct vhci_device*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct usb_hcd *VAR_4, struct urb *VAR_5, int VAR_6)
{
 unsigned long VAR_7;
 struct vhci_priv *VAR_8;
 struct vhci_device *VAR_9;

 FUNC_13("vhci_hcd: dequeue a urb %p\n", VAR_5);


 FUNC_5(&VAR_3->lock, VAR_7);

 VAR_8 = VAR_5->hcpriv;
 if (!VAR_8) {


  FUNC_6(&VAR_3->lock, VAR_7);
  return 0;
 }

 {
  int VAR_10 = 0;
  VAR_10 = FUNC_7(VAR_4, VAR_5, VAR_6);
  if (VAR_10) {
   FUNC_6(&VAR_3->lock, VAR_7);
   return VAR_10;
  }
 }


 VAR_9 = VAR_8->vdev;

 if (!VAR_9->ud.tcp_socket) {

  unsigned long VAR_11;

  FUNC_5(&VAR_9->priv_lock, VAR_11);

  FUNC_13("vhci_hcd: device %p seems to be disconnected\n",
         VAR_9);
  FUNC_4(&VAR_8->list);
  FUNC_1(VAR_8);
  VAR_5->hcpriv = ((void*)0);

  FUNC_6(&VAR_9->priv_lock, VAR_11);






  FUNC_13("vhci_hcd: vhci_urb_dequeue() gives back urb %p\n",
         VAR_5);

  FUNC_9(VAR_4, VAR_5);

  FUNC_6(&VAR_3->lock, VAR_7);
  FUNC_8(FUNC_14(VAR_3), VAR_5,
        VAR_5->status);
  FUNC_5(&VAR_3->lock, VAR_7);

 } else {

  unsigned long VAR_12;
  struct vhci_unlink *VAR_13;

  FUNC_5(&VAR_9->priv_lock, VAR_12);


  VAR_13 = FUNC_2(sizeof(struct vhci_unlink), VAR_1);
  if (!VAR_13) {
   FUNC_12("malloc vhci_unlink\n");
   FUNC_6(&VAR_9->priv_lock, VAR_12);
   FUNC_6(&VAR_3->lock, VAR_7);
   FUNC_11(&VAR_9->ud, VAR_2);
   return -VAR_0;
  }

  VAR_13->seqnum = FUNC_0(&VAR_3->seqnum);
  if (VAR_13->seqnum == 0xffff)
   FUNC_13("seqnum max\n");

  VAR_13->unlink_seqnum = VAR_8->seqnum;

  FUNC_13("vhci_hcd: device %p seems to be still connected\n",
         VAR_9);



  FUNC_3(&VAR_13->list, &VAR_9->unlink_tx);
  FUNC_15(&VAR_9->waitq_tx);

  FUNC_6(&VAR_9->priv_lock, VAR_12);
 }


 if (!VAR_9->ud.tcp_socket) {

  FUNC_13("vhci_hcd: vhci_urb_dequeue() gives back urb %p\n",
         VAR_5);

  FUNC_9(VAR_4, VAR_5);

  FUNC_6(&VAR_3->lock, VAR_7);
  FUNC_8(FUNC_14(VAR_3), VAR_5,
        VAR_5->status);
  FUNC_5(&VAR_3->lock, VAR_7);
 }

 FUNC_6(&VAR_3->lock, VAR_7);

 FUNC_10("leave\n");
 return 0;
}
