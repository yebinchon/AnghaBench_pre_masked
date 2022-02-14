
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wbcir_data {int irdata_error; } ;


 int FUNC_0 (struct wbcir_data*,int) ;

__attribute__((used)) static u8
FUNC_1(struct wbcir_data *VAR_0)
{
 u16 VAR_1 = FUNC_0(VAR_0, 16);
 u8 VAR_2 = 0x00;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 8; VAR_3++) {
  switch (VAR_1 & 0x03) {
  case 0x01:
   break;
  case 0x02:
   VAR_2 |= (0x01 << VAR_3);
   break;
  default:
   VAR_0->irdata_error = 1;
   break;
  }
  VAR_1 >>= 2;
 }

 return VAR_2;
}
