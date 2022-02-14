
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_bo {int bo; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct nouveau_bo*,int ) ;
 int FUNC_2 (struct nouveau_bo*) ;
 int FUNC_3 (int *,int,int,int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct nouveau_bo *VAR_1,
     struct nouveau_bo *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(&VAR_2->bo, 0, 0, 0, 0);
 if (VAR_3)
  goto fail;

 if (FUNC_0(VAR_1 != VAR_2)) {
  VAR_3 = FUNC_3(&VAR_1->bo, 0, 0, 0, 0);
  if (VAR_3)
   goto fail_unreserve;
 }

 return 0;

fail_unreserve:
 FUNC_4(&VAR_2->bo);
fail:
 FUNC_2(VAR_2);
 return VAR_3;
}
