
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u32 ;
struct nvbios_pll {int bias_p; int max_p; } ;
struct nv04_clock_priv {int dummy; } ;
struct nouveau_pll_vals {int NM2; int NM1; int log2P; scalar_t__ N2; scalar_t__ M2; } ;


 int FUNC_0 (struct nv04_clock_priv*) ;
 int FUNC_1 (struct nv04_clock_priv*,int) ;
 int FUNC_2 (struct nv04_clock_priv*,int,int) ;
 scalar_t__ FUNC_3 (int ,int,struct nvbios_pll*) ;

__attribute__((used)) static void
FUNC_4(struct nv04_clock_priv *VAR_0, u32 VAR_1,
        struct nouveau_pll_vals *VAR_2)
{
 uint32_t VAR_3 = VAR_1 - 4;
 bool VAR_4 = VAR_3 == 0x4020;
 uint32_t VAR_5 = FUNC_1(VAR_0, VAR_3);
 uint32_t VAR_6 = VAR_2->NM2 << 16 | VAR_2->NM1;
 uint32_t VAR_7 = (VAR_5 & (VAR_4 ? ~(0x77 << 16) : ~(7 << 16))) |
   0xc << 28 | VAR_2->log2P << 16;
 uint32_t VAR_8 = 0;

 uint32_t VAR_9 = ~(3 << 14), VAR_10;
 bool VAR_11 = !VAR_2->NM2 || VAR_2->N2 == VAR_2->M2;

 if (FUNC_1(VAR_0, VAR_1) == VAR_6 && (VAR_5 & 0xc0070000) == VAR_7)
  return;

 if (VAR_3 == 0x4000)
  VAR_9 = ~0x333;
 if (VAR_3 == 0x4058)
  VAR_9 = ~(0xc << 24);

 if (VAR_4) {
  struct nvbios_pll VAR_12;
  uint8_t VAR_13;

  if (FUNC_3(FUNC_0(VAR_0), VAR_3, &VAR_12))
   return;

  VAR_13 = VAR_2->log2P + VAR_12.bias_p;
  if (VAR_13 > VAR_12.max_p)
   VAR_13 = VAR_12.max_p;
  VAR_7 |= 1 << 28 | VAR_13 << 20;

  VAR_8 = FUNC_1(VAR_0, 0x4600);
  FUNC_2(VAR_0, 0x4600, VAR_8 | 8 << 28);
 }
 if (VAR_11)
  VAR_7 |= VAR_4 ? 1 << 12 : 1 << 8;

 FUNC_2(VAR_0, VAR_3, VAR_5 | 1 << 28);
 FUNC_2(VAR_0, VAR_3, VAR_7 & ~(4 << 28));
 if (VAR_4) {
  VAR_7 |= 8 << 20;
  FUNC_2(VAR_0, 0x4020, VAR_7 & ~(0xc << 28));
  FUNC_2(VAR_0, 0x4038, VAR_7 & ~(0xc << 28));
 }

 VAR_10 = FUNC_1(VAR_0, 0xc040);
 FUNC_2(VAR_0, 0xc040, VAR_10 & VAR_9);

 FUNC_2(VAR_0, VAR_1, VAR_6);
 if (VAR_1 == 0x4024)
  FUNC_2(VAR_0, 0x403c, VAR_6);

 FUNC_2(VAR_0, VAR_3, VAR_7);
 if (VAR_4) {
  VAR_7 &= ~(8 << 20);
  FUNC_2(VAR_0, 0x4020, VAR_7);
  FUNC_2(VAR_0, 0x4038, VAR_7);
  FUNC_2(VAR_0, 0x4600, VAR_8);
 }

 FUNC_2(VAR_0, 0xc040, VAR_10);

 if (VAR_4) {
  FUNC_2(VAR_0, 0x4020, VAR_7 & ~(1 << 28));
  FUNC_2(VAR_0, 0x4038, VAR_7 & ~(1 << 28));
 }
}
