
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef size_t s32 ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 int** VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(s32 VAR_3)
{
 u32 VAR_4,VAR_5,VAR_6;

 VAR_5 = FUNC_0(VAR_3);
 VAR_4 = VAR_0&0x0700;
 if(VAR_4==0x0100) {
  VAR_1[VAR_3][4] &= ~0x0f;
  VAR_1[VAR_3][5] &= ~0x0f;
  VAR_1[VAR_3][8] &= ~0x0f;
  VAR_1[VAR_3][9] &= ~0x0f;
 } else if(VAR_4==0x200) {
  VAR_1[VAR_3][4] &= ~0x0f;
  VAR_1[VAR_3][5] &= ~0x0f;
  VAR_1[VAR_3][6] &= ~0x0f;
  VAR_1[VAR_3][7] &= ~0x0f;
 }

 VAR_1[VAR_3][2] -= 128;
 VAR_1[VAR_3][3] -= 128;
 VAR_1[VAR_3][4] -= 128;
 VAR_1[VAR_3][5] -= 128;

 if(VAR_2&VAR_5 && (s32)VAR_1[VAR_3][2]>64) {
  VAR_6 = FUNC_1(VAR_3)&~0xffff;
  if(!(VAR_6&~0x09ffffff)) VAR_1[VAR_3][2] = 0;
 }
}
