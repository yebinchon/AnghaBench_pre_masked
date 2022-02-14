
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbip_device {int dummy; } ;
struct vhci_device {struct usbip_device ud; } ;
struct TYPE_4__ {int seqnum; } ;
struct usbip_header {TYPE_1__ base; } ;
struct urb {int status; } ;
struct TYPE_5__ {int lock; int seqnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct urb* FUNC_1 (struct vhci_device*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__* VAR_2 ;
 int FUNC_4 (int ,struct urb*,int ) ;
 int FUNC_5 (int ,struct urb*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (struct urb*) ;
 int FUNC_8 (struct usbip_device*,int ) ;
 int FUNC_9 (struct usbip_header*,struct urb*,int ,int ) ;
 scalar_t__ FUNC_10 (struct usbip_device*,struct urb*) ;
 scalar_t__ FUNC_11 (struct usbip_device*,struct urb*) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_15(struct vhci_device *VAR_4,
      struct usbip_header *VAR_5)
{
 struct usbip_device *VAR_6 = &VAR_4->ud;
 struct urb *VAR_7;


 VAR_7 = FUNC_1(VAR_4, VAR_5->base.seqnum);


 if (!VAR_7) {
  FUNC_12("cannot find a urb of seqnum %u\n",
       VAR_5->base.seqnum);
  FUNC_13("max seqnum %d\n",
     FUNC_0(&VAR_2->seqnum));
  FUNC_8(VAR_6, VAR_1);
  return;
 }



 FUNC_9(VAR_5, VAR_7, VAR_0, 0);



 if (FUNC_11(VAR_6, VAR_7) < 0)
  return;



 if (FUNC_10(VAR_6, VAR_7) < 0)
  return;


 if (VAR_3)
  FUNC_7(VAR_7);


 FUNC_6("now giveback urb %p\n", VAR_7);

 FUNC_2(&VAR_2->lock);
 FUNC_5(FUNC_14(VAR_2), VAR_7);
 FUNC_3(&VAR_2->lock);

 FUNC_4(FUNC_14(VAR_2), VAR_7, VAR_7->status);


 FUNC_6("Leave\n");

 return;
}
