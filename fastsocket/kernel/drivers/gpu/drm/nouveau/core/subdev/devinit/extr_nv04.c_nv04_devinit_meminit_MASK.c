
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nv04_devinit_priv {int dummy; } ;
struct nouveau_devinit {int dummy; } ;
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
 int FUNC_0 (struct io_mapping*) ;
 struct io_mapping* FUNC_1 (int ) ;
 int FUNC_2 (struct io_mapping*,int) ;
 int FUNC_3 (struct io_mapping*,int,int) ;
 scalar_t__ FUNC_4 (struct io_mapping*,int,int) ;
 TYPE_1__* FUNC_5 (struct nv04_devinit_priv*) ;
 int FUNC_6 (struct nv04_devinit_priv*,char*) ;
 int FUNC_7 (struct nv04_devinit_priv*,int ,int,int) ;
 int FUNC_8 (struct nv04_devinit_priv*,int ,int) ;
 int FUNC_9 (struct nv04_devinit_priv*,int ,int,int) ;

__attribute__((used)) static void
FUNC_10(struct nouveau_devinit *VAR_12)
{
 struct nv04_devinit_priv *VAR_13 = (void *)VAR_12;
 u32 VAR_14 = 0xdeadbeef;
 struct io_mapping *VAR_15;
 int VAR_16;


 VAR_15 = FUNC_1(FUNC_5(VAR_13)->pdev);
 if (!VAR_15) {
  FUNC_6(VAR_13, "failed to map fb\n");
  return;
 }


 FUNC_9(VAR_13, 0, 1, FUNC_8(VAR_13, 0, 1) | 0x20);
 FUNC_7(VAR_13, VAR_10, 0, VAR_11);

 FUNC_7(VAR_13, VAR_0, ~0,
        VAR_2 |
        VAR_9 |
        VAR_7);

 for (VAR_16 = 0; VAR_16 < 4; VAR_16++)
  FUNC_3(VAR_15, 4 * VAR_16, VAR_14);

 FUNC_3(VAR_15, 0x400000, VAR_14 + 1);

 if (FUNC_2(VAR_15, 0) == VAR_14 + 1) {
  FUNC_7(VAR_13, VAR_0,
         VAR_5,
         VAR_6);
  FUNC_7(VAR_13, VAR_10,
         VAR_11, 0);

  for (VAR_16 = 0; VAR_16 < 4; VAR_16++)
   FUNC_3(VAR_15, 4 * VAR_16, VAR_14);

  if ((FUNC_2(VAR_15, 0xc) & 0xffff) != (VAR_14 & 0xffff))
   FUNC_7(VAR_13, VAR_0,
          VAR_9 |
          VAR_1,
          VAR_4);
 } else
 if ((FUNC_2(VAR_15, 0xc) & 0xffff0000) != (VAR_14 & 0xffff0000)) {
  FUNC_7(VAR_13, VAR_0,
         VAR_9 |
         VAR_1,
         VAR_3);
 } else
 if (FUNC_2(VAR_15, 0) != VAR_14) {
  if (FUNC_4(VAR_15, 0x800000, VAR_14))
   FUNC_7(VAR_13, VAR_0,
          VAR_1,
          VAR_4);
  else
   FUNC_7(VAR_13, VAR_0,
          VAR_1,
          VAR_3);

  FUNC_7(VAR_13, VAR_0, VAR_5,
         VAR_8);
 } else
 if (!FUNC_4(VAR_15, 0x800000, VAR_14)) {
  FUNC_7(VAR_13, VAR_0, VAR_1,
         VAR_4);

 }


 FUNC_7(VAR_13, VAR_10, VAR_11, 0);
 FUNC_9(VAR_13, 0, 1, FUNC_8(VAR_13, 0, 1) & ~0x20);
 FUNC_0(VAR_15);
}
