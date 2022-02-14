
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct btmrvl_sdio_card {int rx_unit; int func; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct btmrvl_sdio_card *VAR_1, u16 *VAR_2)
{
 u8 VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_1->func, VAR_0, &VAR_4);
 if (!VAR_4)
  *VAR_2 = (u16) VAR_3 << VAR_1->rx_unit;

 return VAR_4;
}
