
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int complete; } ;
struct TYPE_5__ {unsigned int riddatalen; TYPE_2__ head; void* riddata; int const* rridresp; } ;
typedef TYPE_1__ usbctlx_rrid_completor_t ;
typedef TYPE_2__ usbctlx_completor_t ;
typedef int hfa384x_usb_rridresp_t ;


 int VAR_0 ;

__attribute__((used)) static inline usbctlx_completor_t *FUNC_0(usbctlx_rrid_completor_t
             *VAR_1,
             const
             hfa384x_usb_rridresp_t *
             VAR_2, void *VAR_3,
             unsigned int VAR_4)
{
 VAR_1->head.complete = VAR_0;
 VAR_1->rridresp = VAR_2;
 VAR_1->riddata = VAR_3;
 VAR_1->riddatalen = VAR_4;
 return &(VAR_1->head);
}
