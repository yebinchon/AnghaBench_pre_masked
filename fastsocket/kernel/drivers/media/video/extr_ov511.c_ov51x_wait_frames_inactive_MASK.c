
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {scalar_t__ curframe; int wq; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(struct usb_ov511 *VAR_0)
{
 return FUNC_0(VAR_0->wq, VAR_0->curframe < 0);
}
