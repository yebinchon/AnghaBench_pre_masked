
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static inline void FUNC_0(u32 *VAR_0)
{
 VAR_0[3] = VAR_0[3] << 1 | VAR_0[2] >> 31;
 VAR_0[2] = VAR_0[2] << 1 | VAR_0[1] >> 31;
 VAR_0[1] = VAR_0[1] << 1 | VAR_0[0] >> 31;
 VAR_0[0] <<= 1;
}
