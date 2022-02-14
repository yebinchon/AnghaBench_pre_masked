
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline void FUNC_2(u8 VAR_3, unsigned long VAR_4)
{
 u16 VAR_5, VAR_6 = 0;
 int VAR_7, VAR_8;

 if (VAR_4 & VAR_0)
  VAR_6 ^= 0x03;
 VAR_6 = VAR_4 & 0x3f;
 if (VAR_3 & 1)
  VAR_7 = 6;
 else
  VAR_7 = 0;
 if (VAR_3 <= 1)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_2;

 VAR_5 = FUNC_0(VAR_8);
 VAR_5 &= ~(0x3f << VAR_7);
 VAR_5 |= VAR_6 << VAR_7;
 FUNC_1(VAR_8, VAR_5);
}
