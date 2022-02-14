
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int* VAR_0 ;

__attribute__((used)) static u32 FUNC_0(u32 VAR_1, const u8 *VAR_2, unsigned int VAR_3)
{
 while (VAR_3--)
  VAR_1 = VAR_0[(VAR_1 ^ *VAR_2++) & 0xFFL] ^ (VAR_1 >> 8);

 return VAR_1;
}
