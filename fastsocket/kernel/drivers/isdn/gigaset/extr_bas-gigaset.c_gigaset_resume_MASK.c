
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_2__ {struct bas_cardstate* bas; } ;
struct cardstate {int dev; TYPE_1__ hw; } ;
struct bas_cardstate {int urb_int_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct bas_cardstate*,int ,int ) ;
 struct cardstate* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_3)
{
 struct cardstate *VAR_4 = FUNC_4(VAR_3);
 struct bas_cardstate *VAR_5 = VAR_4->hw.bas;
 int VAR_6;


 VAR_6 = FUNC_5(VAR_5->urb_int_in, VAR_2);
 if (VAR_6) {
  FUNC_0(VAR_4->dev, "could not resubmit interrupt URB: %s\n",
   FUNC_1(VAR_6));
  return VAR_6;
 }


 FUNC_3(VAR_5, 0, VAR_0);

 FUNC_2(VAR_1, "resume complete");
 return 0;
}
