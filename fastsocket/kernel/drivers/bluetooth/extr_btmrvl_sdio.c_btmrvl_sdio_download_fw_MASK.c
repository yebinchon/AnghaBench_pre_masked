
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btmrvl_sdio_card {int func; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct btmrvl_sdio_card*) ;
 int FUNC_3 (struct btmrvl_sdio_card*) ;
 scalar_t__ FUNC_4 (struct btmrvl_sdio_card*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct btmrvl_sdio_card *VAR_4)
{
 int VAR_5 = 0;

 if (!VAR_4 || !VAR_4->func) {
  FUNC_1("card or function is NULL!");
  return -VAR_0;
 }
 FUNC_5(VAR_4->func);

 if (!FUNC_4(VAR_4, 1)) {
  FUNC_0("Firmware already downloaded!");
  goto done;
 }

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5) {
  FUNC_1("Failed to download helper!");
  VAR_5 = -VAR_1;
  goto done;
 }

 if (FUNC_2(VAR_4)) {
  FUNC_1("Failed to download firmware!");
  VAR_5 = -VAR_1;
  goto done;
 }

 if (FUNC_4(VAR_4, VAR_3)) {
  FUNC_1("FW failed to be active in time!");
  VAR_5 = -VAR_2;
  goto done;
 }

done:
 FUNC_6(VAR_4->func);

 return VAR_5;
}
