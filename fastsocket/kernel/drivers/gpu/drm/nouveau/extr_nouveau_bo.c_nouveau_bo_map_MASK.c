
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int num_pages; } ;
struct TYPE_6__ {TYPE_1__ mem; } ;
struct nouveau_bo {TYPE_2__ bo; int kmap; } ;


 int FUNC_0 (TYPE_2__*,int ,int ,int *) ;
 int FUNC_1 (TYPE_2__*,int,int,int,int ) ;
 int FUNC_2 (TYPE_2__*) ;

int
FUNC_3(struct nouveau_bo *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(&VAR_0->bo, 0, 0, 0, 0);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_0(&VAR_0->bo, 0, VAR_0->bo.mem.num_pages, &VAR_0->kmap);
 FUNC_2(&VAR_0->bo);
 return VAR_1;
}
