
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,scalar_t__*) ;
 int FUNC_2 (int,int,scalar_t__ const) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

int FUNC_5(s32 VAR_0, u32 VAR_1, const void *VAR_2, size_t VAR_3)
{
 s32 VAR_4=1;
 const u8 *VAR_5 = (const u8*)VAR_2;
 u8 VAR_6;

 FUNC_3(VAR_0);
 while (VAR_4 && VAR_3--)
 {
  if (!FUNC_2(VAR_0, 0x5555, 0xAA) || !FUNC_2(VAR_0, 0x2AAA, 0x55) ||
      !FUNC_2(VAR_0, 0x5555, 0xA0) || !FUNC_2(VAR_0, VAR_1, *VAR_5))
   VAR_4 = 0;
  else
  {
   FUNC_4(20);
   if (!FUNC_1(VAR_0, VAR_1++, &VAR_6) || VAR_6 != *VAR_5++)
    VAR_4 = 0;
  }
 }
 FUNC_0(VAR_0);

 return VAR_4;
}
