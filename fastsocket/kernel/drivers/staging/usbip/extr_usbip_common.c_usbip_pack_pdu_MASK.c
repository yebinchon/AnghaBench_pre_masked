
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbip_header {int dummy; } ;
struct urb {int dummy; } ;




 int FUNC_0 (char*) ;
 int FUNC_1 (struct usbip_header*,struct urb*,int) ;
 int FUNC_2 (struct usbip_header*,struct urb*,int) ;

void FUNC_3(struct usbip_header *VAR_0, struct urb *VAR_1, int VAR_2,
        int VAR_3)
{
 switch (VAR_2) {
 case 129:
  FUNC_1(VAR_0, VAR_1, VAR_3);
  break;
 case 128:
  FUNC_2(VAR_0, VAR_1, VAR_3);
  break;
 default:
  FUNC_0("unknown command");


 }
}
