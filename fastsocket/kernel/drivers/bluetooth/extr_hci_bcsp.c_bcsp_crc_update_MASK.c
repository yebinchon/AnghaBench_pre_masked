
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int* VAR_0 ;

__attribute__((used)) static void FUNC_0(u16 *VAR_1, u8 VAR_2)
{
 u16 VAR_3 = *VAR_1;

 VAR_3 = (VAR_3 >> 4) ^ VAR_0[(VAR_3 ^ VAR_2) & 0x000f];
 VAR_3 = (VAR_3 >> 4) ^ VAR_0[(VAR_3 ^ (VAR_2 >> 4)) & 0x000f];

 *VAR_1 = VAR_3;
}
