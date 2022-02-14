
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ov511 {int dummy; } ;
struct ov511_regvals {scalar_t__ bus; int val; int reg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct usb_ov511*,int ,int ) ;
 int FUNC_2 (struct usb_ov511*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct usb_ov511 *VAR_3, struct ov511_regvals * VAR_4)
{
 int VAR_5;

 while (VAR_4->bus != VAR_0) {
  if (VAR_4->bus == VAR_2) {
   if ((VAR_5 = FUNC_2(VAR_3, VAR_4->reg, VAR_4->val)) < 0)
    return VAR_5;
  } else if (VAR_4->bus == VAR_1) {
   if ((VAR_5 = FUNC_1(VAR_3, VAR_4->reg, VAR_4->val)) < 0)
    return VAR_5;
  } else {
   FUNC_0("Bad regval array");
   return -1;
  }
  VAR_4++;
 }
 return 0;
}
