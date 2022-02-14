
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(u32 VAR_1,u16 VAR_2,u16 VAR_3,u8 VAR_4,u32 VAR_5,u16 VAR_6,u32 *VAR_7,u32 *VAR_8)
{
 u32 VAR_9,VAR_10;

 VAR_2 &= 0xfff0;
 VAR_9 = (VAR_4<<5)&0x1fe0;
 *VAR_7 = VAR_1+((VAR_2<<5)+(VAR_3*VAR_9));
 *VAR_8 = *VAR_7;
 if(VAR_5==VAR_0) *VAR_8 = *VAR_7+VAR_9;

 if(VAR_6%2) {
  VAR_10 = *VAR_7;
  *VAR_7 = *VAR_8;
  *VAR_8 = VAR_10;
 }

 *VAR_7 = FUNC_0(*VAR_7);
 *VAR_8 = FUNC_0(*VAR_8);
}
