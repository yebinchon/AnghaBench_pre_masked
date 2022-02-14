
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm_node {int hole_follows; int allocated; unsigned long start; unsigned long size; unsigned long color; int hole_stack; int node_list; struct drm_mm* mm; } ;
struct drm_mm {int hole_stack; int (* color_adjust ) (struct drm_mm_node*,unsigned long,unsigned long*,unsigned long*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (struct drm_mm_node*) ;
 unsigned long FUNC_3 (struct drm_mm_node*) ;
 unsigned long FUNC_4 (struct drm_mm_node*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct drm_mm_node*,unsigned long,unsigned long*,unsigned long*) ;

__attribute__((used)) static void FUNC_8(struct drm_mm_node *VAR_0,
           struct drm_mm_node *VAR_1,
           unsigned long VAR_2, unsigned VAR_3,
           unsigned long VAR_4,
           unsigned long VAR_5, unsigned long VAR_6)
{
 struct drm_mm *VAR_7 = VAR_0->mm;
 unsigned long VAR_8 = FUNC_4(VAR_0);
 unsigned long VAR_9 = FUNC_3(VAR_0);
 unsigned long VAR_10 = VAR_8;
 unsigned long VAR_11 = VAR_9;

 FUNC_0(!VAR_0->hole_follows || VAR_1->allocated);

 if (VAR_10 < VAR_5)
  VAR_10 = VAR_5;
 if (VAR_11 > VAR_6)
  VAR_11 = VAR_6;

 if (VAR_7->color_adjust)
  VAR_7->color_adjust(VAR_0, VAR_4, &VAR_10, &VAR_11);

 if (VAR_3) {
  unsigned VAR_12 = VAR_10 % VAR_3;
  if (VAR_12)
   VAR_10 += VAR_3 - VAR_12;
 }

 if (VAR_10 == VAR_8) {
  VAR_0->hole_follows = 0;
  FUNC_6(&VAR_0->hole_stack);
 }

 VAR_1->start = VAR_10;
 VAR_1->size = VAR_2;
 VAR_1->mm = VAR_7;
 VAR_1->color = VAR_4;
 VAR_1->allocated = 1;

 FUNC_1(&VAR_1->hole_stack);
 FUNC_5(&VAR_1->node_list, &VAR_0->node_list);

 FUNC_0(VAR_1->start + VAR_1->size > VAR_11);
 FUNC_0(VAR_1->start + VAR_1->size > VAR_6);

 VAR_1->hole_follows = 0;
 if (FUNC_2(VAR_1) < VAR_9) {
  FUNC_5(&VAR_1->hole_stack, &VAR_7->hole_stack);
  VAR_1->hole_follows = 1;
 }
}
