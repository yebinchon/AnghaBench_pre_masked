
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 scalar_t__ FUNC_0 (int const*,int *) ;
 scalar_t__ FUNC_1 (int const*,int *) ;
 scalar_t__ FUNC_2 (int const*,int *) ;
 char* FUNC_3 (char*,int ) ;

__attribute__((used)) static
unsigned char *FUNC_4(const void *VAR_0, char *VAR_1, int VAR_2, int VAR_3)
{
 const u8 *VAR_4 = VAR_0;
 u8 VAR_5[4];

 if ((u32) VAR_4 & 1 && VAR_2 >= 1) {
  if (FUNC_0(VAR_4, VAR_5) != 0)
   return 0;
  VAR_1 = FUNC_3(VAR_1, VAR_5[0]);
  VAR_4++;
  VAR_2--;
 }

 if ((u32) VAR_4 & 3 && VAR_2 >= 2) {
  if (FUNC_2(VAR_4, VAR_5) != 0)
   return 0;
  VAR_1 = FUNC_3(VAR_1, VAR_5[0]);
  VAR_1 = FUNC_3(VAR_1, VAR_5[1]);
  VAR_4 += 2;
  VAR_2 -= 2;
 }

 while (VAR_2 >= 4) {
  if (FUNC_1(VAR_4, VAR_5) != 0)
   return 0;
  VAR_1 = FUNC_3(VAR_1, VAR_5[0]);
  VAR_1 = FUNC_3(VAR_1, VAR_5[1]);
  VAR_1 = FUNC_3(VAR_1, VAR_5[2]);
  VAR_1 = FUNC_3(VAR_1, VAR_5[3]);
  VAR_4 += 4;
  VAR_2 -= 4;
 }

 if (VAR_2 >= 2) {
  if (FUNC_2(VAR_4, VAR_5) != 0)
   return 0;
  VAR_1 = FUNC_3(VAR_1, VAR_5[0]);
  VAR_1 = FUNC_3(VAR_1, VAR_5[1]);
  VAR_4 += 2;
  VAR_2 -= 2;
 }

 if (VAR_2 >= 1) {
  if (FUNC_0(VAR_4, VAR_5) != 0)
   return 0;
  VAR_1 = FUNC_3(VAR_1, VAR_5[0]);
 }

 *VAR_1 = 0;
 return VAR_1;
}
