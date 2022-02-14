
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;



__attribute__((used)) static inline u16 FUNC_0(u8 *VAR_0)
{
 return (VAR_0[0] & 0xc0) >> 6 |
        (VAR_0[1] & 0xff) << 2 |
        (VAR_0[2] & 0x03) << 10;
}
