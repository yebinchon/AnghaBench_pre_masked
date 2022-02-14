
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usb_device {int dummy; } ;
struct urb {int interval; struct u132* hcpriv; int pipe; TYPE_1__* ep; } ;
struct u132_udev {int* endp_number_in; int* endp_number_out; int usb_device; } ;
struct u132_ring {int length; struct u132_endp* curr_endp; } ;
struct TYPE_4__ {int slock; } ;
struct u132_endp {int delayed; int endp_number; int toggle_bits; int input; int output; int udev_number; int usb_addr; int usb_endp; int queue_size; TYPE_2__ queue_lock; scalar_t__ queue_last; struct urb** urb_list; scalar_t__ queue_next; scalar_t__ jiffies; int pipetype; TYPE_1__* hep; struct u132* u132; scalar_t__ active; scalar_t__ edset_flush; scalar_t__ dequeueing; int endp_ring; struct u132_ring* ring; int urb_more; int scheduler; } ;
struct u132 {int num_endpoints; struct u132_ring* ring; struct u132_endp** endp; } ;
typedef int gfp_t ;
struct TYPE_3__ {struct u132_endp* hcpriv; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct u132_endp*) ;
 struct u132_endp* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct u132*,struct u132_endp*) ;
 int FUNC_10 (struct u132*,struct u132_endp*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_11 (struct u132*) ;
 int FUNC_12 (struct u132*,struct u132_udev*) ;
 int FUNC_13 (int ,struct urb*) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int,int,int ) ;

__attribute__((used)) static int FUNC_17(struct u132 *VAR_4,
 struct u132_udev *VAR_5, struct urb *VAR_6,
 struct usb_device *VAR_7, u8 VAR_8, u8 VAR_9, u8 VAR_10,
 gfp_t VAR_11)
{
 struct u132_ring *VAR_12;
 unsigned long VAR_13;
 int VAR_14;
 u8 VAR_15;
 struct u132_endp *VAR_16 = FUNC_3(sizeof(struct u132_endp), VAR_11);

 if (!VAR_16)
  return -VAR_1;

 FUNC_6(&VAR_16->queue_lock.slock);
 FUNC_7(&VAR_16->queue_lock.slock, VAR_13);
 VAR_14 = FUNC_13(FUNC_11(VAR_4), VAR_6);
 if (VAR_14) {
  FUNC_8(&VAR_16->queue_lock.slock, VAR_13);
  FUNC_2(VAR_16);
  return VAR_14;
 }

 VAR_15 = ++VAR_4->num_endpoints;
 VAR_6->ep->hcpriv = VAR_4->endp[VAR_15 - 1] = VAR_16;
 FUNC_0(&VAR_16->scheduler, VAR_3);
 FUNC_1(&VAR_16->urb_more);
 VAR_12 = VAR_16->ring = &VAR_4->ring[0];
 if (VAR_12->curr_endp) {
  FUNC_4(&VAR_16->endp_ring, &VAR_12->curr_endp->endp_ring);
 } else {
  FUNC_1(&VAR_16->endp_ring);
  VAR_12->curr_endp = VAR_16;
 }
 VAR_12->length += 1;
 VAR_16->dequeueing = 0;
 VAR_16->edset_flush = 0;
 VAR_16->active = 0;
 VAR_16->delayed = 0;
 VAR_16->endp_number = VAR_15;
 VAR_16->u132 = VAR_4;
 VAR_16->hep = VAR_6->ep;
 VAR_16->pipetype = FUNC_15(VAR_6->pipe);
 FUNC_9(VAR_4, VAR_16);
 if (FUNC_14(VAR_6->pipe)) {
  VAR_16->toggle_bits = 0x2;
  FUNC_16(VAR_5->usb_device, VAR_9, 0, 0);
  VAR_16->input = 1;
  VAR_16->output = 0;
  VAR_5->endp_number_in[VAR_9] = VAR_15;
  FUNC_12(VAR_4, VAR_5);
 } else {
  VAR_16->toggle_bits = 0x2;
  FUNC_16(VAR_5->usb_device, VAR_9, 1, 0);
  VAR_16->input = 0;
  VAR_16->output = 1;
  VAR_5->endp_number_out[VAR_9] = VAR_15;
  FUNC_12(VAR_4, VAR_5);
 }
 VAR_6->hcpriv = VAR_4;
 VAR_16->delayed = 1;
 VAR_16->jiffies = VAR_2 + FUNC_5(VAR_6->interval);
 VAR_16->udev_number = VAR_10;
 VAR_16->usb_addr = VAR_8;
 VAR_16->usb_endp = VAR_9;
 VAR_16->queue_size = 1;
 VAR_16->queue_last = 0;
 VAR_16->queue_next = 0;
 VAR_16->urb_list[VAR_0 & VAR_16->queue_last++] = VAR_6;
 FUNC_8(&VAR_16->queue_lock.slock, VAR_13);
 FUNC_10(VAR_4, VAR_16, FUNC_5(VAR_6->interval));
 return 0;
}
