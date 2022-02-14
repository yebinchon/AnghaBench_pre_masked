
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct nv40_graph_priv {int size; int base; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_4__ {int regions; } ;
struct nouveau_fb {TYPE_1__ tile; } ;
struct nouveau_engine {int (* tile_prog ) (struct nouveau_engine*,int) ;} ;
struct TYPE_5__ {int chipset; int pdev; } ;


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
 struct nouveau_fb* FUNC_0 (struct nouveau_object*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_3 (struct nv40_graph_priv*) ;
 struct nouveau_engine* FUNC_4 (struct nouveau_object*) ;
 int FUNC_5 (struct nv40_graph_priv*,int) ;
 int FUNC_6 (struct nv40_graph_priv*,int,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct nouveau_engine*,int) ;

__attribute__((used)) static int
FUNC_9(struct nouveau_object *VAR_10)
{
 struct nouveau_engine *VAR_11 = FUNC_4(VAR_10);
 struct nouveau_fb *VAR_12 = FUNC_0(VAR_10);
 struct nv40_graph_priv *VAR_13 = (void *)VAR_11;
 int VAR_14, VAR_15, VAR_16;
 u32 VAR_17;

 VAR_14 = FUNC_1(&VAR_13->base);
 if (VAR_14)
  return VAR_14;


 VAR_14 = FUNC_2(FUNC_3(VAR_13), &VAR_13->size);
 if (VAR_14)
  return VAR_14;


 FUNC_6(VAR_13, VAR_8, 0x00000000);

 FUNC_6(VAR_13, VAR_0 , 0xFFFFFFFF);
 FUNC_6(VAR_13, VAR_9, 0xFFFFFFFF);

 FUNC_6(VAR_13, VAR_1, 0xFFFFFFFF);
 FUNC_6(VAR_13, VAR_1, 0x00000000);
 FUNC_6(VAR_13, VAR_2, 0x401287c0);
 FUNC_6(VAR_13, VAR_3, 0xe0de8055);
 FUNC_6(VAR_13, VAR_6, 0x00008000);
 FUNC_6(VAR_13, VAR_4, 0x00be3c5f);

 FUNC_6(VAR_13, VAR_5, 0x10010100);
 FUNC_6(VAR_13, VAR_7 , 0xFFFFFFFF);

 VAR_16 = FUNC_5(VAR_13, 0x1540) & 0xff;
 if (VAR_16) {
  for (VAR_15 = 0; !(VAR_16 & 1); VAR_16 >>= 1, VAR_15++)
   ;
  FUNC_6(VAR_13, 0x405000, VAR_15);
 }

 if (FUNC_3(VAR_13)->chipset == 0x40) {
  FUNC_6(VAR_13, 0x4009b0, 0x83280fff);
  FUNC_6(VAR_13, 0x4009b4, 0x000000a0);
 } else {
  FUNC_6(VAR_13, 0x400820, 0x83280eff);
  FUNC_6(VAR_13, 0x400824, 0x000000a0);
 }

 switch (FUNC_3(VAR_13)->chipset) {
 case 0x40:
 case 0x45:
  FUNC_6(VAR_13, 0x4009b8, 0x0078e366);
  FUNC_6(VAR_13, 0x4009bc, 0x0000014c);
  break;
 case 0x41:
 case 0x42:

  FUNC_6(VAR_13, 0x400828, 0x007596ff);
  FUNC_6(VAR_13, 0x40082c, 0x00000108);
  break;
 case 0x43:
  FUNC_6(VAR_13, 0x400828, 0x0072cb77);
  FUNC_6(VAR_13, 0x40082c, 0x00000108);
  break;
 case 0x44:
 case 0x46:
 case 0x4a:
 case 0x4c:
 case 0x4e:
  FUNC_6(VAR_13, 0x400860, 0);
  FUNC_6(VAR_13, 0x400864, 0);
  break;
 case 0x47:
 case 0x49:
 case 0x4b:
  FUNC_6(VAR_13, 0x400828, 0x07830610);
  FUNC_6(VAR_13, 0x40082c, 0x0000016A);
  break;
 default:
  break;
 }

 FUNC_6(VAR_13, 0x400b38, 0x2ffff800);
 FUNC_6(VAR_13, 0x400b3c, 0x00006000);


 switch (FUNC_3(VAR_13)->chipset) {
 case 0x44:
 case 0x4a:
  FUNC_6(VAR_13, 0x400bc4, 0x1003d888);
  FUNC_6(VAR_13, 0x400bbc, 0xb7a7b500);
  break;
 case 0x46:
  FUNC_6(VAR_13, 0x400bc4, 0x0000e024);
  FUNC_6(VAR_13, 0x400bbc, 0xb7a7b520);
  break;
 case 0x4c:
 case 0x4e:
 case 0x67:
  FUNC_6(VAR_13, 0x400bc4, 0x1003d888);
  FUNC_6(VAR_13, 0x400bbc, 0xb7a7b540);
  break;
 default:
  break;
 }


 for (VAR_15 = 0; VAR_15 < VAR_12->tile.regions; VAR_15++)
  VAR_11->tile_prog(VAR_11, VAR_15);


 VAR_17 = FUNC_7(FUNC_3(VAR_13)->pdev, 0) - 1;
 switch (FUNC_3(VAR_13)->chipset) {
 case 0x40:
  FUNC_6(VAR_13, 0x4009A4, FUNC_5(VAR_13, 0x100200));
  FUNC_6(VAR_13, 0x4009A8, FUNC_5(VAR_13, 0x100204));
  FUNC_6(VAR_13, 0x4069A4, FUNC_5(VAR_13, 0x100200));
  FUNC_6(VAR_13, 0x4069A8, FUNC_5(VAR_13, 0x100204));
  FUNC_6(VAR_13, 0x400820, 0);
  FUNC_6(VAR_13, 0x400824, 0);
  FUNC_6(VAR_13, 0x400864, VAR_17);
  FUNC_6(VAR_13, 0x400868, VAR_17);
  break;
 default:
  switch (FUNC_3(VAR_13)->chipset) {
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x45:
  case 0x4e:
  case 0x44:
  case 0x4a:
   FUNC_6(VAR_13, 0x4009F0, FUNC_5(VAR_13, 0x100200));
   FUNC_6(VAR_13, 0x4009F4, FUNC_5(VAR_13, 0x100204));
   break;
  default:
   FUNC_6(VAR_13, 0x400DF0, FUNC_5(VAR_13, 0x100200));
   FUNC_6(VAR_13, 0x400DF4, FUNC_5(VAR_13, 0x100204));
   break;
  }
  FUNC_6(VAR_13, 0x4069F0, FUNC_5(VAR_13, 0x100200));
  FUNC_6(VAR_13, 0x4069F4, FUNC_5(VAR_13, 0x100204));
  FUNC_6(VAR_13, 0x400840, 0);
  FUNC_6(VAR_13, 0x400844, 0);
  FUNC_6(VAR_13, 0x4008A0, VAR_17);
  FUNC_6(VAR_13, 0x4008A4, VAR_17);
  break;
 }

 return 0;
}
