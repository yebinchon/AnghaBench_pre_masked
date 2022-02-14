
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vhci_unlink {int unlink_seqnum; } ;
struct vhci_device {int dummy; } ;
struct TYPE_7__ {int status; } ;
struct TYPE_8__ {TYPE_2__ ret_unlink; } ;
struct TYPE_6__ {int seqnum; } ;
struct usbip_header {TYPE_3__ u; TYPE_1__ base; } ;
struct urb {int status; } ;
struct TYPE_9__ {int lock; } ;


 struct vhci_unlink* FUNC_0 (struct vhci_device*,struct usbip_header*) ;
 int FUNC_1 (struct vhci_unlink*) ;
 struct urb* FUNC_2 (struct vhci_device*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_4__* VAR_0 ;
 int FUNC_5 (int ,struct urb*,int ) ;
 int FUNC_6 (int ,struct urb*) ;
 int FUNC_7 (char*,struct urb*) ;
 int FUNC_8 (struct usbip_header*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_11(struct vhci_device *VAR_1,
      struct usbip_header *VAR_2)
{
 struct vhci_unlink *VAR_3;
 struct urb *VAR_4;

 FUNC_8(VAR_2);

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3) {
  FUNC_9("cannot find the pending unlink %u\n",
       VAR_2->base.seqnum);
  return;
 }

 VAR_4 = FUNC_2(VAR_1, VAR_3->unlink_seqnum);
 if (!VAR_4) {





  FUNC_9("the urb (seqnum %d) was already given backed\n",
       VAR_2->base.seqnum);
 } else {
  FUNC_7("now giveback urb %p\n", VAR_4);


  VAR_4->status = VAR_2->u.ret_unlink.status;
  FUNC_9("%d\n", VAR_4->status);

  FUNC_3(&VAR_0->lock);
  FUNC_6(FUNC_10(VAR_0), VAR_4);
  FUNC_4(&VAR_0->lock);

  FUNC_5(FUNC_10(VAR_0), VAR_4,
        VAR_4->status);
 }

 FUNC_1(VAR_3);

 return;
}
