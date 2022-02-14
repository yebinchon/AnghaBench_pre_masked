
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct nv04_clock_priv {int dummy; } ;
struct nouveau_pll_vals {int log2P; int NM1; int M1; int N1; } ;
struct TYPE_3__ {int chip; } ;
struct TYPE_4__ {TYPE_1__ version; } ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct nv04_clock_priv*) ;
 int FUNC_2 (struct nv04_clock_priv*,int) ;
 int FUNC_3 (struct nv04_clock_priv*,int,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void
FUNC_5(struct nv04_clock_priv *VAR_0, u32 VAR_1,
       struct nouveau_pll_vals *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_0)->version.chip;
 uint32_t VAR_4 = FUNC_2(VAR_0, VAR_1);
 int VAR_5 = (VAR_4 >> 8) & 0xff, VAR_6 = VAR_4 & 0xff;
 uint32_t VAR_7 = (VAR_4 & 0xfff80000) | VAR_2->log2P << 16 | VAR_2->NM1;
 uint32_t VAR_8 = 0;
 int VAR_9 = FUNC_4(VAR_3, VAR_1);

 if (VAR_4 == VAR_7)
  return;

 if (VAR_9 >= 0) {
  VAR_8 = FUNC_2(VAR_0, 0x001584);
  FUNC_3(VAR_0, 0x001584,
   (VAR_8 & ~(0xf << VAR_9)) |
   1 << VAR_9);
 }

 if (VAR_6 && VAR_2->M1 && (VAR_5 / VAR_6 < VAR_2->N1 / VAR_2->M1))

  FUNC_3(VAR_0, VAR_1, VAR_2->log2P << 16 | (VAR_4 & 0xffff));
 else

  FUNC_3(VAR_0, VAR_1, (VAR_4 & 0xffff0000) | VAR_2->NM1);

 if (VAR_3 < 0x17 && VAR_3 != 0x11)

  FUNC_0(64);
 FUNC_2(VAR_0, VAR_1);


 FUNC_3(VAR_0, VAR_1, VAR_7);

 if (VAR_9 >= 0)
  FUNC_3(VAR_0, 0x001584, VAR_8);
}
