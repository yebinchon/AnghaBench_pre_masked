
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u32 ;
struct TYPE_2__ {int* ptr; int num_gpu_pages; } ;
struct radeon_device {TYPE_1__ gart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct radeon_device *VAR_4, int VAR_5, uint64_t VAR_6)
{
 uint32_t VAR_7;
 u32 *VAR_8 = VAR_4->gart.ptr;

 if (VAR_5 < 0 || VAR_5 > VAR_4->gart.num_gpu_pages) {
  return -VAR_0;
 }

 VAR_7 = (FUNC_1(VAR_6) & VAR_1) |
  ((FUNC_2(VAR_6) & 0xff) << 4) |
  VAR_3 | VAR_2;
 VAR_7 = FUNC_0(VAR_7);
 VAR_8[VAR_5] = VAR_7;
 return 0;
}
