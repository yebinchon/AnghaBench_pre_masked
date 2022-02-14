
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_pod {int dumpreq; int line6; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int,int) ;
 int FUNC_2 (struct usb_line6_pod*,int,int) ;

void FUNC_3(struct usb_line6_pod *VAR_2, int VAR_3, int VAR_4)
{
 if (FUNC_1(&VAR_2->line6, VAR_3, VAR_4) == 0)
  FUNC_2(VAR_2, VAR_3, VAR_4);

 if ((VAR_3 == VAR_0) || (VAR_3 == VAR_1))
  FUNC_0(&VAR_2->dumpreq);
}
