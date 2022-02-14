
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sg_table {int dummy; } ;
struct TYPE_4__ {int num_pages; TYPE_1__* ttm; } ;
struct radeon_bo {TYPE_2__ tbo; } ;
struct drm_gem_object {int dummy; } ;
struct TYPE_3__ {int pages; } ;


 struct sg_table* FUNC_0 (int ,int) ;
 struct radeon_bo* FUNC_1 (struct drm_gem_object*) ;

struct sg_table *FUNC_2(struct drm_gem_object *VAR_0)
{
 struct radeon_bo *VAR_1 = FUNC_1(VAR_0);
 int VAR_2 = VAR_1->tbo.num_pages;

 return FUNC_0(VAR_1->tbo.ttm->pages, VAR_2);
}
