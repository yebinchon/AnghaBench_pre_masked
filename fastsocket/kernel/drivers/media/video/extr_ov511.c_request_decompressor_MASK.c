
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {scalar_t__ bclass; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(struct usb_ov511 *VAR_3)
{
 if (VAR_3->bclass == VAR_0 || VAR_3->bclass == VAR_1) {
  FUNC_0("No decompressor available");
 } else {
  FUNC_0("Unknown bridge");
 }

 return -VAR_2;
}
