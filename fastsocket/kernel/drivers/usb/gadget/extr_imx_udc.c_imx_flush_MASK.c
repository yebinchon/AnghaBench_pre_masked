
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_udc_struct {scalar_t__ base; } ;
struct imx_ep_struct {struct imx_udc_struct* imx_usb; } ;


 int VAR_0 ;
 int FUNC_0 (struct imx_ep_struct*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(struct imx_ep_struct *VAR_1)
{
 struct imx_udc_struct *VAR_2 = VAR_1->imx_usb;

 int VAR_3 = FUNC_2(VAR_2->base + FUNC_1(FUNC_0(VAR_1)));
 FUNC_3(VAR_3 | VAR_0,
  VAR_2->base + FUNC_1(FUNC_0(VAR_1)));
}
