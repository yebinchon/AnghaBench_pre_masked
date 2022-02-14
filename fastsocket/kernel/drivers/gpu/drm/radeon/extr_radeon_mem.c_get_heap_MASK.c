
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mem_block {int dummy; } ;
struct TYPE_3__ {struct mem_block* fb_heap; struct mem_block* gart_heap; } ;
typedef TYPE_1__ drm_radeon_private_t ;





__attribute__((used)) static struct mem_block **FUNC_0(drm_radeon_private_t * VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 128:
  return &VAR_0->gart_heap;
 case 129:
  return &VAR_0->fb_heap;
 default:
  return ((void*)0);
 }
}
