
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int s8 ;



__attribute__((used)) static inline u8 FUNC_0(u8 *VAR_0)
{
 s8 VAR_1 = (VAR_0[2] & 0xfc) >> 2;


 if (VAR_1 > 32)
  VAR_1 |= 0xe0;
 else
  VAR_1 &= ~0xe0;

 return VAR_1 + 29;
}
