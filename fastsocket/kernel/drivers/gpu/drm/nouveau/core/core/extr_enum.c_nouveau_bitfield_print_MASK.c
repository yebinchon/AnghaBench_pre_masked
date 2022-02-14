
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_bitfield {int name; int mask; } ;


 int FUNC_0 (char*,int) ;

void
FUNC_1(const struct nouveau_bitfield *VAR_0, u32 VAR_1)
{
 while (VAR_0->name) {
  if (VAR_1 & VAR_0->mask) {
   FUNC_0(" %s", VAR_0->name);
   VAR_1 &= ~VAR_0->mask;
  }

  VAR_0++;
 }

 if (VAR_1)
  FUNC_0(" (unknown bits 0x%08x)", VAR_1);
}
