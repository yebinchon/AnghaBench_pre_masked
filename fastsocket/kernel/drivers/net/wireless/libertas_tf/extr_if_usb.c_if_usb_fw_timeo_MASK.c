
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct if_usb_card {int fw_wq; TYPE_1__* priv; int fwdnldover; } ;
struct TYPE_2__ {int surpriseremoved; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1)
{
 struct if_usb_card *VAR_2 = (void *)VAR_1;

 FUNC_0(VAR_0);
 if (!VAR_2->fwdnldover) {

  VAR_2->priv->surpriseremoved = 1;
  FUNC_3("Download timed out\n");
 } else {
  FUNC_2("Download complete, no event. Assuming success\n");
 }
 FUNC_4(&VAR_2->fw_wq);
 FUNC_1(VAR_0);
}
