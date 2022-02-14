
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

 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, ((void*)0), 0x46dc,
        16, VAR_0, &VAR_7);
 *VAR_6 = FUNC_2(VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_7->chid = FUNC_0(VAR_1)->chid;

 FUNC_3(VAR_7, 0x0028, 0x00000001 | (VAR_7->chid << 24));
 FUNC_3(VAR_7, 0x040c, 0x01000101);
 FUNC_3(VAR_7, 0x0420, 0x00000111);
 FUNC_3(VAR_7, 0x0424, 0x00000060);
 FUNC_3(VAR_7, 0x0440, 0x00000080);
 FUNC_3(VAR_7, 0x0444, 0xffff0000);
 FUNC_3(VAR_7, 0x0448, 0x00000001);
 FUNC_3(VAR_7, 0x045c, 0x44400000);
 FUNC_3(VAR_7, 0x0480, 0xffff0000);
 for (VAR_9 = 0x04d4; VAR_9 < 0x04dc; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x0fff0000);
 FUNC_3(VAR_7, 0x04e0, 0x00011100);
 for (VAR_9 = 0x04fc; VAR_9 < 0x053c; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x07ff0000);
 FUNC_3(VAR_7, 0x0544, 0x4b7fffff);
 FUNC_3(VAR_7, 0x057c, 0x00000080);
 FUNC_3(VAR_7, 0x0580, 0x30201000);
 FUNC_3(VAR_7, 0x0584, 0x70605040);
 FUNC_3(VAR_7, 0x0588, 0xb8a89888);
 FUNC_3(VAR_7, 0x058c, 0xf8e8d8c8);
 FUNC_3(VAR_7, 0x05a0, 0xb0000000);
 for (VAR_9 = 0x05f0; VAR_9 < 0x0630; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x00010588);
 for (VAR_9 = 0x0630; VAR_9 < 0x0670; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x00030303);
 for (VAR_9 = 0x06b0; VAR_9 < 0x06f0; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x0008aae4);
 for (VAR_9 = 0x06f0; VAR_9 < 0x0730; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x01012000);
 for (VAR_9 = 0x0730; VAR_9 < 0x0770; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x00080008);
 FUNC_3(VAR_7, 0x0850, 0x00040000);
 FUNC_3(VAR_7, 0x0854, 0x00010000);
 for (VAR_9 = 0x0858; VAR_9 < 0x0868; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x00040004);
 for (VAR_9 = 0x15ac; VAR_9 <= 0x271c ; VAR_9 += 16) {
  FUNC_3(VAR_7, VAR_9 + 0, 0x10700ff9);
  FUNC_3(VAR_7, VAR_9 + 1, 0x0436086c);
  FUNC_3(VAR_7, VAR_9 + 2, 0x000c001b);
 }
 for (VAR_9 = 0x274c; VAR_9 < 0x275c; VAR_9 += 4)
  FUNC_3(VAR_7, VAR_9, 0x0000ffff);
 FUNC_3(VAR_7, 0x2ae0, 0x3f800000);
 FUNC_3(VAR_7, 0x2e9c, 0x3f800000);
 FUNC_3(VAR_7, 0x2eb0, 0x3f800000);
 FUNC_3(VAR_7, 0x2edc, 0x40000000);
 FUNC_3(VAR_7, 0x2ee0, 0x3f800000);
 FUNC_3(VAR_7, 0x2ee4, 0x3f000000);
 FUNC_3(VAR_7, 0x2eec, 0x40000000);
 FUNC_3(VAR_7, 0x2ef0, 0x3f800000);
 FUNC_3(VAR_7, 0x2ef8, 0xbf800000);
 FUNC_3(VAR_7, 0x2f00, 0xbf800000);
 return 0;
}
