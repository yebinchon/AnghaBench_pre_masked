
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wusbhc {int dummy; } ;
struct whc {TYPE_1__* umc; } ;
struct usb_hcd {int dummy; } ;
struct urb {int pipe; } ;
typedef int gfp_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;




 int FUNC_0 (struct whc*,struct urb*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct whc*,struct urb*,int ) ;
 struct wusbhc* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (int ) ;
 struct whc* FUNC_5 (struct wusbhc*) ;

__attribute__((used)) static int FUNC_6(struct usb_hcd *VAR_1, struct urb *VAR_2,
      gfp_t VAR_3)
{
 struct wusbhc *VAR_4 = FUNC_3(VAR_1);
 struct whc *VAR_5 = FUNC_5(VAR_4);
 int VAR_6;

 switch (FUNC_4(VAR_2->pipe)) {
 case 129:
  VAR_6 = FUNC_2(VAR_5, VAR_2, VAR_3);
  break;
 case 128:
  FUNC_1(&VAR_5->umc->dev, "isochronous transfers unsupported\n");
  VAR_6 = -VAR_0;
  break;
 case 130:
 case 131:
 default:
  VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3);
  break;
 };

 return VAR_6;
}
