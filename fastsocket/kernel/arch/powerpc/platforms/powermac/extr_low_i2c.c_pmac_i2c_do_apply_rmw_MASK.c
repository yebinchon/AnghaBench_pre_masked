
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pmac_i2c_pf_inst {int quirks; int* scratch; int const* buffer; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct pmac_i2c_pf_inst *VAR_1,
      u32 VAR_2, const u8 *VAR_3, const u8 *VAR_4)
{
 int VAR_5;

 if (VAR_1->quirks & VAR_0) {
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5 ++)
   VAR_1->scratch[VAR_5] = (VAR_1->buffer[VAR_5] & VAR_3[VAR_5]) | VAR_4[VAR_5];
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5 ++)
   VAR_1->scratch[VAR_5] = (VAR_1->buffer[VAR_5] & ~VAR_3[VAR_5])
    | (VAR_4[VAR_5] & VAR_3[VAR_5]);
 }
}
