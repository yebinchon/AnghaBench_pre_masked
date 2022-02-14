
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_hcd {scalar_t__ state; int flags; } ;
struct c67x00_sie {int sie_num; struct c67x00_hcd* private_data; } ;
struct c67x00_hcd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_hcd*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct c67x00_hcd*) ;
 struct usb_hcd* FUNC_3 (struct c67x00_hcd*) ;
 int FUNC_4 (struct c67x00_sie*,int ) ;
 int FUNC_5 (struct c67x00_hcd*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct c67x00_sie *VAR_4, u16 VAR_5, u16 VAR_6)
{
 struct c67x00_hcd *VAR_7 = VAR_4->private_data;
 struct usb_hcd *VAR_8 = FUNC_3(VAR_7);


 if (VAR_6) {
  if (VAR_6 & VAR_2)
   FUNC_5(VAR_7);
  else
   FUNC_6(FUNC_2(VAR_7),
     "Unknown SIE msg flag(s): 0x%04x\n", VAR_6);
 }

 if (FUNC_8(VAR_8->state == VAR_1))
  return;

 if (!FUNC_0(VAR_8))
  return;


 if (VAR_5 & FUNC_1(VAR_4->sie_num)) {
  FUNC_4(VAR_4, VAR_3);
  FUNC_5(VAR_7);
  FUNC_7(VAR_0, &VAR_8->flags);
 }
}
