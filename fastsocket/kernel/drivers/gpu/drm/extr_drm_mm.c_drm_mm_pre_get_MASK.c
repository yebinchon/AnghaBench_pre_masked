
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm_node {int node_list; } ;
struct drm_mm {int num_unused; int unused_lock; int unused_nodes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_mm_node* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct drm_mm *VAR_3)
{
 struct drm_mm_node *VAR_4;

 FUNC_2(&VAR_3->unused_lock);
 while (VAR_3->num_unused < VAR_2) {
  FUNC_3(&VAR_3->unused_lock);
  VAR_4 = FUNC_0(sizeof(*VAR_4), VAR_1);
  FUNC_2(&VAR_3->unused_lock);

  if (FUNC_4(VAR_4 == ((void*)0))) {
   int VAR_5 = (VAR_3->num_unused < 2) ? -VAR_0 : 0;
   FUNC_3(&VAR_3->unused_lock);
   return VAR_5;
  }
  ++VAR_3->num_unused;
  FUNC_1(&VAR_4->node_list, &VAR_3->unused_nodes);
 }
 FUNC_3(&VAR_3->unused_lock);
 return 0;
}
