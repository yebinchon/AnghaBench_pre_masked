
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btmrvl_sdio_card {int func; } ;
struct TYPE_2__ {struct btmrvl_sdio_card* card; } ;
struct btmrvl_private {TYPE_1__ btmrvl_dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct btmrvl_private *VAR_3)
{
 struct btmrvl_sdio_card *VAR_4 = VAR_3->btmrvl_dev.card;
 int VAR_5 = 0;

 if (!VAR_4 || !VAR_4->func) {
  FUNC_1("card or function is NULL!");
  return -VAR_1;
 }

 FUNC_2(VAR_4->func);

 FUNC_4(VAR_4->func, VAR_2, VAR_0, &VAR_5);

 FUNC_3(VAR_4->func);

 FUNC_0("wake up firmware");

 return VAR_5;
}
