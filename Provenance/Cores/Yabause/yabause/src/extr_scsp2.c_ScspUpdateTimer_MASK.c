
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(u32 VAR_1, u16 *VAR_2, u8 VAR_3,
                            int VAR_4)
{
   u32 VAR_5 = *VAR_2 + (VAR_1 << (8 - VAR_3));
   if (FUNC_1(VAR_5 >= 0xFF00))
   {
      FUNC_0(VAR_4, VAR_0);
      VAR_5 -= 0xFF00;
   }
   *VAR_2 = VAR_5;
}
