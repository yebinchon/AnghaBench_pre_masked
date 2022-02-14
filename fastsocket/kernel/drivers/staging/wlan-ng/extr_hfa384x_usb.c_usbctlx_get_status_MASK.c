
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int resp2; int resp1; int resp0; int status; } ;
typedef TYPE_1__ hfa384x_usb_cmdresp_t ;
struct TYPE_6__ {int status; void* resp2; void* resp1; void* resp0; } ;
typedef TYPE_2__ hfa384x_cmdresult_t ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (char*,int,void*,void*,void*) ;

__attribute__((used)) static int
FUNC_2(const hfa384x_usb_cmdresp_t *VAR_1,
     hfa384x_cmdresult_t *VAR_2)
{
 VAR_2->status = FUNC_0(VAR_1->status);
 VAR_2->resp0 = FUNC_0(VAR_1->resp0);
 VAR_2->resp1 = FUNC_0(VAR_1->resp1);
 VAR_2->resp2 = FUNC_0(VAR_1->resp2);

 FUNC_1("cmdresult:status=0x%04x "
   "resp0=0x%04x resp1=0x%04x resp2=0x%04x\n",
   VAR_2->status, VAR_2->resp0, VAR_2->resp1, VAR_2->resp2);

 return VAR_2->status & VAR_0;
}
