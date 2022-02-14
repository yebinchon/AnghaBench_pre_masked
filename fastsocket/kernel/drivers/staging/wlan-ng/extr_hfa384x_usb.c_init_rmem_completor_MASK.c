
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int complete; } ;
struct TYPE_5__ {unsigned int len; TYPE_2__ head; void* data; int * rmemresp; } ;
typedef TYPE_1__ usbctlx_rmem_completor_t ;
typedef TYPE_2__ usbctlx_completor_t ;
typedef int hfa384x_usb_rmemresp_t ;


 int VAR_0 ;

__attribute__((used)) static inline usbctlx_completor_t *FUNC_0(usbctlx_rmem_completor_t
             *VAR_1,
             hfa384x_usb_rmemresp_t
             *VAR_2, void *VAR_3,
             unsigned int VAR_4)
{
 VAR_1->head.complete = VAR_0;
 VAR_1->rmemresp = VAR_2;
 VAR_1->data = VAR_3;
 VAR_1->len = VAR_4;
 return &(VAR_1->head);
}
