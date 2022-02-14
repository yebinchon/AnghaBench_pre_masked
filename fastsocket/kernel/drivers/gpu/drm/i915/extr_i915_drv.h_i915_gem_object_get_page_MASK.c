
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct page {int dummy; } ;
struct drm_i915_gem_object {TYPE_1__* pages; } ;
struct TYPE_2__ {int nents; struct scatterlist* sgl; } ;


 int VAR_0 ;
 struct scatterlist* FUNC_0 (struct scatterlist*) ;
 struct page* FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static inline struct page *FUNC_2(struct drm_i915_gem_object *VAR_1, int VAR_2)
{
 struct scatterlist *VAR_3 = VAR_1->pages->sgl;
 int VAR_4 = VAR_1->pages->nents;
 while (VAR_4 > VAR_0) {
  if (VAR_2 < VAR_0 - 1)
   break;

  VAR_3 = FUNC_0(VAR_3 + VAR_0 - 1);
  VAR_2 -= VAR_0 - 1;
  VAR_4 -= VAR_0 - 1;
 }
 return FUNC_1(VAR_3+VAR_2);
}
