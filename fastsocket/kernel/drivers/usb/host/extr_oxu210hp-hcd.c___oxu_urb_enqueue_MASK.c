
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct urb {TYPE_1__* dev; int pipe; } ;
struct oxu_hcd {int dummy; } ;
struct list_head {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int speed; } ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*) ;




 int VAR_1 ;
 struct oxu_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct oxu_hcd*,struct urb*,struct list_head*,int ) ;
 int FUNC_3 (struct oxu_hcd*,struct urb*,int ) ;
 int FUNC_4 (struct oxu_hcd*,struct urb*,struct list_head*,int ) ;
 int FUNC_5 (struct oxu_hcd*,struct urb*,int ) ;
 int FUNC_6 (struct oxu_hcd*,struct urb*,struct list_head*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct usb_hcd *VAR_2, struct urb *VAR_3,
    gfp_t VAR_4)
{
 struct oxu_hcd *VAR_5 = FUNC_1(VAR_2);
 struct list_head VAR_6;

 FUNC_0(&VAR_6);

 switch (FUNC_7(VAR_3->pipe)) {
 case 130:
 case 131:
 default:
  if (!FUNC_4(VAR_5, VAR_3, &VAR_6, VAR_4))
   return -VAR_0;
  return FUNC_6(VAR_5, VAR_3, &VAR_6, VAR_4);

 case 129:
  if (!FUNC_4(VAR_5, VAR_3, &VAR_6, VAR_4))
   return -VAR_0;
  return FUNC_2(VAR_5, VAR_3, &VAR_6, VAR_4);

 case 128:
  if (VAR_3->dev->speed == VAR_1)
   return FUNC_3(VAR_5, VAR_3, VAR_4);
  else
   return FUNC_5(VAR_5, VAR_3, VAR_4);
 }
}
