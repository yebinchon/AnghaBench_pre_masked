
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int usbctlx_completor_t ;
struct TYPE_2__ {int result; int cmdresp; } ;
typedef TYPE_1__ usbctlx_cmd_completor_t ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(usbctlx_completor_t * VAR_0)
{
 usbctlx_cmd_completor_t *VAR_1 = (usbctlx_cmd_completor_t *) VAR_0;
 return FUNC_0(VAR_1->cmdresp, VAR_1->result);
}
