
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct nv05_devinit_priv {int dummy; } ;
struct nouveau_devinit {int dummy; } ;
struct nouveau_bios {int dummy; } ;
struct io_mapping {int dummy; } ;
struct TYPE_2__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nouveau_bios*) ;
 int FUNC_2 (struct io_mapping*) ;
 struct io_mapping* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct io_mapping*,int) ;
 int FUNC_5 (struct io_mapping*,int,scalar_t__) ;
 int FUNC_6 (struct io_mapping*,int,scalar_t__) ;
 struct nouveau_bios* FUNC_7 (struct nv05_devinit_priv*) ;
 TYPE_1__* FUNC_8 (struct nv05_devinit_priv*) ;
 int FUNC_9 (struct nv05_devinit_priv*,char*) ;
 int FUNC_10 (struct nv05_devinit_priv*,int,int,int) ;
 int FUNC_11 (struct nv05_devinit_priv*,int) ;
 int FUNC_12 (struct nv05_devinit_priv*,int ,int) ;
 int FUNC_13 (struct nouveau_bios*,scalar_t__) ;
 scalar_t__ FUNC_14 (struct nouveau_bios*,scalar_t__) ;
 int FUNC_15 (struct nv05_devinit_priv*,int ,scalar_t__) ;
 int FUNC_16 (struct nv05_devinit_priv*,int ,int,int) ;

__attribute__((used)) static void
FUNC_17(struct nouveau_devinit *VAR_13)
{
 static const u8 VAR_14[][2] = {
  { 0x24, 0x00 },
  { 0x28, 0x00 },
  { 0x24, 0x01 },
  { 0x1f, 0x00 },
  { 0x0f, 0x00 },
  { 0x17, 0x00 },
  { 0x06, 0x00 },
  { 0x00, 0x00 }
 };
 struct nv05_devinit_priv *VAR_15 = (void *)VAR_13;
 struct nouveau_bios *VAR_16 = FUNC_7(VAR_15);
 struct io_mapping *VAR_17;
 u32 VAR_18 = 0xdeadbeef;
 u16 VAR_19;
 u8 VAR_20, VAR_21[2];
 int VAR_22, VAR_23;


 VAR_17 = FUNC_3(FUNC_8(VAR_15)->pdev);
 if (!VAR_17) {
  FUNC_9(VAR_15, "failed to map fb\n");
  return;
 }

 VAR_20 = (FUNC_11(VAR_15, 0x101000) & 0x0000003c) >> 2;
 if ((VAR_19 = FUNC_1(VAR_16))) {
  VAR_21[0] = FUNC_13(VAR_16, VAR_19 + 2 * VAR_20 + 0);
  VAR_21[1] = FUNC_13(VAR_16, VAR_19 + 2 * VAR_20 + 1);
 } else {
  VAR_21[0] = VAR_14[VAR_20][0];
  VAR_21[1] = VAR_14[VAR_20][1];
 }


 FUNC_16(VAR_15, 0, 1, FUNC_12(VAR_15, 0, 1) | 0x20);

 if (FUNC_11(VAR_15, VAR_0) & VAR_7)
  goto out;

 FUNC_10(VAR_15, VAR_11, VAR_12, 0);


 if (VAR_19) {
  for (VAR_22 = 0, VAR_19 += 0x10; VAR_22 < 8; VAR_22++, VAR_19 += 4) {
   u32 VAR_24 = FUNC_14(VAR_16, VAR_19);
   FUNC_15(VAR_15, FUNC_0(VAR_22), VAR_24);
  }
 }


 FUNC_10(VAR_15, VAR_0, 0x3f, VAR_21[0]);

 if (VAR_21[1] & 0x80)
  FUNC_10(VAR_15, VAR_8, 0, VAR_9);

 FUNC_10(VAR_15, VAR_10, 0x700001, (VAR_21[1] & 1) << 20);
 FUNC_10(VAR_15, VAR_10, 0, 1);


 for (VAR_22 = 0; VAR_22 < 4; VAR_22++)
  FUNC_5(VAR_17, 4 * VAR_22, VAR_18);

 if (FUNC_4(VAR_17, 0xc) != VAR_18)
  FUNC_10(VAR_15, VAR_0,
     VAR_6, 0);


 VAR_23 = FUNC_11(VAR_15, VAR_0) & VAR_1;

 if (VAR_23 == VAR_3 &&
     (!FUNC_6(VAR_17, 0x1000000, ++VAR_18) ||
      !FUNC_6(VAR_17, 0, ++VAR_18)))
  FUNC_10(VAR_15, VAR_0, VAR_1,
     VAR_2);

 if (VAR_23 == VAR_2 &&
     !FUNC_6(VAR_17, 0x800000, ++VAR_18))
  FUNC_10(VAR_15, VAR_0, VAR_1,
     VAR_5);

 if (!FUNC_6(VAR_17, 0x400000, ++VAR_18))
  FUNC_10(VAR_15, VAR_0, VAR_1,
     VAR_4);

out:

 FUNC_16(VAR_15, 0, 1, FUNC_12(VAR_15, 0, 1) & ~0x20);
 FUNC_2(VAR_17);
}
