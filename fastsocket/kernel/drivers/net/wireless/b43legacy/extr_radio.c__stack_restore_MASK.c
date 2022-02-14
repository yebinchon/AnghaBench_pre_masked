
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static u16 FUNC_2(u32 *VAR_1,
     u8 VAR_2, u16 VAR_3)
{
 size_t VAR_4;

 FUNC_1(!((VAR_3 & 0xE000) == 0x0000));
 FUNC_1(!((VAR_2 & 0xF8) == 0x00));
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_1++) {
  if ((*VAR_1 & 0x00001FFF) != VAR_3)
   continue;
  if (((*VAR_1 & 0x00007000) >> 13) != VAR_2)
   continue;
  return ((*VAR_1 & 0xFFFF0000) >> 16);
 }
 FUNC_0(1);

 return 0;
}
