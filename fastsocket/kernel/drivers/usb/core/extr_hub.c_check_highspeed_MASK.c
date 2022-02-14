
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_qualifier_descriptor {int dummy; } ;
struct usb_hub {int leds; int * indicator; scalar_t__ has_indicators; } ;
struct usb_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct usb_qualifier_descriptor*) ;
 struct usb_qualifier_descriptor* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct usb_device*,int ,int ,struct usb_qualifier_descriptor*,int) ;

__attribute__((used)) static void
FUNC_5 (struct usb_hub *VAR_3, struct usb_device *VAR_4, int VAR_5)
{
 struct usb_qualifier_descriptor *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2 (sizeof *VAR_6, VAR_0);
 if (VAR_6 == ((void*)0))
  return;

 VAR_7 = FUNC_4 (VAR_4, VAR_2, 0,
   VAR_6, sizeof *VAR_6);
 if (VAR_7 == sizeof *VAR_6) {
  FUNC_0(&VAR_4->dev, "not running at top speed; "
   "connect to a high speed hub\n");

  if (VAR_3->has_indicators) {
   VAR_3->indicator[VAR_5-1] = VAR_1;
   FUNC_3 (&VAR_3->leds, 0);
  }
 }
 FUNC_1(VAR_6);
}
