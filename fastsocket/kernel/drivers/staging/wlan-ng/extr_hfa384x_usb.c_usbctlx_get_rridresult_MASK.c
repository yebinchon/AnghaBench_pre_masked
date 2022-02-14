
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int frmlen; int data; int rid; } ;
typedef TYPE_1__ hfa384x_usb_rridresp_t ;
struct TYPE_6__ {int rid; int riddata_len; int riddata; } ;
typedef TYPE_2__ hfa384x_rridresult_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(const hfa384x_usb_rridresp_t *VAR_0,
         hfa384x_rridresult_t *VAR_1)
{
 VAR_1->rid = FUNC_0(VAR_0->rid);
 VAR_1->riddata = VAR_0->data;
 VAR_1->riddata_len = ((FUNC_0(VAR_0->frmlen) - 1) * 2);

}
