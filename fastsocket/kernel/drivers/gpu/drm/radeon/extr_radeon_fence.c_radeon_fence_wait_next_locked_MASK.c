
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct radeon_device {TYPE_1__* fence_drv; } ;
struct TYPE_2__ {scalar_t__* sync_seq; int last_seq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct radeon_device*,scalar_t__,int,int,int) ;

int FUNC_2(struct radeon_device *VAR_1, int VAR_2)
{
 uint64_t VAR_3;

 VAR_3 = FUNC_0(&VAR_1->fence_drv[VAR_2].last_seq) + 1ULL;
 if (VAR_3 >= VAR_1->fence_drv[VAR_2].sync_seq[VAR_2]) {


  return -VAR_0;
 }
 return FUNC_1(VAR_1, VAR_3, VAR_2, 0, 0);
}
