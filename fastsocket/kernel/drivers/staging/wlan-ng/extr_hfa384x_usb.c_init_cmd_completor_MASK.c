
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int complete; } ;
typedef TYPE_1__ usbctlx_completor_t ;
struct TYPE_6__ {TYPE_1__ head; int * result; int const* cmdresp; } ;
typedef TYPE_2__ usbctlx_cmd_completor_t ;
typedef int hfa384x_usb_cmdresp_t ;
typedef int hfa384x_cmdresult_t ;


 int VAR_0 ;

__attribute__((used)) static inline usbctlx_completor_t *FUNC_0(usbctlx_cmd_completor_t *
            VAR_1,
            const
            hfa384x_usb_cmdresp_t *
            VAR_2,
            hfa384x_cmdresult_t *
            VAR_3)
{
 VAR_1->head.complete = VAR_0;
 VAR_1->cmdresp = VAR_2;
 VAR_1->result = VAR_3;
 return &(VAR_1->head);
}
