
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int const) ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 (int ,int const) ;

__attribute__((used)) static void FUNC_3(const void *VAR_1, unsigned int VAR_2)
{
 while (VAR_2 >= 4) {
  FUNC_0(VAR_0, *(const u32 *) VAR_1);
  VAR_2 -= 4;
  VAR_1 += 4;
 }
 while (VAR_2 >= 2) {
  FUNC_1(VAR_0, *(const u16 *) VAR_1);
  VAR_2 -= 2;
  VAR_1 += 2;
 }
 while (VAR_2) {
  FUNC_2(VAR_0, *(const u8 *) VAR_1);
  VAR_2--;
  VAR_1++;
 }
}
