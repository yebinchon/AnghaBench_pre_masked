
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static void FUNC_0(u32 VAR_0, u8 *VAR_1, u8 *VAR_2)
{
 u8 VAR_3 = 0, VAR_4 = 0;

 (*VAR_1) = VAR_0 & 0xff;

 while ((VAR_3 == 0) && (VAR_4 < 8)) {
  VAR_3 = ((*VAR_1) >> VAR_4) & 0x01;
  VAR_4++;
 }

 (*VAR_2) = (VAR_4 - 1);
}
