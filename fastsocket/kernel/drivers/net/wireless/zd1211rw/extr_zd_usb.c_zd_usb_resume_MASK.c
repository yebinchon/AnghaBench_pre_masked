
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb {int intf; scalar_t__ was_running; } ;
struct zd_mac {scalar_t__ type; int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct zd_mac*) ;
 int FUNC_7 (struct zd_usb*) ;
 int FUNC_8 (struct zd_usb*) ;
 struct zd_mac* FUNC_9 (struct zd_usb*) ;

__attribute__((used)) static void FUNC_10(struct zd_usb *VAR_2)
{
 struct zd_mac *VAR_3 = FUNC_9(VAR_2);
 int VAR_4;

 FUNC_1(FUNC_7(VAR_2), "\n");

 VAR_4 = FUNC_5(FUNC_8(VAR_2));
 if (VAR_4 < 0) {
  FUNC_2(FUNC_7(VAR_2), "Device resume failed "
    "with error code %d. Retrying...\n", VAR_4);
  if (VAR_2->was_running)
   FUNC_3(VAR_1, &VAR_3->flags);
  FUNC_4(VAR_2->intf);
  return;
 }

 if (VAR_3->type != VAR_0) {
  VAR_4 = FUNC_6(VAR_3);
  if (VAR_4 < 0) {
   FUNC_0(FUNC_7(VAR_2),
    "failed to restore settings, %d\n", VAR_4);
   return;
  }
 }
}
