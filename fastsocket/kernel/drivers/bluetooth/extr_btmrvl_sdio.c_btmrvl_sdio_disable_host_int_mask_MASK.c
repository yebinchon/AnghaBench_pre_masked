
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct btmrvl_sdio_card {int func; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct btmrvl_sdio_card *VAR_2,
        u8 VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_2->func, VAR_1, &VAR_5);
 if (VAR_5)
  return -VAR_0;

 VAR_4 &= ~VAR_3;

 FUNC_2(VAR_2->func, VAR_4, VAR_1, &VAR_5);
 if (VAR_5 < 0) {
  FUNC_0("Unable to disable the host interrupt!");
  return -VAR_0;
 }

 return 0;
}
