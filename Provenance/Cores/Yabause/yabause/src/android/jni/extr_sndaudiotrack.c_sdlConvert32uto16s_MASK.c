
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int s32 ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(s32 *VAR_2, s32 *VAR_3, s16 *VAR_4, u32 VAR_5) {
   u32 VAR_6;

   for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
   {

      *VAR_2 = ( *VAR_2 *VAR_1 ) / VAR_0;
      if (*VAR_2 > 0x7FFF) *VAR_4 = 0x7FFF;
      else if (*VAR_2 < -0x8000) *VAR_4 = -0x8000;
      else *VAR_4 = *VAR_2;
      VAR_2++;
      VAR_4++;

   *VAR_3 = ( *VAR_3 *VAR_1 ) / VAR_0;
      if (*VAR_3 > 0x7FFF) *VAR_4 = 0x7FFF;
      else if (*VAR_3 < -0x8000) *VAR_4 = -0x8000;
      else *VAR_4 = *VAR_3;
      VAR_3++;
      VAR_4++;
   }
}
