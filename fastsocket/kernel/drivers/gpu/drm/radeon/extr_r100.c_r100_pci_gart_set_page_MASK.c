
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u32 ;
struct TYPE_2__ {int num_gpu_pages; int * ptr; } ;
struct radeon_device {TYPE_1__ gart; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct radeon_device *VAR_1, int VAR_2, uint64_t VAR_3)
{
 u32 *VAR_4 = VAR_1->gart.ptr;

 if (VAR_2 < 0 || VAR_2 > VAR_1->gart.num_gpu_pages) {
  return -VAR_0;
 }
 VAR_4[VAR_2] = FUNC_0(FUNC_1(VAR_3));
 return 0;
}
