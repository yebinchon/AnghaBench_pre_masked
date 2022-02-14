
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv04_instmem_priv {int dummy; } ;
struct TYPE_2__ {int chipset; } ;


 TYPE_1__* FUNC_0 (struct nv04_instmem_priv*) ;

__attribute__((used)) static inline int
FUNC_1(struct nv04_instmem_priv *VAR_0)
{
 if ((FUNC_0(VAR_0)->chipset & 0xf0) == 0x60)
  return 1;
 return !(0x0baf & (1 << (FUNC_0(VAR_0)->chipset & 0x0f)));
}
