
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wbcir_data {int irdata_count; int irdata_off; int irdata_error; int irdata; } ;


 scalar_t__ FUNC_0 (int,int ) ;

__attribute__((used)) static u16
FUNC_1(struct wbcir_data *VAR_0, int VAR_1)
{
 u16 VAR_2 = 0x0;

 if (VAR_0->irdata_count - VAR_0->irdata_off < VAR_1) {
  VAR_0->irdata_error = 1;
  return 0x0;
 }

 while (VAR_1 > 0) {
  VAR_2 <<= 1;
  if (FUNC_0(VAR_0->irdata_off, VAR_0->irdata))
   VAR_2 |= 0x1;
  VAR_1--;
  VAR_0->irdata_off++;
 }

 return VAR_2;
}
