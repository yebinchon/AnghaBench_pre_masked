
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fhci_usb {TYPE_2__* actual_frame; struct fhci_hcd* fhci; } ;
struct fhci_hcd {TYPE_1__* pram; } ;
struct TYPE_4__ {int frame_num; scalar_t__ total_bytes; int frame_status; int tds_list; } ;
struct TYPE_3__ {int frame_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fhci_usb*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static u32 FUNC_3(struct fhci_usb *VAR_2)
{
 struct fhci_hcd *VAR_3 = VAR_2->fhci;

 if (!FUNC_2(&VAR_2->actual_frame->tds_list)) {
  if ((((FUNC_1(&VAR_3->pram->frame_num) & 0x07ff) -
        VAR_2->actual_frame->frame_num) & 0x7ff) > 5)
   FUNC_0(VAR_2);
  else
   return -VAR_0;
 }

 VAR_2->actual_frame->frame_status = VAR_1;
 VAR_2->actual_frame->frame_num = FUNC_1(&VAR_3->pram->frame_num) & 0x7ff;
 VAR_2->actual_frame->total_bytes = 0;

 return 0;
}
