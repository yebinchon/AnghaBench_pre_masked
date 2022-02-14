
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct radeon_device {TYPE_1__* fence_drv; } ;
struct TYPE_2__ {int* sync_seq; int last_seq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct radeon_device*,int) ;

unsigned FUNC_2(struct radeon_device *VAR_0, int VAR_1)
{
 uint64_t VAR_2;




 FUNC_1(VAR_0, VAR_1);
 VAR_2 = VAR_0->fence_drv[VAR_1].sync_seq[VAR_1]
  - FUNC_0(&VAR_0->fence_drv[VAR_1].last_seq);

 if (VAR_2 > 0x10000000) {
  VAR_2 = 0x10000000;
 }
 return (unsigned)VAR_2;
}
