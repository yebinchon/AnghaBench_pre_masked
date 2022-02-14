
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct stv0900_internal {int dummy; } ;
typedef size_t s32 ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct stv0900_internal*,int ) ;
 int FUNC_2 (struct stv0900_internal*,int ,int) ;
 int FUNC_3 (struct stv0900_internal*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct stv0900_internal *VAR_4 , u8 *VAR_5,
    u32 VAR_6, enum fe_stv0900_demod_num VAR_7)
{
 s32 VAR_8 = 0;

 FUNC_2(VAR_4, VAR_1, 1);
 while (VAR_8 < VAR_6) {
  while (FUNC_1(VAR_4, VAR_2))
   ;
  FUNC_3(VAR_4, VAR_0, VAR_5[VAR_8]);
  VAR_8++;
 }

 FUNC_2(VAR_4, VAR_1, 0);
 VAR_8 = 0;
 while ((FUNC_1(VAR_4, VAR_3) != 1) && (VAR_8 < 10)) {
  FUNC_0(10);
  VAR_8++;
 }

 return 0;
}
