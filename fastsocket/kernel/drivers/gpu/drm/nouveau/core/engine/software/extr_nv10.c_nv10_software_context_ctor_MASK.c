
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv10_software_chan {int dummy; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;


 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,struct nv10_software_chan**) ;
 struct nouveau_object* FUNC_1 (struct nv10_software_chan*) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_object *VAR_0,
        struct nouveau_object *VAR_1,
        struct nouveau_oclass *VAR_2, void *VAR_3, u32 VAR_4,
        struct nouveau_object **VAR_5)
{
 struct nv10_software_chan *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_6);
 *VAR_5 = FUNC_1(VAR_6);
 if (VAR_7)
  return VAR_7;

 return 0;
}
