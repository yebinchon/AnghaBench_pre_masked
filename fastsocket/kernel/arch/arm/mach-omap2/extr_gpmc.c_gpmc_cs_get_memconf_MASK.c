
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(int VAR_3, u32 *VAR_4, u32 *VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_0(VAR_3, VAR_1);
 *VAR_4 = (VAR_6 & 0x3f) << VAR_0;
 VAR_7 = (VAR_6 >> 8) & 0x0f;
 *VAR_5 = (1 << VAR_2) - (VAR_7 << VAR_0);
}
