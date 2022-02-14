
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pmcmsptwi_clock {int filter; int clock; } ;



__attribute__((used)) static inline void FUNC_0(
   u32 VAR_0, struct pmcmsptwi_clock *VAR_1)
{
 VAR_1->filter = (VAR_0 >> 12) & 0xf;
 VAR_1->clock = VAR_0 & 0x03ff;
}
