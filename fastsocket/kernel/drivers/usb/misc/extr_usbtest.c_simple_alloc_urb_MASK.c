
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {scalar_t__ speed; } ;
struct urb {int interval; int transfer_buffer; int transfer_dma; int transfer_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,unsigned long) ;
 int VAR_5 ;
 struct urb* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct usb_device*,unsigned long,int ,int *) ;
 int FUNC_3 (struct urb*,struct usb_device*,int,int *,unsigned long,int ,int *) ;
 int FUNC_4 (struct urb*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct urb *FUNC_6 (
 struct usb_device *VAR_6,
 int VAR_7,
 unsigned long VAR_8
)
{
 struct urb *VAR_9;

 VAR_9 = FUNC_1 (0, VAR_0);
 if (!VAR_9)
  return VAR_9;
 FUNC_3 (VAR_9, VAR_6, VAR_7, ((void*)0), VAR_8, VAR_5, ((void*)0));
 VAR_9->interval = (VAR_6->speed == VAR_4)
   ? (VAR_1 << 3)
   : VAR_1;
 VAR_9->transfer_flags = VAR_2;
 if (FUNC_5 (VAR_7))
  VAR_9->transfer_flags |= VAR_3;
 VAR_9->transfer_buffer = FUNC_2 (VAR_6, VAR_8, VAR_0,
   &VAR_9->transfer_dma);
 if (!VAR_9->transfer_buffer) {
  FUNC_4 (VAR_9);
  VAR_9 = ((void*)0);
 } else
  FUNC_0 (VAR_9->transfer_buffer, 0, VAR_8);
 return VAR_9;
}
