
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdio_func {int dummy; } ;
struct hci_dev {int dummy; } ;
struct btmrvl_sdio_card {struct btmrvl_private* priv; } ;
struct TYPE_2__ {struct hci_dev* hcidev; } ;
struct btmrvl_private {TYPE_1__ btmrvl_dev; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct btmrvl_private*) ;
 scalar_t__ FUNC_3 (struct btmrvl_private*,int *) ;
 struct btmrvl_sdio_card* FUNC_4 (struct sdio_func*) ;

__attribute__((used)) static void FUNC_5(struct sdio_func *VAR_0)
{
 struct btmrvl_private *VAR_1;
 struct hci_dev *VAR_2;
 struct btmrvl_sdio_card *VAR_3;
 u8 VAR_4 = 0;

 VAR_3 = FUNC_4(VAR_0);
 if (VAR_3 && VAR_3->priv) {
  VAR_1 = VAR_3->priv;
  VAR_2 = VAR_1->btmrvl_dev.hcidev;

  if (FUNC_3(VAR_1, &VAR_4))
   FUNC_1("reading HOST_INT_STATUS_REG failed");
  else
   FUNC_0("HOST_INT_STATUS_REG %#x", VAR_4);

  FUNC_2(VAR_1);
 }
}
