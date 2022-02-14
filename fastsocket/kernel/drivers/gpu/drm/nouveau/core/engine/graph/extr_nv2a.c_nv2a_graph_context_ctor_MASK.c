
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nv20_graph_chan {int chid; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_2__ {int chid; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct nouveau_object*) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int *,int,int,int ,struct nv20_graph_chan**) ;
 struct nouveau_object* FUNC_2 (struct nv20_graph_chan*) ;
 int FUNC_3 (struct nv20_graph_chan*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_1,
   struct nouveau_object *VAR_2,
   struct nouveau_oclass *VAR_3, void *VAR_4, u32 VAR_5,
   struct nouveau_object **VAR_6)
{
 struct nv20_graph_chan *VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, ((void*)0), 0x36b0,
        16, VAR_0, &VAR_7);
 *VAR_6 = FUNC_2(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_7->chid = FUNC_0(VAR_1)->chid;

 FUNC_3(VAR_7, 0x0000, 0x00000001 | (VAR_7->chid << 24));
 FUNC_3(VAR_7, 0x033c, 0xffff0000);
 FUNC_3(VAR_7, 0x03a0, 0x0fff0000);
 FUNC_3(VAR_7, 0x03a4, 0x0fff0000);
 FUNC_3(VAR_7, 0x047c, 0x00000101);
 FUNC_3(VAR_7, 0x0490, 0x00000111);
 FUNC_3(VAR_7, 0x04a8, 0x44400000);
 for (VAR_9 = 0x04d4; VAR_9 <= 0x04e0; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x00030303);
 for (VAR_9 = 0x04f4; VAR_9 <= 0x0500; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x00080000);
 for (VAR_9 = 0x050c; VAR_9 <= 0x0518; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x01012000);
 for (VAR_9 = 0x051c; VAR_9 <= 0x0528; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x000105b8);
 for (VAR_9 = 0x052c; VAR_9 <= 0x0538; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x00080008);
 for (VAR_9 = 0x055c; VAR_9 <= 0x0598; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x07ff0000);
 FUNC_3(VAR_7, 0x05a4, 0x4b7fffff);
 FUNC_3(VAR_7, 0x05fc, 0x00000001);
 FUNC_3(VAR_7, 0x0604, 0x00004000);
 FUNC_3(VAR_7, 0x0610, 0x00000001);
 FUNC_3(VAR_7, 0x0618, 0x00040000);
 FUNC_3(VAR_7, 0x061c, 0x00010000);
 for (VAR_9 = 0x1a9c; VAR_9 <= 0x22fc; VAR_9 += 16) {
  FUNC_3(VAR_7, (VAR_9 + 0), 0x10700ff9);
  FUNC_3(VAR_7, (VAR_9 + 4), 0x0436086c);
  FUNC_3(VAR_7, (VAR_9 + 8), 0x000c001b);
 }
 FUNC_3(VAR_7, 0x269c, 0x3f800000);
 FUNC_3(VAR_7, 0x26b0, 0x3f800000);
 FUNC_3(VAR_7, 0x26dc, 0x40000000);
 FUNC_3(VAR_7, 0x26e0, 0x3f800000);
 FUNC_3(VAR_7, 0x26e4, 0x3f000000);
 FUNC_3(VAR_7, 0x26ec, 0x40000000);
 FUNC_3(VAR_7, 0x26f0, 0x3f800000);
 FUNC_3(VAR_7, 0x26f8, 0xbf800000);
 FUNC_3(VAR_7, 0x2700, 0xbf800000);
 FUNC_3(VAR_7, 0x3024, 0x000fe000);
 FUNC_3(VAR_7, 0x30a0, 0x000003f8);
 FUNC_3(VAR_7, 0x33fc, 0x002fe000);
 for (VAR_9 = 0x341c; VAR_9 <= 0x3438; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x001c527c);
 return 0;
}
