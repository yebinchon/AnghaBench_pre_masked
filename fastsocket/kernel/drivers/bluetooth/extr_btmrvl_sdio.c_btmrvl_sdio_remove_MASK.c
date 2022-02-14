
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int dummy; } ;
struct btmrvl_sdio_card {int priv; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct btmrvl_sdio_card*) ;
 int FUNC_3 (struct btmrvl_sdio_card*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct btmrvl_sdio_card*) ;
 struct btmrvl_sdio_card* FUNC_6 (struct sdio_func*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_7(struct sdio_func *VAR_2)
{
 struct btmrvl_sdio_card *VAR_3;

 if (VAR_2) {
  VAR_3 = FUNC_6(VAR_2);
  if (VAR_3) {



   if (VAR_1) {
    FUNC_4(VAR_3->priv,
       VAR_0);
    FUNC_2(VAR_3);
   }
   FUNC_0("unregester dev");
   FUNC_3(VAR_3);
   FUNC_1(VAR_3->priv);
   FUNC_5(VAR_3);
  }
 }
}
