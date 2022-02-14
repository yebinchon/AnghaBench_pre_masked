
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvc0_graph_priv {int firmware; int rop_nr; int gpc_nr; int* tpc_nr; int tpc_total; int magic_not_rop_nr; int unk4188b8; int unk4188b4; int fuc41ad; int fuc41ac; int fuc409d; int fuc409c; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int firmware; int rop_nr; int gpc_nr; int* tpc_nr; int tpc_total; int magic_not_rop_nr; int unk4188b8; int unk4188b4; int fuc41ad; int fuc41ac; int fuc409d; int fuc409c; } ;
struct nouveau_device {int chipset; int cfgopt; } ;
struct TYPE_4__ {int sclass; int * cclass; } ;
struct TYPE_3__ {int unit; int intr; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct nvc0_graph_priv*,int *,int,int,int ,int *) ;
 int FUNC_3 (struct nvc0_graph_priv*,struct nvc0_graph_priv*,struct nouveau_oclass*,int,struct nvc0_graph_priv**) ;
 struct nouveau_device* FUNC_4 (struct nvc0_graph_priv*) ;
 TYPE_2__* FUNC_5 (struct nvc0_graph_priv*) ;
 int FUNC_6 (struct nvc0_graph_priv*,char*) ;
 struct nvc0_graph_priv* FUNC_7 (struct nvc0_graph_priv*) ;
 int FUNC_8 (struct nvc0_graph_priv*,int) ;
 TYPE_1__* FUNC_9 (struct nvc0_graph_priv*) ;
 int FUNC_10 (int ,int,int) ;
 int VAR_1 ;
 int FUNC_11 (struct nvc0_graph_priv*) ;
 scalar_t__ FUNC_12 (struct nvc0_graph_priv*,char*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_13(struct nouveau_object *VAR_6, struct nouveau_object *VAR_7,
  struct nouveau_oclass *VAR_8, void *VAR_9, u32 VAR_10,
  struct nouveau_object **VAR_11)
{
 struct nouveau_device *VAR_12 = FUNC_4(VAR_6);
 struct nvc0_graph_priv *VAR_13;
 int VAR_14, VAR_15;

 VAR_14 = FUNC_3(VAR_6, VAR_7, VAR_8, 1, &VAR_13);
 *VAR_11 = FUNC_7(VAR_13);
 if (VAR_14)
  return VAR_14;

 FUNC_9(VAR_13)->unit = 0x18001000;
 FUNC_9(VAR_13)->intr = VAR_2;
 FUNC_5(VAR_13)->cclass = &VAR_1;

 if (FUNC_1(VAR_12->cfgopt, "NvGrUseFW", 0)) {
  FUNC_6(VAR_13, "using external firmware\n");
  if (FUNC_12(VAR_13, "fuc409c", &VAR_13->fuc409c) ||
      FUNC_12(VAR_13, "fuc409d", &VAR_13->fuc409d) ||
      FUNC_12(VAR_13, "fuc41ac", &VAR_13->fuc41ac) ||
      FUNC_12(VAR_13, "fuc41ad", &VAR_13->fuc41ad))
   return -VAR_0;
  VAR_13->firmware = 1;
 }

 switch (FUNC_11(VAR_13)) {
 case 0x9097:
  FUNC_5(VAR_13)->sclass = VAR_3;
  break;
 case 0x9197:
  FUNC_5(VAR_13)->sclass = VAR_4;
  break;
 case 0x9297:
  FUNC_5(VAR_13)->sclass = VAR_5;
  break;
 }

 VAR_14 = FUNC_2(VAR_6, ((void*)0), 0x1000, 256, 0, &VAR_13->unk4188b4);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_2(VAR_6, ((void*)0), 0x1000, 256, 0, &VAR_13->unk4188b8);
 if (VAR_14)
  return VAR_14;

 for (VAR_15 = 0; VAR_15 < 0x1000; VAR_15 += 4) {
  FUNC_10(VAR_13->unk4188b4, VAR_15, 0x00000010);
  FUNC_10(VAR_13->unk4188b8, VAR_15, 0x00000010);
 }

 VAR_13->rop_nr = (FUNC_8(VAR_13, 0x409604) & 0x001f0000) >> 16;
 VAR_13->gpc_nr = FUNC_8(VAR_13, 0x409604) & 0x0000001f;
 for (VAR_15 = 0; VAR_15 < VAR_13->gpc_nr; VAR_15++) {
  VAR_13->tpc_nr[VAR_15] = FUNC_8(VAR_13, FUNC_0(VAR_15, 0x2608));
  VAR_13->tpc_total += VAR_13->tpc_nr[VAR_15];
 }


 switch (FUNC_4(VAR_13)->chipset) {
 case 0xc0:
  if (VAR_13->tpc_total == 11) {
   VAR_13->magic_not_rop_nr = 0x07;
  } else
  if (VAR_13->tpc_total == 14) {
   VAR_13->magic_not_rop_nr = 0x05;
  } else
  if (VAR_13->tpc_total == 15) {
   VAR_13->magic_not_rop_nr = 0x06;
  }
  break;
 case 0xc3:
  VAR_13->magic_not_rop_nr = 0x03;
  break;
 case 0xc4:
  VAR_13->magic_not_rop_nr = 0x01;
  break;
 case 0xc1:
  VAR_13->magic_not_rop_nr = 0x01;
  break;
 case 0xc8:
  VAR_13->magic_not_rop_nr = 0x06;
  break;
 case 0xce:
  VAR_13->magic_not_rop_nr = 0x03;
  break;
 case 0xcf:
  VAR_13->magic_not_rop_nr = 0x03;
  break;
 case 0xd9:
  VAR_13->magic_not_rop_nr = 0x01;
  break;
 }

 return 0;
}
