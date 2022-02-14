
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pmcmsptwi_cfg {int arbf; int nak; int add10; int mst_code; int arb; int highspeed; } ;



__attribute__((used)) static inline u32 FUNC_0(const struct pmcmsptwi_cfg *VAR_0)
{
 return ((VAR_0->arbf & 0xf) << 12) |
  ((VAR_0->nak & 0xf) << 8) |
  ((VAR_0->add10 & 0x1) << 7) |
  ((VAR_0->mst_code & 0x7) << 4) |
  ((VAR_0->arb & 0x1) << 1) |
  (VAR_0->highspeed & 0x1);
}
