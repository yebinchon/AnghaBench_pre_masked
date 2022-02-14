
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {scalar_t__ bclass; scalar_t__ streaming; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct usb_ov511*,int ) ;
 int FUNC_2 (struct usb_ov511*,int ) ;
 int FUNC_3 (struct usb_ov511*) ;

__attribute__((used)) static void
FUNC_4(struct usb_ov511 *VAR_1)
{
 if (!VAR_1->streaming || !VAR_1->dev)
  return;

 FUNC_0(3, "*** Stopping capture ***");

 if (VAR_1->bclass == VAR_0)
  FUNC_2(VAR_1, 0);
 else
  FUNC_1(VAR_1, 0);

 VAR_1->streaming = 0;

 FUNC_3(VAR_1);
}
