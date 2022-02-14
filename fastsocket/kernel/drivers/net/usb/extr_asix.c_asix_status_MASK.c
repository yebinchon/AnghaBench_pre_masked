
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int net; } ;
struct urb {int actual_length; struct ax88172_int_data* transfer_buffer; } ;
struct ax88172_int_data {int link; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usbnet*,int ) ;

__attribute__((used)) static void FUNC_5(struct usbnet *VAR_1, struct urb *VAR_2)
{
 struct ax88172_int_data *VAR_3;
 int VAR_4;

 if (VAR_2->actual_length < 8)
  return;

 VAR_3 = VAR_2->transfer_buffer;
 VAR_4 = VAR_3->link & 0x01;
 if (FUNC_2(VAR_1->net) != VAR_4) {
  if (VAR_4) {
   FUNC_3(VAR_1->net);
   FUNC_4 (VAR_1, VAR_0 );
  } else
   FUNC_1(VAR_1->net);
  FUNC_0(VAR_1, "Link Status is: %d", VAR_4);
 }
}
