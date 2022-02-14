
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_mem_reg {int dummy; } ;
struct nouveau_fence {int dummy; } ;
struct nouveau_channel {int dummy; } ;
struct nouveau_bo {int bo; } ;


 int FUNC_0 (struct nouveau_channel*,int,struct nouveau_fence**) ;
 int FUNC_1 (struct nouveau_fence**) ;
 int FUNC_2 (int *,struct nouveau_fence*,int,int,struct ttm_mem_reg*) ;

__attribute__((used)) static int
FUNC_3(struct nouveau_channel *VAR_0,
         struct nouveau_bo *VAR_1, bool VAR_2,
         bool VAR_3, struct ttm_mem_reg *VAR_4)
{
 struct nouveau_fence *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, 0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(&VAR_1->bo, VAR_5, VAR_2,
     VAR_3, VAR_4);
 FUNC_1(&VAR_5);
 return VAR_6;
}
