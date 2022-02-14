
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct btmrvl_sdio_card {int func; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct btmrvl_sdio_card *VAR_2,
        u8 VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_2->func, VAR_3, VAR_1, &VAR_4);
 if (VAR_4) {
  FUNC_0("Unable to enable the host interrupt!");
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
