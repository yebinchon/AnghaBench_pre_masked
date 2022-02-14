
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nve0_copy_priv {int dummy; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_4__ {int sclass; int * cclass; } ;
struct TYPE_3__ {int unit; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int,char*,char*,struct nve0_copy_priv**) ;
 TYPE_2__* FUNC_1 (struct nve0_copy_priv*) ;
 struct nouveau_object* FUNC_2 (struct nve0_copy_priv*) ;
 int FUNC_3 (struct nouveau_object*,int) ;
 TYPE_1__* FUNC_4 (struct nve0_copy_priv*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_5(struct nouveau_object *VAR_3, struct nouveau_object *VAR_4,
  struct nouveau_oclass *VAR_5, void *VAR_6, u32 VAR_7,
  struct nouveau_object **VAR_8)
{
 struct nve0_copy_priv *VAR_9;
 int VAR_10;

 if (FUNC_3(VAR_3, 0x022500) & 0x00000100)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_5, 1,
        "PCE0", "copy0", &VAR_9);
 *VAR_8 = FUNC_2(VAR_9);
 if (VAR_10)
  return VAR_10;

 FUNC_4(VAR_9)->unit = 0x00000040;
 FUNC_1(VAR_9)->cclass = &VAR_1;
 FUNC_1(VAR_9)->sclass = VAR_2;
 return 0;
}
