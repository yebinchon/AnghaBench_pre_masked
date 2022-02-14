
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int dummy; } ;
struct radeon_device {struct radeon_ring* ring; } ;
struct drm_info_list {scalar_t__ data; } ;


 unsigned int FUNC_0 (struct drm_info_list*) ;
 unsigned int FUNC_1 (struct radeon_device*,struct drm_info_list*,int) ;
 struct drm_info_list* VAR_0 ;

__attribute__((used)) static int FUNC_2(struct radeon_device *VAR_1, struct radeon_ring *VAR_2)
{
 return 0;
}
