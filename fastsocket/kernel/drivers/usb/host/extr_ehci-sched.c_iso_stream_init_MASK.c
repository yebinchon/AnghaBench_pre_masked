
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u32 ;
struct usb_device {scalar_t__ speed; unsigned int devnum; int ttport; TYPE_3__* tt; } ;
struct ehci_iso_stream {int highspeed; int usecs; long c_usecs; int raw_mask; long bandwidth; int bEndpointAddress; unsigned int interval; unsigned int maxp; struct usb_device* udev; void* address; int tt_usecs; void* buf2; void* buf1; void* buf0; } ;
struct ehci_hcd {int dummy; } ;
struct TYPE_5__ {TYPE_2__* root_hub; } ;
struct TYPE_8__ {TYPE_1__ self; } ;
struct TYPE_7__ {int think_time; TYPE_2__* hub; } ;
struct TYPE_6__ {int devnum; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_2 (struct ehci_hcd*,unsigned int) ;
 int FUNC_3 (struct ehci_hcd*) ;
 TYPE_4__* FUNC_4 (struct ehci_hcd*) ;
 unsigned int FUNC_5 (unsigned int) ;
 int FUNC_6 (unsigned int,unsigned int) ;
 unsigned int FUNC_7 (unsigned int) ;
 scalar_t__ FUNC_8 (scalar_t__,int,int,unsigned int) ;
 unsigned int FUNC_9 (struct usb_device*,int,int) ;
 unsigned int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void
FUNC_12 (
 struct ehci_hcd *VAR_2,
 struct ehci_iso_stream *VAR_3,
 struct usb_device *VAR_4,
 int VAR_5,
 unsigned VAR_6
)
{
 static const u8 VAR_7 [] = { 0x01, 0x03, 0x07, 0x0f, 0x1f, 0x3f };

 u32 VAR_8;
 unsigned VAR_9, VAR_10;
 int VAR_11;
 long VAR_12;





 VAR_9 = FUNC_10 (VAR_5);
 VAR_11 = FUNC_11 (VAR_5) ? VAR_0 : 0;
 VAR_10 = FUNC_9(VAR_4, VAR_5, !VAR_11);
 if (VAR_11) {
  VAR_8 = (1 << 11);
 } else {
  VAR_8 = 0;
 }


 if (VAR_4->speed == VAR_1) {
  unsigned VAR_13 = FUNC_5(VAR_10);

  VAR_3->highspeed = 1;

  VAR_10 = FUNC_7(VAR_10);
  VAR_8 |= VAR_10;
  VAR_10 *= VAR_13;

  VAR_3->buf0 = FUNC_2(VAR_2, (VAR_9 << 8) | VAR_4->devnum);
  VAR_3->buf1 = FUNC_2(VAR_2, VAR_8);
  VAR_3->buf2 = FUNC_2(VAR_2, VAR_13);




  VAR_3->usecs = FUNC_0 (VAR_10);
  VAR_12 = VAR_3->usecs * 8;
  VAR_12 /= VAR_6;

 } else {
  u32 VAR_14;
  int VAR_15;
  int VAR_16;

  VAR_14 = VAR_4->ttport << 24;
  if (!FUNC_3(VAR_2)
    || (VAR_4->tt->hub !=
     FUNC_4(VAR_2)->self.root_hub))
   VAR_14 |= VAR_4->tt->hub->devnum << 16;
  VAR_14 |= VAR_9 << 8;
  VAR_14 |= VAR_4->devnum;
  VAR_3->usecs = FUNC_0 (VAR_10);
  VAR_15 = VAR_4->tt ? VAR_4->tt->think_time : 0;
  VAR_3->tt_usecs = FUNC_1 (VAR_15 + FUNC_8 (
    VAR_4->speed, VAR_11, 1, VAR_10));
  VAR_16 = FUNC_6 (1u, (VAR_10 + 187) / 188);
  if (VAR_11) {
   u32 VAR_17;

   VAR_14 |= 1 << 31;
   VAR_3->c_usecs = VAR_3->usecs;
   VAR_3->usecs = FUNC_0 (1);
   VAR_3->raw_mask = 1;


   VAR_17 = (1 << (VAR_16 + 2)) - 1;
   VAR_3->raw_mask |= VAR_17 << (8 + 2);
  } else
   VAR_3->raw_mask = VAR_7 [VAR_16 - 1];
  VAR_12 = VAR_3->usecs + VAR_3->c_usecs;
  VAR_12 /= VAR_6 << 3;


  VAR_3->address = FUNC_2(VAR_2, VAR_14);
 }
 VAR_3->bandwidth = VAR_12;

 VAR_3->udev = VAR_4;

 VAR_3->bEndpointAddress = VAR_11 | VAR_9;
 VAR_3->interval = VAR_6;
 VAR_3->maxp = VAR_10;
}
