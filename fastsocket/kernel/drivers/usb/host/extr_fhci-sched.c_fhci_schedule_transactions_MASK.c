
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct fhci_usb {TYPE_1__* hc_list; TYPE_2__* actual_frame; } ;
struct TYPE_4__ {int frame_status; scalar_t__ total_bytes; } ;
struct TYPE_3__ {int bulk_list; int ctrl_list; int intr_list; int iso_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct fhci_usb*) ;
 int FUNC_1 (struct fhci_usb*,int *,int ) ;

void FUNC_2(struct fhci_usb *VAR_5)
{
 int VAR_6 = 1;

 if (VAR_5->actual_frame->frame_status & VAR_4)
  if (FUNC_0(VAR_5) != 0)
   return;

 if (VAR_5->actual_frame->frame_status & VAR_4)
  return;

 if (VAR_5->actual_frame->total_bytes == 0) {




  FUNC_1(VAR_5, &VAR_5->hc_list->iso_list, VAR_3);





  FUNC_1(VAR_5, &VAR_5->hc_list->intr_list, VAR_2);





  VAR_6 = FUNC_1(VAR_5, &VAR_5->hc_list->ctrl_list,
        VAR_1);
 }





 if (VAR_6 > 0)
  FUNC_1(VAR_5, &VAR_5->hc_list->bulk_list, VAR_0);
}
