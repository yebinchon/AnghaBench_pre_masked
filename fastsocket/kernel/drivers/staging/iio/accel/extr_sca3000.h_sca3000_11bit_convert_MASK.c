
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;



__attribute__((used)) static inline int FUNC_0(uint8_t VAR_0, uint8_t VAR_1)
{
 int16_t VAR_2;

 VAR_2 = ((VAR_1 >> 3) & 0x1C) | (VAR_0 << 5);
 VAR_2 |= (VAR_2 & (1 << 12)) ? 0xE000 : 0;

 return VAR_2;
}
