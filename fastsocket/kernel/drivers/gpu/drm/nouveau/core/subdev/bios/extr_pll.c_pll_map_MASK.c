
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pll_mapping {int dummy; } ;
struct nouveau_bios {int dummy; } ;
struct TYPE_2__ {int card_type; int chipset; } ;
 struct pll_mapping* VAR_0 ;
 struct pll_mapping* VAR_1 ;
 struct pll_mapping* VAR_2 ;
 struct pll_mapping* VAR_3 ;
 TYPE_1__* FUNC_0 (struct nouveau_bios*) ;

__attribute__((used)) static struct pll_mapping *
FUNC_1(struct nouveau_bios *VAR_4)
{
 switch (FUNC_0(VAR_4)->card_type) {
 case 133:
 case 132:
 case 131:
 case 130:
  return VAR_0;
  break;
 case 129:
  return VAR_1;
 case 128:
  if (FUNC_0(VAR_4)->chipset == 0x50)
   return VAR_2;
  else
  if (FUNC_0(VAR_4)->chipset < 0xa3 ||
      FUNC_0(VAR_4)->chipset == 0xaa ||
      FUNC_0(VAR_4)->chipset == 0xac)
   return VAR_3;
 default:
  return ((void*)0);
 }
}
