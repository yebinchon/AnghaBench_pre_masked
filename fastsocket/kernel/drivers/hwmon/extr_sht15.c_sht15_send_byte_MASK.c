
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sht15_data {int dummy; } ;


 int FUNC_0 (struct sht15_data*,int) ;

__attribute__((used)) static void FUNC_1(struct sht15_data *VAR_0, u8 VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  FUNC_0(VAR_0, !!(VAR_1 & 0x80));
  VAR_1 <<= 1;
 }
}
