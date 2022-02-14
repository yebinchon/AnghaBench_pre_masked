
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct if_usb_card {int surprise_removed; int fw_wq; scalar_t__ fwdnldover; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct if_usb_card *VAR_1 = (void *)VAR_0;

 if (VAR_1->fwdnldover) {
  FUNC_0("Download complete, no event. Assuming success\n");
 } else {
  FUNC_1("Download timed out\n");
  VAR_1->surprise_removed = 1;
 }
 FUNC_2(&VAR_1->fw_wq);
}
