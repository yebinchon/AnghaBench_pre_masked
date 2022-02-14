
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int len; TYPE_1__* rmemresp; int data; } ;
typedef TYPE_2__ usbctlx_rmem_completor_t ;
typedef int usbctlx_completor_t ;
struct TYPE_3__ {int data; int frmlen; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(usbctlx_completor_t *VAR_0)
{
 usbctlx_rmem_completor_t *VAR_1 = (usbctlx_rmem_completor_t *) VAR_0;

 FUNC_1("rmemresp:len=%d\n", VAR_1->rmemresp->frmlen);
 FUNC_0(VAR_1->data, VAR_1->rmemresp->data, VAR_1->len);
 return 0;
}
