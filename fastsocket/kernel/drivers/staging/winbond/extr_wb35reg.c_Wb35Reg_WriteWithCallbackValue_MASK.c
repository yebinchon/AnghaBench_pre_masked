
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wb35_reg_queue {int DIRECT; int INDEX; int RESERVED_VALID; struct wb35_reg_queue* Next; struct urb* urb; struct usb_ctrlrequest* pUsbReq; int RESERVED; int VALUE; } ;
struct wb35_reg {int EP0VM_spin_lock; struct wb35_reg_queue* reg_last; struct wb35_reg_queue* reg_first; } ;
struct usb_ctrlrequest {int bRequestType; int bRequest; void* wLength; void* wIndex; void* wValue; } ;
struct urb {int dummy; } ;
struct hw_data {scalar_t__ SurpriseRemove; struct wb35_reg reg; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hw_data*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct wb35_reg_queue*) ;
 struct wb35_reg_queue* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct urb* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct urb*) ;

unsigned char
FUNC_10( struct hw_data * VAR_4, u16 VAR_5, u32 VAR_6,
    s8 *VAR_7, s8 VAR_8)
{
 struct wb35_reg *VAR_9 = &VAR_4->reg;
 struct usb_ctrlrequest *VAR_10;
 struct urb *VAR_11 = ((void*)0);
 struct wb35_reg_queue *VAR_12 = ((void*)0);
 u16 VAR_13;


 if (VAR_4->SurpriseRemove)
  return 0;


 VAR_13 = sizeof(struct wb35_reg_queue) + sizeof(struct usb_ctrlrequest);
 VAR_12 = FUNC_4(VAR_13, VAR_0);
 VAR_11 = FUNC_8(0, VAR_0);
 if (VAR_11 && VAR_12) {
  VAR_12->DIRECT = 1;
  VAR_12->INDEX = VAR_5;
  VAR_12->VALUE = FUNC_2(VAR_6);

  FUNC_5(VAR_12->RESERVED, VAR_7, VAR_8);
  VAR_12->RESERVED_VALID = 1;
  VAR_10 = (struct usb_ctrlrequest *)((u8 *)VAR_12 + sizeof(struct wb35_reg_queue));
  VAR_10->bRequestType = VAR_3|VAR_1 |VAR_2;
  VAR_10->bRequest = 0x03;
  VAR_10->wValue = FUNC_1(0x0);
  VAR_10->wIndex = FUNC_1(VAR_5);
  VAR_10->wLength = FUNC_1(4);


  VAR_12->Next = ((void*)0);
  VAR_12->pUsbReq = VAR_10;
  VAR_12->urb = VAR_11;
  FUNC_6 (&VAR_9->EP0VM_spin_lock );
  if( VAR_9->reg_first == ((void*)0) )
   VAR_9->reg_first = VAR_12;
  else
   VAR_9->reg_last->Next = VAR_12;
  VAR_9->reg_last = VAR_12;

  FUNC_7 ( &VAR_9->EP0VM_spin_lock );


  FUNC_0(VAR_4);
  return 1;
 } else {
  if (VAR_11)
   FUNC_9(VAR_11);
  FUNC_3(VAR_12);
  return 0;
 }
}
