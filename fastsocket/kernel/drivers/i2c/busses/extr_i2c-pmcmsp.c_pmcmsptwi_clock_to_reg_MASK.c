
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pmcmsptwi_clock {int filter; int clock; } ;



__attribute__((used)) static inline u32 FUNC_0(
   const struct pmcmsptwi_clock *VAR_0)
{
 return ((VAR_0->filter & 0xf) << 12) | (VAR_0->clock & 0x03ff);
}
