
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct if_spi_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct if_spi_card*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct if_spi_card *VAR_1, u32 VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5;
 for (VAR_5 = 0; VAR_5 < 4; ++VAR_5) {
  u32 VAR_6 = 0;
  VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_6);
  if (VAR_4)
   return VAR_4;
  if (VAR_6 == VAR_3)
   return 0;
  FUNC_0(100);
 }
 return -VAR_0;
}
