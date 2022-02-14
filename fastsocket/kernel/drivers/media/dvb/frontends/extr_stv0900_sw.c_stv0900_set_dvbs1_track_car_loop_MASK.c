
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stv0900_internal {int chip_id; } ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stv0900_internal*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct stv0900_internal *VAR_2,
     enum fe_stv0900_demod_num VAR_3,
     u32 VAR_4)
{
 if (VAR_2->chip_id >= 0x30) {
  if (VAR_4 >= 15000000) {
   FUNC_0(VAR_2, VAR_0, 0x2b);
   FUNC_0(VAR_2, VAR_1, 0x1a);
  } else if ((VAR_4 >= 7000000) && (15000000 > VAR_4)) {
   FUNC_0(VAR_2, VAR_0, 0x0c);
   FUNC_0(VAR_2, VAR_1, 0x1b);
  } else if (VAR_4 < 7000000) {
   FUNC_0(VAR_2, VAR_0, 0x2c);
   FUNC_0(VAR_2, VAR_1, 0x1c);
  }

 } else {
  FUNC_0(VAR_2, VAR_0, 0x1a);
  FUNC_0(VAR_2, VAR_1, 0x09);
 }

}
