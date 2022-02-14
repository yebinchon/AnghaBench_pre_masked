
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_bo {int placement; int bo; } ;


 int FUNC_0 (int *,int *,int,int) ;

int
FUNC_1(struct nouveau_bo *VAR_0, bool VAR_1,
      bool VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_0->bo, &VAR_0->placement,
         VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 return 0;
}
