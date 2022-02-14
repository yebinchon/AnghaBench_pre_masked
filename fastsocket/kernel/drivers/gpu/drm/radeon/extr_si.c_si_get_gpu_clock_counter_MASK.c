
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct radeon_device {int gpu_clock_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

uint64_t FUNC_4(struct radeon_device *VAR_3)
{
 uint64_t VAR_4;

 FUNC_2(&VAR_3->gpu_clock_mutex);
 FUNC_1(VAR_0, 1);
 VAR_4 = (uint64_t)FUNC_0(VAR_1) |
         ((uint64_t)FUNC_0(VAR_2) << 32ULL);
 FUNC_3(&VAR_3->gpu_clock_mutex);
 return VAR_4;
}
