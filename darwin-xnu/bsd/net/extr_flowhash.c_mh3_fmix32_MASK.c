
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;



__attribute__((used)) static inline u_int32_t
FUNC_0(u_int32_t VAR_0)
{
 VAR_0 ^= VAR_0 >> 16;
 VAR_0 *= 0x85ebca6b;
 VAR_0 ^= VAR_0 >> 13;
 VAR_0 *= 0xc2b2ae35;
 VAR_0 ^= VAR_0 >> 16;

 return (VAR_0);
}
