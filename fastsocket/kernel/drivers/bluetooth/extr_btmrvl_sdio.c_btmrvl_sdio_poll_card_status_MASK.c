
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct btmrvl_sdio_card {int func; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct btmrvl_sdio_card *VAR_3, u8 VAR_4)
{
 unsigned int VAR_5;
 u8 VAR_6;
 int VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_2 * 1000; VAR_5++) {
  VAR_6 = FUNC_1(VAR_3->func, VAR_0, &VAR_7);
  if (VAR_7)
   goto failed;
  if ((VAR_6 & VAR_4) == VAR_4)
   return VAR_7;

  FUNC_2(1);
 }

 VAR_7 = -VAR_1;

failed:
 FUNC_0("FAILED! ret=%d", VAR_7);

 return VAR_7;
}
