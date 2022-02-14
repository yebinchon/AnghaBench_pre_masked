
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nv50_graph_priv {int size; int base; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_3__ {int chipset; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_2 (struct nv50_graph_priv*) ;
 int FUNC_3 (struct nv50_graph_priv*,int) ;
 int FUNC_4 (struct nv50_graph_priv*,int,int) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_object *VAR_0)
{
 struct nv50_graph_priv *VAR_1 = (void *)VAR_0;
 int VAR_2, VAR_3, VAR_4;

 VAR_2 = FUNC_0(&VAR_1->base);
 if (VAR_2)
  return VAR_2;


 FUNC_4(VAR_1, 0x40008c, 0x00000004);


 FUNC_4(VAR_1, 0x400804, 0xc0000000);
 FUNC_4(VAR_1, 0x406800, 0xc0000000);
 FUNC_4(VAR_1, 0x400c04, 0xc0000000);
 FUNC_4(VAR_1, 0x401800, 0xc0000000);
 FUNC_4(VAR_1, 0x405018, 0xc0000000);
 FUNC_4(VAR_1, 0x402000, 0xc0000000);

 VAR_3 = FUNC_3(VAR_1, 0x001540);
 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  if (!(VAR_3 & (1 << VAR_4)))
   continue;

  if (FUNC_2(VAR_1)->chipset < 0xa0) {
   FUNC_4(VAR_1, 0x408900 + (VAR_4 << 12), 0xc0000000);
   FUNC_4(VAR_1, 0x408e08 + (VAR_4 << 12), 0xc0000000);
   FUNC_4(VAR_1, 0x408314 + (VAR_4 << 12), 0xc0000000);
  } else {
   FUNC_4(VAR_1, 0x408600 + (VAR_4 << 11), 0xc0000000);
   FUNC_4(VAR_1, 0x408708 + (VAR_4 << 11), 0xc0000000);
   FUNC_4(VAR_1, 0x40831c + (VAR_4 << 11), 0xc0000000);
  }
 }

 FUNC_4(VAR_1, 0x400108, 0xffffffff);
 FUNC_4(VAR_1, 0x400138, 0xffffffff);
 FUNC_4(VAR_1, 0x400100, 0xffffffff);
 FUNC_4(VAR_1, 0x40013c, 0xffffffff);
 FUNC_4(VAR_1, 0x400500, 0x00010001);


 VAR_2 = FUNC_1(FUNC_2(VAR_1), &VAR_1->size);
 if (VAR_2)
  return VAR_2;

 FUNC_4(VAR_1, 0x400824, 0x00000000);
 FUNC_4(VAR_1, 0x400828, 0x00000000);
 FUNC_4(VAR_1, 0x40082c, 0x00000000);
 FUNC_4(VAR_1, 0x400830, 0x00000000);
 FUNC_4(VAR_1, 0x40032c, 0x00000000);
 FUNC_4(VAR_1, 0x400330, 0x00000000);


 switch (FUNC_2(VAR_1)->chipset & 0xf0) {
 case 0x50:
 case 0x80:
 case 0x90:
  FUNC_4(VAR_1, 0x402ca8, 0x00000800);
  break;
 case 0xa0:
 default:
  FUNC_4(VAR_1, 0x402cc0, 0x00000000);
  if (FUNC_2(VAR_1)->chipset == 0xa0 ||
      FUNC_2(VAR_1)->chipset == 0xaa ||
      FUNC_2(VAR_1)->chipset == 0xac) {
   FUNC_4(VAR_1, 0x402ca8, 0x00000802);
  } else {
   FUNC_4(VAR_1, 0x402cc0, 0x00000000);
   FUNC_4(VAR_1, 0x402ca8, 0x00000002);
  }

  break;
 }


 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  FUNC_4(VAR_1, 0x402c20 + (VAR_4 * 8), 0x00000000);
  FUNC_4(VAR_1, 0x402c24 + (VAR_4 * 8), 0x00000000);
  FUNC_4(VAR_1, 0x402c28 + (VAR_4 * 8), 0x00000000);
  FUNC_4(VAR_1, 0x402c2c + (VAR_4 * 8), 0x00000000);
 }
 return 0;
}
