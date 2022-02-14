
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm_node {int node_list; struct drm_mm* mm; } ;
struct drm_mm {scalar_t__ num_unused; int unused_lock; int unused_nodes; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct drm_mm_node*) ;
 int FUNC_1 (struct drm_mm_node*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct drm_mm_node *VAR_1)
{

 struct drm_mm *VAR_2 = VAR_1->mm;

 FUNC_0(VAR_1);

 FUNC_3(&VAR_2->unused_lock);
 if (VAR_2->num_unused < VAR_0) {
  FUNC_2(&VAR_1->node_list, &VAR_2->unused_nodes);
  ++VAR_2->num_unused;
 } else
  FUNC_1(VAR_1);
 FUNC_4(&VAR_2->unused_lock);
}
