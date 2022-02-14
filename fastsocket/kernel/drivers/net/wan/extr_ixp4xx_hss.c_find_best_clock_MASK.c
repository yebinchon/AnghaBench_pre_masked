
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int,int,int,int,int*,int*,int*) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(u32 VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6 = 0xFFFFFFFF;

 VAR_4 = VAR_0 / VAR_1;

 if (VAR_4 > 0x3FF) {
  FUNC_0(VAR_1, 0x3FF, 1, 1, VAR_2, &VAR_6, VAR_3);
  return;
 }
 if (VAR_4 == 0) {
  VAR_4 = 1;
  VAR_1 = VAR_0;
 }

 if (VAR_1 * VAR_4 == VAR_0) {
  FUNC_0(VAR_1, VAR_4 - 1, 1, 1, VAR_2, &VAR_6, VAR_3);
  return;
 }

 for (VAR_5 = 0; VAR_5 < 0x400; VAR_5++) {
  u64 VAR_7 = (VAR_5 + 1) * (u64)VAR_1;
  FUNC_1(VAR_7, VAR_0 - VAR_1 * VAR_4);
  VAR_7--;
  if (VAR_7 >= 0xFFF) {
   if (VAR_5 == 0 &&
       !FUNC_0(VAR_1, VAR_4 - 1, 1, 1, VAR_2, &VAR_6, VAR_3))
    return;
   FUNC_0(VAR_1, VAR_4, VAR_5, 0xFFF, VAR_2, &VAR_6, VAR_3);
   return;
  }
  if (!FUNC_0(VAR_1, VAR_4, VAR_5, VAR_7, VAR_2, &VAR_6, VAR_3))
   return;
  if (!FUNC_0(VAR_1, VAR_4, VAR_5, VAR_7 + 1, VAR_2, &VAR_6, VAR_3))
   return;
 }
}
