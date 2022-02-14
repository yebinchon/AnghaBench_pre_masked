
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct nouveau_gpuobj {int dummy; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,struct nouveau_object*,int,int,int ,struct nouveau_gpuobj**) ;
 int FUNC_1 (struct nouveau_gpuobj*) ;
 struct nouveau_object* FUNC_2 (struct nouveau_gpuobj*) ;
 int FUNC_3 (struct nouveau_gpuobj*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_0,
        struct nouveau_object *VAR_1,
        struct nouveau_oclass *VAR_2, void *VAR_3, u32 VAR_4,
        struct nouveau_object **VAR_5)
{
 struct nouveau_gpuobj *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, 0, VAR_0,
        16, 16, 0, &VAR_6);
 *VAR_5 = FUNC_2(VAR_6);
 if (VAR_7)
  return VAR_7;

 FUNC_3(VAR_6, 0x00, FUNC_1(VAR_6));
 FUNC_3(VAR_6, 0x04, 0x00000000);
 FUNC_3(VAR_6, 0x08, 0x00000000);
 FUNC_3(VAR_6, 0x0c, 0x00000000);
 return 0;
}
