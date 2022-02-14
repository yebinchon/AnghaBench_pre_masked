
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct nv04_clock_priv {int dummy; } ;
struct nouveau_pll_vals {int log2P; int NM1; int NM2; int N2; int M2; } ;
struct TYPE_3__ {int chip; } ;
struct TYPE_4__ {TYPE_1__ version; } ;


 int FUNC_0 (int,int,int) ;
 TYPE_2__* FUNC_1 (struct nv04_clock_priv*) ;
 int FUNC_2 (struct nv04_clock_priv*,int) ;
 int FUNC_3 (struct nv04_clock_priv*,int,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void
FUNC_5(struct nv04_clock_priv *VAR_0, u32 VAR_1,
         struct nouveau_pll_vals *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0)->version.chip;
 bool VAR_4 = VAR_3 == 0x30 || VAR_3 == 0x35;
 uint32_t VAR_5 = VAR_1 + ((VAR_1 == 0x680520) ? 0x5c : 0x70);
 uint32_t VAR_6 = FUNC_2(VAR_0, VAR_1);
 uint32_t VAR_7 = !VAR_4 ? FUNC_2(VAR_0, VAR_5) : 0;
 uint32_t VAR_8 = (VAR_6 & 0xfff80000) | VAR_2->log2P << 16 | VAR_2->NM1;
 uint32_t VAR_9 = (VAR_7 & 0x7fff0000) | 1 << 31 | VAR_2->NM2;
 uint32_t VAR_10 = 0, VAR_11 = 0;
 bool VAR_12 = !VAR_2->NM2 || VAR_2->N2 == VAR_2->M2;
 uint32_t VAR_13 = 0, VAR_14 = 0;
 int VAR_15 = FUNC_4(VAR_3, VAR_1);


 if (VAR_4) {
  VAR_8 = (VAR_8 & 0xfcc7ffff) | (VAR_2->N2 & 0x18) << 21 |
         (VAR_2->N2 & 0x7) << 19 | 8 << 4 | (VAR_2->M2 & 7) << 4;
  VAR_9 = 0;
 }
 if (VAR_3 > 0x40 && VAR_1 >= 0x680508) {
  VAR_10 = FUNC_2(VAR_0, 0x680580);
  VAR_11 = FUNC_0(VAR_1, VAR_12, VAR_10);
  if (VAR_10 != VAR_11)
   VAR_6 = ~0;
  if (VAR_12)

   VAR_9 |= 0x011f;
 }
 if (VAR_3 > 0x70)

  VAR_8 = (VAR_8 & 0x7fffffff) | (VAR_12 ? 0x4 : 0xc) << 28;

 if (VAR_6 == VAR_8 && VAR_7 == VAR_9)
  return;

 if (VAR_15 >= 0) {
  VAR_13 = FUNC_2(VAR_0, 0x001584);
  FUNC_3(VAR_0, 0x001584,
   (VAR_13 & ~(0xf << VAR_15)) |
   1 << VAR_15);
 }

 if (VAR_3 >= 0x40) {
  int VAR_16 = 14;

  switch (VAR_1) {
  case 0x680504:
   VAR_16 += 2;
  case 0x680500:
   VAR_16 += 2;
  case 0x680520:
   VAR_16 += 2;
  case 0x680508:
   VAR_16 += 2;
  }

  VAR_14 = FUNC_2(VAR_0, 0xc040);
  if (VAR_16 != 14)
   FUNC_3(VAR_0, 0xc040, VAR_14 & ~(3 << VAR_16));
 }

 if (VAR_10 != VAR_11)
  FUNC_3(VAR_0, 0x680580, VAR_11);

 if (!VAR_4)
  FUNC_3(VAR_0, VAR_5, VAR_9);
 FUNC_3(VAR_0, VAR_1, VAR_8);

 if (VAR_15 >= 0)
  FUNC_3(VAR_0, 0x001584, VAR_13);
 if (VAR_3 >= 0x40)
  FUNC_3(VAR_0, 0xc040, VAR_14);
}
