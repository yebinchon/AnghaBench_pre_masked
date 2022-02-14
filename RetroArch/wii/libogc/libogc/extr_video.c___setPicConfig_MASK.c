
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static inline void FUNC_1(u16 VAR_3,u32 VAR_4,u16 VAR_5,u16 VAR_6,u8 *VAR_7,u8 *VAR_8,u8 *VAR_9,u8 *VAR_10)
{
 *VAR_7 = (VAR_3+15)/16;
 *VAR_8 = *VAR_7;
 if(VAR_4==VAR_0) *VAR_8 <<= 1;

 *VAR_10 = VAR_5%16;
 *VAR_9 = (*VAR_10+(VAR_6+15))/16;
 VAR_2[36] = (*VAR_9<<8)|*VAR_8;
 VAR_1 |= FUNC_0(36);
}
