
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wbcir_data {int irdata_error; } ;


 int FUNC_0 (struct wbcir_data*,unsigned int) ;

__attribute__((used)) static u8
FUNC_1(struct wbcir_data *VAR_0, unsigned int VAR_1)
{
 u16 VAR_2 = FUNC_0(VAR_0, VAR_1 * 2);
 u8 VAR_3 = 0x00;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  switch (VAR_2 & 0x03) {
  case 0x01:
   VAR_3 |= (0x01 << VAR_4);
   break;
  case 0x02:
   break;
  default:
   VAR_0->irdata_error = 1;
   break;
  }
  VAR_2 >>= 2;
 }

 return VAR_3;
}
