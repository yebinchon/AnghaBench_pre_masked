
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget_driver {int (* disconnect ) (TYPE_1__*) ;} ;
struct TYPE_2__ {scalar_t__ speed; } ;
struct imx_udc_struct {TYPE_1__ gadget; scalar_t__ alt; scalar_t__ intf; scalar_t__ cfg; struct imx_ep_struct* imx_ep; } ;
struct imx_ep_struct {int stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct imx_ep_struct*) ;
 int FUNC_1 (struct imx_ep_struct*) ;
 int FUNC_2 (struct imx_ep_struct*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct imx_udc_struct *VAR_3,
     struct usb_gadget_driver *VAR_4)
{
 struct imx_ep_struct *VAR_5;
 int VAR_6;

 if (VAR_3->gadget.speed == VAR_2)
  VAR_4 = ((void*)0);


 for (VAR_6 = 1; VAR_6 < VAR_1; VAR_6++) {
  VAR_5 = &VAR_3->imx_ep[VAR_6];
  FUNC_1(VAR_5);
  VAR_5->stopped = 1;
  FUNC_0(VAR_5);
  FUNC_2(VAR_5, -VAR_0);
 }

 VAR_3->cfg = 0;
 VAR_3->intf = 0;
 VAR_3->alt = 0;

 if (VAR_4)
  VAR_4->disconnect(&VAR_3->gadget);
}
