
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvd {int dev; } ;
struct urb {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_2(struct uvd *VAR_1, struct urb *VAR_2)
{
 int VAR_3;

 VAR_2->dev = VAR_1->dev;
 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (VAR_3)
  FUNC_0("usb_submit_urb error (%d)", VAR_3);
}
