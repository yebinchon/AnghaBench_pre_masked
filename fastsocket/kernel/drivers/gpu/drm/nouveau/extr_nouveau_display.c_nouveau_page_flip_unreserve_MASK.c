
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_fence {int dummy; } ;
struct nouveau_bo {int bo; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nouveau_bo*,struct nouveau_fence*) ;
 int FUNC_2 (struct nouveau_bo*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct nouveau_bo *VAR_0,
       struct nouveau_bo *VAR_1,
       struct nouveau_fence *VAR_2)
{
 FUNC_1(VAR_1, VAR_2);
 FUNC_3(&VAR_1->bo);

 if (FUNC_0(VAR_0 != VAR_1)) {
  FUNC_1(VAR_0, VAR_2);
  FUNC_3(&VAR_0->bo);
 }

 FUNC_2(VAR_0);
}
