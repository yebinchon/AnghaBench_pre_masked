
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_skel {int bulk_in_urb; int submitted; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(struct usb_skel *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(&VAR_0->submitted, 1000);
 if (!VAR_1)
  FUNC_0(&VAR_0->submitted);
 FUNC_1(VAR_0->bulk_in_urb);
}
