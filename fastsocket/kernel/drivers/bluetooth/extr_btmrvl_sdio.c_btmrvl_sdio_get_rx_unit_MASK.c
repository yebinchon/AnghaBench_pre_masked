
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct btmrvl_sdio_card {int rx_unit; int func; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct btmrvl_sdio_card *VAR_1)
{
 u8 VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_1->func, VAR_0, &VAR_3);
 if (!VAR_3)
  VAR_1->rx_unit = VAR_2;

 return VAR_3;
}
