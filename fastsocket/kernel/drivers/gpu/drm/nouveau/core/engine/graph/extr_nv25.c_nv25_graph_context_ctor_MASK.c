
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

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, ((void*)0), 0x3724,
        16, VAR_0, &VAR_7);
 *VAR_6 = FUNC_2(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_7->chid = FUNC_0(VAR_1)->chid;

 FUNC_3(VAR_7, 0x0028, 0x00000001 | (VAR_7->chid << 24));
 FUNC_3(VAR_7, 0x035c, 0xffff0000);
 FUNC_3(VAR_7, 0x03c0, 0x0fff0000);
 FUNC_3(VAR_7, 0x03c4, 0x0fff0000);
 FUNC_3(VAR_7, 0x049c, 0x00000101);
 FUNC_3(VAR_7, 0x04b0, 0x00000111);
 FUNC_3(VAR_7, 0x04c8, 0x00000080);
 FUNC_3(VAR_7, 0x04cc, 0xffff0000);
 FUNC_3(VAR_7, 0x04d0, 0x00000001);
 FUNC_3(VAR_7, 0x04e4, 0x44400000);
 FUNC_3(VAR_7, 0x04fc, 0x4b800000);
 for (VAR_9 = 0x0510; VAR_9 <= 0x051c; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x00030303);
 for (VAR_9 = 0x0530; VAR_9 <= 0x053c; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x00080000);
 for (VAR_9 = 0x0548; VAR_9 <= 0x0554; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x01012000);
 for (VAR_9 = 0x0558; VAR_9 <= 0x0564; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x000105b8);
 for (VAR_9 = 0x0568; VAR_9 <= 0x0574; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x00080008);
 for (VAR_9 = 0x0598; VAR_9 <= 0x05d4; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x07ff0000);
 FUNC_3(VAR_7, 0x05e0, 0x4b7fffff);
 FUNC_3(VAR_7, 0x0620, 0x00000080);
 FUNC_3(VAR_7, 0x0624, 0x30201000);
 FUNC_3(VAR_7, 0x0628, 0x70605040);
 FUNC_3(VAR_7, 0x062c, 0xb0a09080);
 FUNC_3(VAR_7, 0x0630, 0xf0e0d0c0);
 FUNC_3(VAR_7, 0x0664, 0x00000001);
 FUNC_3(VAR_7, 0x066c, 0x00004000);
 FUNC_3(VAR_7, 0x0678, 0x00000001);
 FUNC_3(VAR_7, 0x0680, 0x00040000);
 FUNC_3(VAR_7, 0x0684, 0x00010000);
 for (VAR_9 = 0x1b04; VAR_9 <= 0x2374; VAR_9 += 16) {
  FUNC_3(VAR_7, (VAR_9 + 0), 0x10700ff9);
  FUNC_3(VAR_7, (VAR_9 + 4), 0x0436086c);
  FUNC_3(VAR_7, (VAR_9 + 8), 0x000c001b);
 }
 FUNC_3(VAR_7, 0x2704, 0x3f800000);
 FUNC_3(VAR_7, 0x2718, 0x3f800000);
 FUNC_3(VAR_7, 0x2744, 0x40000000);
 FUNC_3(VAR_7, 0x2748, 0x3f800000);
 FUNC_3(VAR_7, 0x274c, 0x3f000000);
 FUNC_3(VAR_7, 0x2754, 0x40000000);
 FUNC_3(VAR_7, 0x2758, 0x3f800000);
 FUNC_3(VAR_7, 0x2760, 0xbf800000);
 FUNC_3(VAR_7, 0x2768, 0xbf800000);
 FUNC_3(VAR_7, 0x308c, 0x000fe000);
 FUNC_3(VAR_7, 0x3108, 0x000003f8);
 FUNC_3(VAR_7, 0x3468, 0x002fe000);
 for (VAR_9 = 0x3484; VAR_9 <= 0x34a0; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x001c527c);
 return 0;
}
