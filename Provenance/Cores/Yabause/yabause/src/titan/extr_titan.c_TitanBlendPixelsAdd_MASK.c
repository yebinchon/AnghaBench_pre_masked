
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static u32 FUNC_4(u32 VAR_0, u32 VAR_1)
{
   u32 VAR_2, VAR_3, VAR_4;

   VAR_2 = FUNC_3(VAR_0) + FUNC_3(VAR_1);
   if (VAR_2 > 0xFF) VAR_2 = 0xFF;

   VAR_3 = FUNC_2(VAR_0) + FUNC_2(VAR_1);
   if (VAR_3 > 0xFF) VAR_3 = 0xFF;

   VAR_4 = FUNC_1(VAR_0) + FUNC_1(VAR_1);
   if (VAR_4 > 0xFF) VAR_4 = 0xFF;

   return FUNC_0(0x3F, VAR_2, VAR_3, VAR_4);
}
