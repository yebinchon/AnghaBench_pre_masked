
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvc0_graph_priv {int firmware; int gpc_nr; int rop_nr; int* tpc_nr; int tpc_total; int magic_not_rop_nr; int unk4188b8; int unk4188b4; int fuc41ad; int fuc41ac; int fuc409d; int fuc409c; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int firmware; int gpc_nr; int rop_nr; int* tpc_nr; int tpc_total; int magic_not_rop_nr; int unk4188b8; int unk4188b4; int fuc41ad; int fuc41ac; int fuc409d; int fuc409c; } ;
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
 scalar_t__ FUNC_11 (struct nvc0_graph_priv*,char*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_12(struct nouveau_object *VAR_4, struct nouveau_object *VAR_5,
        struct nouveau_oclass *VAR_6, void *VAR_7, u32 VAR_8,
        struct nouveau_object **VAR_9)
{
 struct nouveau_device *VAR_10 = FUNC_4(VAR_4);
 struct nvc0_graph_priv *VAR_11;
 int VAR_12, VAR_13;

 VAR_12 = FUNC_3(VAR_4, VAR_5, VAR_6, 1, &VAR_11);
 *VAR_9 = FUNC_7(VAR_11);
 if (VAR_12)
  return VAR_12;

 FUNC_9(VAR_11)->unit = 0x18001000;
 FUNC_9(VAR_11)->intr = VAR_2;
 FUNC_5(VAR_11)->cclass = &VAR_1;
 FUNC_5(VAR_11)->sclass = VAR_3;

 if (FUNC_1(VAR_10->cfgopt, "NvGrUseFW", 0)) {
  FUNC_6(VAR_11, "using external firmware\n");
  if (FUNC_11(VAR_11, "fuc409c", &VAR_11->fuc409c) ||
      FUNC_11(VAR_11, "fuc409d", &VAR_11->fuc409d) ||
      FUNC_11(VAR_11, "fuc41ac", &VAR_11->fuc41ac) ||
      FUNC_11(VAR_11, "fuc41ad", &VAR_11->fuc41ad))
   return -VAR_0;
  VAR_11->firmware = 1;
 }

 VAR_12 = FUNC_2(VAR_4, ((void*)0), 0x1000, 256, 0, &VAR_11->unk4188b4);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_2(VAR_4, ((void*)0), 0x1000, 256, 0, &VAR_11->unk4188b8);
 if (VAR_12)
  return VAR_12;

 for (VAR_13 = 0; VAR_13 < 0x1000; VAR_13 += 4) {
  FUNC_10(VAR_11->unk4188b4, VAR_13, 0x00000010);
  FUNC_10(VAR_11->unk4188b8, VAR_13, 0x00000010);
 }

 VAR_11->gpc_nr = FUNC_8(VAR_11, 0x409604) & 0x0000001f;
 VAR_11->rop_nr = (FUNC_8(VAR_11, 0x409604) & 0x001f0000) >> 16;
 for (VAR_13 = 0; VAR_13 < VAR_11->gpc_nr; VAR_13++) {
  VAR_11->tpc_nr[VAR_13] = FUNC_8(VAR_11, FUNC_0(VAR_13, 0x2608));
  VAR_11->tpc_total += VAR_11->tpc_nr[VAR_13];
 }

 switch (FUNC_4(VAR_11)->chipset) {
 case 0xe4:
  if (VAR_11->tpc_total == 8)
   VAR_11->magic_not_rop_nr = 3;
  else
  if (VAR_11->tpc_total == 7)
   VAR_11->magic_not_rop_nr = 1;
  break;
 case 0xe7:
 case 0xe6:
  VAR_11->magic_not_rop_nr = 1;
  break;
 default:
  break;
 }

 return 0;
}
