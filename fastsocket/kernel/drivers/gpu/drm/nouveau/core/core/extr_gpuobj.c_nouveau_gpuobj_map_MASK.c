
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_vma {int dummy; } ;
struct nouveau_mem {int dummy; } ;
struct nouveau_instobj {int dummy; } ;
struct nouveau_gpuobj {int dummy; } ;
struct nouveau_bar {int (* umap ) (struct nouveau_bar*,struct nouveau_mem*,int ,struct nouveau_vma*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_bar* FUNC_0 (struct nouveau_gpuobj*) ;
 int FUNC_1 (struct nouveau_gpuobj*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (struct nouveau_bar*,struct nouveau_mem*,int ,struct nouveau_vma*) ;

int
FUNC_4(struct nouveau_gpuobj *VAR_2, u32 VAR_3,
     struct nouveau_vma *VAR_4)
{
 struct nouveau_bar *VAR_5 = FUNC_0(VAR_2);
 int VAR_6 = -VAR_0;

 if (VAR_5 && VAR_5->umap) {
  struct nouveau_instobj *VAR_7 = (void *)
   FUNC_2(FUNC_1(VAR_2), VAR_1);
  struct nouveau_mem **VAR_8 = (void *)(VAR_7 + 1);
  VAR_6 = VAR_5->umap(VAR_5, *VAR_8, VAR_3, VAR_4);
 }

 return VAR_6;
}
