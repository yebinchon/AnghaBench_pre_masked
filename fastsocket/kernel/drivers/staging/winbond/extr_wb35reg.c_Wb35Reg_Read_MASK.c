
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wb35_reg_queue {int INDEX; struct wb35_reg_queue* Next; struct urb* urb; struct usb_ctrlrequest* pUsbReq; int * pBuffer; scalar_t__ DIRECT; } ;
struct wb35_reg {int EP0VM_spin_lock; struct wb35_reg_queue* reg_last; struct wb35_reg_queue* reg_first; } ;
struct usb_ctrlrequest {int bRequestType; int bRequest; void* wLength; void* wIndex; void* wValue; } ;
struct urb {int dummy; } ;
struct hw_data {scalar_t__ SurpriseRemove; struct wb35_reg reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hw_data*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct wb35_reg_queue*) ;
 struct wb35_reg_queue* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct urb* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct urb*) ;

unsigned char
FUNC_8(struct hw_data * VAR_4, u16 VAR_5, u32 * VAR_6 )
{
 struct wb35_reg *VAR_7 = &VAR_4->reg;
 struct usb_ctrlrequest * VAR_8;
 struct urb *VAR_9;
 struct wb35_reg_queue *VAR_10;
 u16 VAR_11;


 if (VAR_4->SurpriseRemove)
  return 0;


 VAR_11 = sizeof(struct wb35_reg_queue) + sizeof(struct usb_ctrlrequest);
 VAR_10 = FUNC_3(VAR_11, VAR_0);
 VAR_9 = FUNC_6(0, VAR_0);
 if( VAR_9 && VAR_10 )
 {
  VAR_10->DIRECT = 0;
  VAR_10->INDEX = VAR_5;
  VAR_10->pBuffer = VAR_6;
  VAR_8 = (struct usb_ctrlrequest *)((u8 *)VAR_10 + sizeof(struct wb35_reg_queue));
  VAR_8->bRequestType = VAR_3|VAR_2|VAR_1;
  VAR_8->bRequest = 0x01;
  VAR_8->wValue = FUNC_1(0x0);
  VAR_8->wIndex = FUNC_1 (VAR_5);
  VAR_8->wLength = FUNC_1 (4);


  VAR_10->Next = ((void*)0);
  VAR_10->pUsbReq = VAR_8;
  VAR_10->urb = VAR_9;
  FUNC_4 ( &VAR_7->EP0VM_spin_lock );
  if( VAR_7->reg_first == ((void*)0) )
   VAR_7->reg_first = VAR_10;
  else
   VAR_7->reg_last->Next = VAR_10;
  VAR_7->reg_last = VAR_10;

  FUNC_5( &VAR_7->EP0VM_spin_lock );


  FUNC_0( VAR_4 );

  return 1;
 } else {
  if (VAR_9)
   FUNC_7( VAR_9 );
  FUNC_2(VAR_10);
  return 0;
 }
}
