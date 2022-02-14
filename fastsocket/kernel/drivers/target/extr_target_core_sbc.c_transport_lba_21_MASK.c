
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u32 ;



__attribute__((used)) static inline u32 FUNC_0(unsigned char *VAR_0)
{
 return ((VAR_0[1] & 0x1f) << 16) | (VAR_0[2] << 8) | VAR_0[3];
}
