
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct btmrvl_sdio_card {int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct btmrvl_sdio_card *VAR_3, u16 *VAR_4)
{
 u8 VAR_5, VAR_6;
 int VAR_7;

 *VAR_4 = 0;

 VAR_5 = FUNC_0(VAR_3->func, VAR_0, &VAR_7);

 if (!VAR_7)
  VAR_6 = FUNC_0(VAR_3->func, VAR_1, &VAR_7);

 if (VAR_7)
  return -VAR_2;

 *VAR_4 = (((u16) VAR_6) << 8) | VAR_5;

 return 0;
}
