
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nv10_graph_priv {int base; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_3__ {int regions; } ;
struct nouveau_fb {TYPE_1__ tile; } ;
struct nouveau_engine {int (* tile_prog ) (struct nouveau_engine*,int) ;} ;
struct TYPE_4__ {int chipset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct nouveau_fb* FUNC_1 (struct nouveau_object*) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (struct nv10_graph_priv*) ;
 struct nouveau_engine* FUNC_4 (struct nouveau_object*) ;
 int FUNC_5 (struct nv10_graph_priv*,int ,int,int) ;
 int FUNC_6 (struct nv10_graph_priv*,int,int) ;
 int FUNC_7 (struct nouveau_engine*,int) ;

__attribute__((used)) static int
FUNC_8(struct nouveau_object *VAR_11)
{
 struct nouveau_engine *VAR_12 = FUNC_4(VAR_11);
 struct nouveau_fb *VAR_13 = FUNC_1(VAR_11);
 struct nv10_graph_priv *VAR_14 = (void *)VAR_12;
 int VAR_15, VAR_16;

 VAR_15 = FUNC_2(&VAR_14->base);
 if (VAR_15)
  return VAR_15;

 FUNC_6(VAR_14, VAR_0 , 0xFFFFFFFF);
 FUNC_6(VAR_14, VAR_1, 0xFFFFFFFF);

 FUNC_6(VAR_14, VAR_2, 0xFFFFFFFF);
 FUNC_6(VAR_14, VAR_2, 0x00000000);
 FUNC_6(VAR_14, VAR_3, 0x00118700);

 FUNC_6(VAR_14, VAR_4, 0x25f92ad9);
 FUNC_6(VAR_14, VAR_5, 0x55DE0830 | (1 << 29) | (1 << 31));

 if (FUNC_3(VAR_14)->chipset >= 0x17) {
  FUNC_6(VAR_14, VAR_8, 0x1f000000);
  FUNC_6(VAR_14, 0x400a10, 0x03ff3fb6);
  FUNC_6(VAR_14, 0x400838, 0x002f8684);
  FUNC_6(VAR_14, 0x40083c, 0x00115f3f);
  FUNC_6(VAR_14, 0x4006b0, 0x40000020);
 } else {
  FUNC_6(VAR_14, VAR_8, 0x00000000);
 }


 for (VAR_16 = 0; VAR_16 < VAR_13->tile.regions; VAR_16++)
  VAR_12->tile_prog(VAR_12, VAR_16);

 FUNC_6(VAR_14, FUNC_0(0), 0x00000000);
 FUNC_6(VAR_14, FUNC_0(1), 0x00000000);
 FUNC_6(VAR_14, FUNC_0(2), 0x00000000);
 FUNC_6(VAR_14, FUNC_0(3), 0x00000000);
 FUNC_6(VAR_14, FUNC_0(4), 0x00000000);
 FUNC_6(VAR_14, VAR_10, 0xFFFFFFFF);

 FUNC_5(VAR_14, VAR_7, 0xff000000, 0x1f000000);
 FUNC_6(VAR_14, VAR_6, 0x10000100);
 FUNC_6(VAR_14, VAR_9, 0x08000000);
 return 0;
}
