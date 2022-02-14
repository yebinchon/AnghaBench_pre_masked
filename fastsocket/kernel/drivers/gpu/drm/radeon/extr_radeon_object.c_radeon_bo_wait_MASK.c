
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int mem_type; } ;
struct TYPE_8__ {TYPE_2__* bdev; scalar_t__ sync_obj; TYPE_1__ mem; } ;
struct radeon_bo {TYPE_3__ tbo; } ;
struct TYPE_7__ {int fence_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int,int,int,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int,int,int) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct radeon_bo *VAR_0, u32 *VAR_1, bool VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(&VAR_0->tbo, 1, VAR_2, 0, 0);
 if (FUNC_5(VAR_3 != 0))
  return VAR_3;
 FUNC_0(&VAR_0->tbo.bdev->fence_lock);
 if (VAR_1)
  *VAR_1 = VAR_0->tbo.mem.mem_type;
 if (VAR_0->tbo.sync_obj)
  VAR_3 = FUNC_4(&VAR_0->tbo, 1, 1, VAR_2);
 FUNC_1(&VAR_0->tbo.bdev->fence_lock);
 FUNC_3(&VAR_0->tbo);
 return VAR_3;
}
