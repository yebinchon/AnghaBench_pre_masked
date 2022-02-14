
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_udc_struct {scalar_t__ base; } ;
struct imx_ep_struct {struct imx_udc_struct* imx_usb; } ;


 int FUNC_0 (struct imx_ep_struct*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

int FUNC_3(struct imx_ep_struct *VAR_1)
{
 struct imx_udc_struct *VAR_2 = VAR_1->imx_usb;

 return FUNC_2(VAR_2->base + FUNC_1(FUNC_0(VAR_1)))
   & VAR_0;
}
