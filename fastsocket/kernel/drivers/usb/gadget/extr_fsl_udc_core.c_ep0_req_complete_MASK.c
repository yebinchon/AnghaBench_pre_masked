
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fsl_udc {scalar_t__ usb_state; int ep0_state; int device_address; } ;
struct fsl_req {int dummy; } ;
struct fsl_ep {int dummy; } ;
struct TYPE_2__ {int deviceaddr; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;


 int FUNC_1 (struct fsl_ep*,struct fsl_req*,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (struct fsl_udc*,int ) ;
 int FUNC_3 (struct fsl_udc*) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(struct fsl_udc *VAR_5, struct fsl_ep *VAR_6,
  struct fsl_req *VAR_7)
{
 if (VAR_5->usb_state == VAR_3) {

  u32 VAR_8 = (u32) VAR_5->device_address;
  FUNC_4(VAR_8 << VAR_2,
    &VAR_4->deviceaddr);
 }

 FUNC_1(VAR_6, VAR_7, 0);

 switch (VAR_5->ep0_state) {
 case 130:

  if (FUNC_2(VAR_5, VAR_1))
   FUNC_3(VAR_5);
  break;
 case 131:

  if (FUNC_2(VAR_5, VAR_0))
   FUNC_3(VAR_5);
  break;
 case 129:
  VAR_5->ep0_state = 128;
  break;
 case 128:
  FUNC_0("Unexpect ep0 packets\n");
  break;
 default:
  FUNC_3(VAR_5);
  break;
 }
}
