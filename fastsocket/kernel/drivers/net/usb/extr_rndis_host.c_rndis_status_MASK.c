
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int dummy; } ;
struct urb {int status; int actual_length; } ;


 int FUNC_0 (struct usbnet*,char*,int ,int ) ;

void FUNC_1(struct usbnet *VAR_0, struct urb *VAR_1)
{
 FUNC_0(VAR_0, "rndis status urb, len %d stat %d",
  VAR_1->actual_length, VAR_1->status);


}
