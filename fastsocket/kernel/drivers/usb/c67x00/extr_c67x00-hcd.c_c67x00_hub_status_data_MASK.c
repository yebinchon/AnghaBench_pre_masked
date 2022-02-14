
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_hcd {int dummy; } ;
struct c67x00_sie {int dummy; } ;
struct c67x00_hcd {struct c67x00_sie* sie; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct c67x00_sie*) ;
 struct c67x00_hcd* FUNC_2 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_1, char *VAR_2)
{
 struct c67x00_hcd *VAR_3 = FUNC_2(VAR_1);
 struct c67x00_sie *VAR_4 = VAR_3->sie;
 u16 VAR_5;
 int VAR_6;

 *VAR_2 = 0;
 VAR_5 = FUNC_1(VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_5 & FUNC_0(VAR_6))
   *VAR_2 |= (1 << VAR_6);


 *VAR_2 <<= 1;

 return !!*VAR_2;
}
