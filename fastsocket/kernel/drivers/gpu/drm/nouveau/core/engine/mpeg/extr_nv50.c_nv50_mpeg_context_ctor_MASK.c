
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv50_mpeg_chan {int dummy; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_bar {int (* flush ) (struct nouveau_bar*) ;} ;


 int VAR_0 ;
 struct nouveau_bar* FUNC_0 (struct nouveau_object*) ;
 int FUNC_1 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int *,int,int ,int ,struct nv50_mpeg_chan**) ;
 struct nouveau_object* FUNC_2 (struct nv50_mpeg_chan*) ;
 int FUNC_3 (struct nv50_mpeg_chan*,int,int) ;
 int FUNC_4 (struct nouveau_bar*) ;

int
FUNC_5(struct nouveau_object *VAR_1,
         struct nouveau_object *VAR_2,
         struct nouveau_oclass *VAR_3, void *VAR_4, u32 VAR_5,
         struct nouveau_object **VAR_6)
{
 struct nouveau_bar *VAR_7 = FUNC_0(VAR_1);
 struct nv50_mpeg_chan *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3, ((void*)0), 128 * 4,
       0, VAR_0, &VAR_8);
 *VAR_6 = FUNC_2(VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_3(VAR_8, 0x0070, 0x00801ec1);
 FUNC_3(VAR_8, 0x007c, 0x0000037c);
 VAR_7->flush(VAR_7);
 return 0;
}
