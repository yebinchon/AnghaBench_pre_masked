
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int transfer_dma; int transfer_buffer_length; } ;
struct TYPE_2__ {int nfields; int num_bufs; struct urb** transfer_buffer; struct urb** urb; } ;
struct au0828_dev {TYPE_1__ isoc_ctl; int usbdev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct urb**) ;
 int FUNC_3 (int ,int ,struct urb*,int ) ;
 int FUNC_4 (struct urb*) ;
 int FUNC_5 (struct urb*) ;
 int FUNC_6 (struct urb*) ;

void FUNC_7(struct au0828_dev *VAR_0)
{
 struct urb *VAR_1;
 int VAR_2;

 FUNC_0("au0828: called au0828_uninit_isoc\n");

 VAR_0->isoc_ctl.nfields = -1;
 for (VAR_2 = 0; VAR_2 < VAR_0->isoc_ctl.num_bufs; VAR_2++) {
  VAR_1 = VAR_0->isoc_ctl.urb[VAR_2];
  if (VAR_1) {
   if (!FUNC_1())
    FUNC_5(VAR_1);
   else
    FUNC_6(VAR_1);

   if (VAR_0->isoc_ctl.transfer_buffer[VAR_2]) {
    FUNC_3(VAR_0->usbdev,
     VAR_1->transfer_buffer_length,
     VAR_0->isoc_ctl.transfer_buffer[VAR_2],
     VAR_1->transfer_dma);
   }
   FUNC_4(VAR_1);
   VAR_0->isoc_ctl.urb[VAR_2] = ((void*)0);
  }
  VAR_0->isoc_ctl.transfer_buffer[VAR_2] = ((void*)0);
 }

 FUNC_2(VAR_0->isoc_ctl.urb);
 FUNC_2(VAR_0->isoc_ctl.transfer_buffer);

 VAR_0->isoc_ctl.urb = ((void*)0);
 VAR_0->isoc_ctl.transfer_buffer = ((void*)0);
 VAR_0->isoc_ctl.num_bufs = 0;
}
