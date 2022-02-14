
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_se401 {scalar_t__ nullpackets; size_t scratch_next; int bayeroffset; int cheight; int cwidth; TYPE_2__* dev; int wq; int scratch_overflow; TYPE_1__* scratch; int dropped; int streaming; } ;
struct urb {int actual_length; TYPE_2__* dev; scalar_t__ status; scalar_t__ transfer_buffer; struct usb_se401* context; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int state; int offset; int length; int data; } ;





 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 scalar_t__ FUNC_2 (struct urb*,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_3)
{
 struct usb_se401 *VAR_4 = VAR_3->context;
 int VAR_5 = VAR_3->actual_length;


 if (!VAR_4->streaming)
  return;

 if (!VAR_4->dev) {
  FUNC_0(&VAR_3->dev->dev, "device vapourished\n");
  return;
 }




 if (VAR_5 && !VAR_3->status) {
  VAR_4->nullpackets = 0;
  switch (VAR_4->scratch[VAR_4->scratch_next].state) {
  case 129:
  case 130:
   VAR_4->dropped++;
   break;
  case 128:
   FUNC_1(VAR_4->scratch[VAR_4->scratch_next].data,
    (unsigned char *)VAR_3->transfer_buffer, VAR_5);
   VAR_4->scratch[VAR_4->scratch_next].state
       = 129;
   VAR_4->scratch[VAR_4->scratch_next].offset
       = VAR_4->bayeroffset;
   VAR_4->scratch[VAR_4->scratch_next].length = VAR_5;
   if (FUNC_3(&VAR_4->wq))
    FUNC_4(&VAR_4->wq);
   VAR_4->scratch_overflow = 0;
   VAR_4->scratch_next++;
   if (VAR_4->scratch_next >= VAR_2)
    VAR_4->scratch_next = 0;
   break;
  }
  VAR_4->bayeroffset += VAR_5;
  if (VAR_4->bayeroffset >= VAR_4->cheight * VAR_4->cwidth)
   VAR_4->bayeroffset = 0;
 } else {
  VAR_4->nullpackets++;
  if (VAR_4->nullpackets > VAR_1)
   if (FUNC_3(&VAR_4->wq))
    FUNC_4(&VAR_4->wq);
 }


 VAR_3->status = 0;
 VAR_3->dev = VAR_4->dev;
 if (FUNC_2(VAR_3, VAR_0))
  FUNC_0(&VAR_3->dev->dev, "urb burned down\n");
 return;
}
