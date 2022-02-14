
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u8 *FUNC_0(u8 *VAR_2, u32 VAR_3)
{
 if (VAR_3 & VAR_1) {

  VAR_2 += VAR_0;


  VAR_2 += 4 * (VAR_2[0] & 0x0f);
  VAR_2 += 4 * ((VAR_2[12] >> 4) & 0x0f);
 }
 return VAR_2;
}
