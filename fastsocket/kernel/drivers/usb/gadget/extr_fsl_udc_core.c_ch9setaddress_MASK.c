
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct fsl_udc {int usb_state; scalar_t__ device_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct fsl_udc*,int ) ;
 int FUNC_1 (struct fsl_udc*) ;

__attribute__((used)) static void FUNC_2(struct fsl_udc *VAR_2, u16 VAR_3, u16 VAR_4, u16 VAR_5)
{

 VAR_2->device_address = (u8) VAR_3;

 VAR_2->usb_state = VAR_1;

 if (FUNC_0(VAR_2, VAR_0))
  FUNC_1(VAR_2);
}
