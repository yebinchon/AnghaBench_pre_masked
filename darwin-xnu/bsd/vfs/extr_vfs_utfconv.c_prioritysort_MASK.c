
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
typedef scalar_t__ u_int16_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static void
FUNC_1(u_int16_t* VAR_0, int VAR_1)
{
 u_int32_t VAR_2, VAR_3;
 u_int16_t *VAR_4, *VAR_5;
 u_int16_t *VAR_6;
 int VAR_7 = 0;

 VAR_6 = VAR_0 + VAR_1;
 do {
  VAR_7 = 0;
  VAR_4 = VAR_0;
  VAR_5 = VAR_0 + 1;
  VAR_3 = FUNC_0(*VAR_4);
  while (VAR_5 < VAR_6) {
   VAR_2 = VAR_3;
   VAR_3 = FUNC_0(*VAR_5);
   if (VAR_2 > VAR_3 && VAR_3 != 0) {
    u_int32_t VAR_8;

    VAR_8 = *VAR_4;
    *VAR_4 = *VAR_5;
    *VAR_5 = VAR_8;
    VAR_7 = 1;
    VAR_3 = VAR_2;
   }
   ++VAR_4;
   ++VAR_5;
  }
 } while (VAR_7);
}
