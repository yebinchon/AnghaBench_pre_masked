
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct wb35_reg_queue {int DIRECT; int VALUE; int * pBuffer; struct urb* urb; struct usb_ctrlrequest* pUsbReq; } ;
struct wb35_reg {int RegFireCount; int EP0vm_state; int EP0VM_spin_lock; struct wb35_reg_queue* reg_first; scalar_t__ SyncIoPause; } ;
struct usb_ctrlrequest {int wLength; } ;
struct urb {int dummy; } ;
struct TYPE_2__ {int udev; } ;
struct hw_data {TYPE_1__ WbUsb; scalar_t__ SurpriseRemove; struct wb35_reg reg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wb35_reg_queue*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct urb*,int ,int ,int *,int *,int ,int ,void*) ;
 int FUNC_7 (struct urb*,int ) ;

void
FUNC_8(struct hw_data * VAR_4 )
{
 struct wb35_reg *VAR_5 = &VAR_4->reg;
 struct urb *VAR_6;
 struct usb_ctrlrequest *VAR_7;
 u32 * VAR_8;
 int VAR_9 = -1;
 struct wb35_reg_queue *VAR_10;


 if (VAR_5->SyncIoPause)
  goto cleanup;

 if (VAR_4->SurpriseRemove)
  goto cleanup;


 FUNC_4( &VAR_5->EP0VM_spin_lock );
 VAR_10 = VAR_5->reg_first;
 FUNC_5( &VAR_5->EP0VM_spin_lock );

 if (!VAR_10)
  goto cleanup;


 VAR_6 = (struct urb *)VAR_10->urb;

 VAR_7 = VAR_10->pUsbReq;
 VAR_6 = VAR_10->urb;
 VAR_8 = VAR_10->pBuffer;
 if (VAR_10->DIRECT == 1)
  VAR_8 = &VAR_10->VALUE;

 FUNC_6( VAR_6, VAR_4->WbUsb.udev,
         FUNC_0(VAR_4->WbUsb.udev,VAR_10),
         (u8 *)VAR_7,VAR_8,FUNC_2(VAR_7->wLength),
         VAR_3, (void*)VAR_4);

 VAR_5->EP0vm_state = VAR_1;

 VAR_9 = FUNC_7(VAR_6, VAR_0);

 if (VAR_9 < 0) {



  goto cleanup;
 }

 return;

 cleanup:
 VAR_5->EP0vm_state = VAR_2;
 FUNC_1(&VAR_5->RegFireCount);
}
