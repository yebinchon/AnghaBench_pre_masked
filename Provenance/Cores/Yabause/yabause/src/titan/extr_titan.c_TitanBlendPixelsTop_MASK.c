
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static u32 FUNC_5(u32 VAR_0, u32 VAR_1)
{
   u8 VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

   VAR_2 = (FUNC_1(VAR_0) << 2) + 3;
   VAR_3 = 0xFF - VAR_2;

   VAR_4 = (FUNC_4(VAR_0) * VAR_2) / 0xFF;
   VAR_5 = (FUNC_3(VAR_0) * VAR_2) / 0xFF;
   VAR_6 = (FUNC_2(VAR_0) * VAR_2) / 0xFF;

   VAR_7 = (FUNC_4(VAR_1) * VAR_3) / 0xFF;
   VAR_8 = (FUNC_3(VAR_1) * VAR_3) / 0xFF;
   VAR_9 = (FUNC_2(VAR_1) * VAR_3) / 0xFF;

   return FUNC_0(0x3F, VAR_4 + VAR_7, VAR_5 + VAR_8, VAR_6 + VAR_9);
}
