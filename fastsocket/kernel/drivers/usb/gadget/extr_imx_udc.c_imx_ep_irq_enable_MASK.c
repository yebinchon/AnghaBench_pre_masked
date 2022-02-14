
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx_ep_struct {TYPE_1__* imx_usb; } ;
struct TYPE_2__ {scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct imx_ep_struct*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

void FUNC_4(struct imx_ep_struct *VAR_2)
{

 int VAR_3 = FUNC_0(VAR_2);

 FUNC_3(0x1FF, VAR_2->imx_usb->base + FUNC_2(VAR_3));
 FUNC_3(0x1FF, VAR_2->imx_usb->base + FUNC_1(VAR_3));
 FUNC_3(0x1FF & ~(VAR_1 | VAR_0),
  VAR_2->imx_usb->base + FUNC_2(VAR_3));
}
