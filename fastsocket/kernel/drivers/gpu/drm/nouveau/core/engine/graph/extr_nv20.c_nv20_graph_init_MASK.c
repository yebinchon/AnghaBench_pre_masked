
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nv20_graph_priv {TYPE_1__* ctxtab; int base; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_5__ {int regions; } ;
struct nouveau_fb {TYPE_2__ tile; } ;
struct nouveau_engine {int (* tile_prog ) (struct nouveau_engine*,int) ;} ;
struct TYPE_6__ {int chipset; int pdev; } ;
struct TYPE_4__ {int addr; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct nouveau_fb* FUNC_0 (struct nouveau_object*) ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (struct nv20_graph_priv*) ;
 struct nouveau_engine* FUNC_3 (struct nouveau_object*) ;
 int FUNC_4 (struct nv20_graph_priv*,int) ;
 int FUNC_5 (struct nv20_graph_priv*,int,int,int) ;
 int FUNC_6 (struct nv20_graph_priv*,int,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct nouveau_engine*,int) ;

int
FUNC_9(struct nouveau_object *VAR_16)
{
 struct nouveau_engine *VAR_17 = FUNC_3(VAR_16);
 struct nv20_graph_priv *VAR_18 = (void *)VAR_17;
 struct nouveau_fb *VAR_19 = FUNC_0(VAR_16);
 u32 VAR_20, VAR_21;
 int VAR_22, VAR_23;

 VAR_22 = FUNC_1(&VAR_18->base);
 if (VAR_22)
  return VAR_22;

 FUNC_6(VAR_18, VAR_15, VAR_18->ctxtab->addr >> 4);

 if (FUNC_2(VAR_18)->chipset == 0x20) {
  FUNC_6(VAR_18, VAR_12, 0x003d0000);
  for (VAR_23 = 0; VAR_23 < 15; VAR_23++)
   FUNC_6(VAR_18, VAR_11, 0x00000000);
  FUNC_5(VAR_18, 0x400700, 0xffffffff, 0x00000000);
 } else {
  FUNC_6(VAR_18, VAR_12, 0x02c80000);
  for (VAR_23 = 0; VAR_23 < 32; VAR_23++)
   FUNC_6(VAR_18, VAR_11, 0x00000000);
  FUNC_5(VAR_18, 0x400700, 0xffffffff, 0x00000000);
 }

 FUNC_6(VAR_18, VAR_4 , 0xFFFFFFFF);
 FUNC_6(VAR_18, VAR_5, 0xFFFFFFFF);

 FUNC_6(VAR_18, VAR_6, 0xFFFFFFFF);
 FUNC_6(VAR_18, VAR_6, 0x00000000);
 FUNC_6(VAR_18, VAR_7, 0x00118700);
 FUNC_6(VAR_18, VAR_8, 0xF3CE0475);
 FUNC_6(VAR_18, VAR_10, 0x00000000);
 FUNC_6(VAR_18, 0x40009C , 0x00000040);

 if (FUNC_2(VAR_18)->chipset >= 0x25) {
  FUNC_6(VAR_18, 0x400890, 0x00a8cfff);
  FUNC_6(VAR_18, 0x400610, 0x304B1FB6);
  FUNC_6(VAR_18, 0x400B80, 0x1cbd3883);
  FUNC_6(VAR_18, 0x400B84, 0x44000000);
  FUNC_6(VAR_18, 0x400098, 0x40000080);
  FUNC_6(VAR_18, 0x400B88, 0x000000ff);

 } else {
  FUNC_6(VAR_18, 0x400880, 0x0008c7df);
  FUNC_6(VAR_18, 0x400094, 0x00000005);
  FUNC_6(VAR_18, 0x400B80, 0x45eae20e);
  FUNC_6(VAR_18, 0x400B84, 0x24000000);
  FUNC_6(VAR_18, 0x400098, 0x00000040);
  FUNC_6(VAR_18, VAR_12, 0x00E00038);
  FUNC_6(VAR_18, VAR_11 , 0x00000030);
  FUNC_6(VAR_18, VAR_12, 0x00E10038);
  FUNC_6(VAR_18, VAR_11 , 0x00000030);
 }


 for (VAR_23 = 0; VAR_23 < VAR_19->tile.regions; VAR_23++)
  VAR_17->tile_prog(VAR_17, VAR_23);

 FUNC_6(VAR_18, 0x4009a0, FUNC_4(VAR_18, 0x100324));
 FUNC_6(VAR_18, VAR_12, 0x00EA000C);
 FUNC_6(VAR_18, VAR_11, FUNC_4(VAR_18, 0x100324));

 FUNC_6(VAR_18, VAR_9, 0x10000100);
 FUNC_6(VAR_18, VAR_13 , 0xFFFFFFFF);

 VAR_20 = FUNC_4(VAR_18, VAR_14) & 0x0007ff00;
 FUNC_6(VAR_18, VAR_14, VAR_20);
 VAR_20 = FUNC_4(VAR_18, VAR_14) | 0x00020100;
 FUNC_6(VAR_18, VAR_14, VAR_20);


 VAR_21 = FUNC_7(FUNC_2(VAR_18)->pdev, 0) - 1;
 FUNC_6(VAR_18, 0x4009A4, FUNC_4(VAR_18, 0x100200));
 FUNC_6(VAR_18, 0x4009A8, FUNC_4(VAR_18, 0x100204));
 FUNC_6(VAR_18, VAR_12, 0x00EA0000);
 FUNC_6(VAR_18, VAR_11 , FUNC_4(VAR_18, 0x100200));
 FUNC_6(VAR_18, VAR_12, 0x00EA0004);
 FUNC_6(VAR_18, VAR_11 , FUNC_4(VAR_18, 0x100204));
 FUNC_6(VAR_18, 0x400820, 0);
 FUNC_6(VAR_18, 0x400824, 0);
 FUNC_6(VAR_18, 0x400864, VAR_21 - 1);
 FUNC_6(VAR_18, 0x400868, VAR_21 - 1);


 FUNC_6(VAR_18, 0x400B20, 0x00000000);
 FUNC_6(VAR_18, 0x400B04, 0xFFFFFFFF);

 FUNC_6(VAR_18, VAR_1, 0);
 FUNC_6(VAR_18, VAR_3, 0);
 FUNC_6(VAR_18, VAR_0, 0x7fff);
 FUNC_6(VAR_18, VAR_2, 0x7fff);
 return 0;
}
