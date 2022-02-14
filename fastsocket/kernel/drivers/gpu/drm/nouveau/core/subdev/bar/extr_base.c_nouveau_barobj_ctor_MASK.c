
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_2__ {scalar_t__ offset; } ;
struct nouveau_barobj {TYPE_1__ vma; scalar_t__ iomem; } ;
struct nouveau_bar {int (* kmap ) (struct nouveau_bar*,void*,int ,TYPE_1__*) ;scalar_t__ iomem; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int ,struct nouveau_barobj**) ;
 struct nouveau_object* FUNC_1 (struct nouveau_barobj*) ;
 int FUNC_2 (struct nouveau_bar*,void*,int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_object *VAR_1,
      struct nouveau_object *VAR_2,
      struct nouveau_oclass *VAR_3, void *VAR_4, u32 VAR_5,
      struct nouveau_object **VAR_6)
{
 struct nouveau_bar *VAR_7 = (void *)VAR_2;
 struct nouveau_barobj *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, 0, &VAR_8);
 *VAR_6 = FUNC_1(VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_9 = VAR_7->kmap(VAR_7, VAR_4, VAR_0, &VAR_8->vma);
 if (VAR_9)
  return VAR_9;

 VAR_8->iomem = VAR_7->iomem + (u32)VAR_8->vma.offset;
 return 0;
}
