
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nv20_graph_priv {TYPE_1__* ctxtab; int base; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_5__ {int regions; } ;
struct nouveau_fb {TYPE_2__ tile; } ;
struct nouveau_engine {int (* tile_prog ) (struct nouveau_engine*,int) ;} ;
struct TYPE_6__ {int chipset; } ;
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
 struct nouveau_fb* FUNC_0 (struct nouveau_object*) ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (struct nv20_graph_priv*) ;
 struct nouveau_engine* FUNC_3 (struct nouveau_object*) ;
 int FUNC_4 (struct nv20_graph_priv*,int) ;
 int FUNC_5 (struct nv20_graph_priv*,int,int) ;
 int FUNC_6 (struct nouveau_engine*,int) ;

int
FUNC_7(struct nouveau_object *VAR_12)
{
 struct nouveau_engine *VAR_13 = FUNC_3(VAR_12);
 struct nv20_graph_priv *VAR_14 = (void *)VAR_13;
 struct nouveau_fb *VAR_15 = FUNC_0(VAR_12);
 int VAR_16, VAR_17;

 VAR_16 = FUNC_1(&VAR_14->base);
 if (VAR_16)
  return VAR_16;

 FUNC_5(VAR_14, VAR_11, VAR_14->ctxtab->addr >> 4);

 FUNC_5(VAR_14, VAR_0 , 0xFFFFFFFF);
 FUNC_5(VAR_14, VAR_1, 0xFFFFFFFF);

 FUNC_5(VAR_14, VAR_2, 0xFFFFFFFF);
 FUNC_5(VAR_14, VAR_2, 0x00000000);
 FUNC_5(VAR_14, VAR_3, 0x401287c0);
 FUNC_5(VAR_14, 0x400890, 0x01b463ff);
 FUNC_5(VAR_14, VAR_4, 0xf2de0475);
 FUNC_5(VAR_14, VAR_7, 0x00008000);
 FUNC_5(VAR_14, VAR_5, 0xf04bdff6);
 FUNC_5(VAR_14, 0x400B80, 0x1003d888);
 FUNC_5(VAR_14, 0x400B84, 0x0c000000);
 FUNC_5(VAR_14, 0x400098, 0x00000000);
 FUNC_5(VAR_14, 0x40009C, 0x0005ad00);
 FUNC_5(VAR_14, 0x400B88, 0x62ff00ff);
 FUNC_5(VAR_14, 0x4000a0, 0x00000000);
 FUNC_5(VAR_14, 0x4000a4, 0x00000008);
 FUNC_5(VAR_14, 0x4008a8, 0xb784a400);
 FUNC_5(VAR_14, 0x400ba0, 0x002f8685);
 FUNC_5(VAR_14, 0x400ba4, 0x00231f3f);
 FUNC_5(VAR_14, 0x4008a4, 0x40000020);

 if (FUNC_2(VAR_14)->chipset == 0x34) {
  FUNC_5(VAR_14, VAR_9, 0x00EA0004);
  FUNC_5(VAR_14, VAR_8 , 0x00200201);
  FUNC_5(VAR_14, VAR_9, 0x00EA0008);
  FUNC_5(VAR_14, VAR_8 , 0x00000008);
  FUNC_5(VAR_14, VAR_9, 0x00EA0000);
  FUNC_5(VAR_14, VAR_8 , 0x00000032);
  FUNC_5(VAR_14, VAR_9, 0x00E00004);
  FUNC_5(VAR_14, VAR_8 , 0x00000002);
 }

 FUNC_5(VAR_14, 0x4000c0, 0x00000016);


 for (VAR_17 = 0; VAR_17 < VAR_15->tile.regions; VAR_17++)
  VAR_13->tile_prog(VAR_13, VAR_17);

 FUNC_5(VAR_14, VAR_6, 0x10000100);
 FUNC_5(VAR_14, VAR_10 , 0xFFFFFFFF);
 FUNC_5(VAR_14, 0x0040075c , 0x00000001);



 FUNC_5(VAR_14, 0x4009A4, FUNC_4(VAR_14, 0x100200));
 FUNC_5(VAR_14, 0x4009A8, FUNC_4(VAR_14, 0x100204));
 if (FUNC_2(VAR_14)->chipset != 0x34) {
  FUNC_5(VAR_14, 0x400750, 0x00EA0000);
  FUNC_5(VAR_14, 0x400754, FUNC_4(VAR_14, 0x100200));
  FUNC_5(VAR_14, 0x400750, 0x00EA0004);
  FUNC_5(VAR_14, 0x400754, FUNC_4(VAR_14, 0x100204));
 }
 return 0;
}
