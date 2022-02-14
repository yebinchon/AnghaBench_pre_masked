
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sense_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct sense_data *VAR_2, u8 VAR_3,
 u8 VAR_4, u8 VAR_5, u8 VAR_6, u16 VAR_7)
{
 u8 *VAR_8 = (u8 *)VAR_2;

 VAR_8[0] = 0x70;
 VAR_8[1] = 0;

 VAR_8[2] = VAR_3;

 VAR_8[12] = VAR_4;
 VAR_8[13] = VAR_5;

 if (VAR_3 == VAR_0) {
  VAR_8[7] = 10;

  VAR_8[15] = VAR_6;

  if (VAR_4 == VAR_1)
   VAR_8[15] |= 0xc0;

  VAR_8[16] = VAR_7 >> 8;
  VAR_8[17] = VAR_7;
 } else
  VAR_8[7] = 6;
}
