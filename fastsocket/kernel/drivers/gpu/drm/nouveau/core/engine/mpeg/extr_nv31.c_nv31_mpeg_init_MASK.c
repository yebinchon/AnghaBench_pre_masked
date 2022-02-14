
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nv31_mpeg_priv {int base; } ;
struct nouveau_object {int engine; } ;
struct TYPE_2__ {int regions; } ;
struct nouveau_fb {TYPE_1__ tile; } ;
struct nouveau_engine {int (* tile_prog ) (struct nouveau_engine*,int) ;} ;


 int VAR_0 ;
 struct nouveau_fb* FUNC_0 (struct nouveau_object*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct nv31_mpeg_priv*) ;
 struct nouveau_engine* FUNC_3 (int ) ;
 int FUNC_4 (struct nv31_mpeg_priv*,char*,int ) ;
 int FUNC_5 (struct nv31_mpeg_priv*,int,int,int) ;
 int FUNC_6 (struct nv31_mpeg_priv*,int) ;
 int FUNC_7 (struct nv31_mpeg_priv*,int,int,int) ;
 int FUNC_8 (struct nv31_mpeg_priv*,int,int) ;
 int FUNC_9 (struct nouveau_engine*,int) ;

int
FUNC_10(struct nouveau_object *VAR_1)
{
 struct nouveau_engine *VAR_2 = FUNC_3(VAR_1->engine);
 struct nv31_mpeg_priv *VAR_3 = (void *)VAR_2;
 struct nouveau_fb *VAR_4 = FUNC_0(VAR_1);
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(&VAR_3->base);
 if (VAR_5)
  return VAR_5;


 FUNC_8(VAR_3, 0x00b0e0, 0x00000020);
 FUNC_8(VAR_3, 0x00b0e8, 0x00000020);

 for (VAR_6 = 0; VAR_6 < VAR_4->tile.regions; VAR_6++)
  VAR_2->tile_prog(VAR_2, VAR_6);


 FUNC_8(VAR_3, 0x00b32c, 0x00000000);
 FUNC_8(VAR_3, 0x00b314, 0x00000100);
 FUNC_8(VAR_3, 0x00b220, FUNC_2(VAR_3) ? 0x00000044 : 0x00000031);
 FUNC_8(VAR_3, 0x00b300, 0x02001ec1);
 FUNC_5(VAR_3, 0x00b32c, 0x00000001, 0x00000001);

 FUNC_8(VAR_3, 0x00b100, 0xffffffff);
 FUNC_8(VAR_3, 0x00b140, 0xffffffff);

 if (!FUNC_7(VAR_3, 0x00b200, 0x00000001, 0x00000000)) {
  FUNC_4(VAR_3, "timeout 0x%08x\n", FUNC_6(VAR_3, 0x00b200));
  return -VAR_0;
 }

 return 0;
}
