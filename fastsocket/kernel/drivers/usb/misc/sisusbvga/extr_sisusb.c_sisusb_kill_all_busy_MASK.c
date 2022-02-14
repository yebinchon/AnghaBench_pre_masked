
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sisusb_usb_data {int numobufs; int* urbstatus; int * sisurbout; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sisusb_usb_data*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct sisusb_usb_data *VAR_1)
{
 int VAR_2;

 if (FUNC_0(VAR_1))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->numobufs; VAR_2++) {

  if (VAR_1->urbstatus[VAR_2] & VAR_0)
   FUNC_1(VAR_1->sisurbout[VAR_2]);

 }
}
