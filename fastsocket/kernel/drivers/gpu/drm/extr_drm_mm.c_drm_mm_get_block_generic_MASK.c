
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_mm_node {int mm; } ;


 int FUNC_0 (struct drm_mm_node*,struct drm_mm_node*,unsigned long,unsigned int,unsigned long) ;
 struct drm_mm_node* FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

struct drm_mm_node *FUNC_3(struct drm_mm_node *VAR_0,
          unsigned long VAR_1,
          unsigned VAR_2,
          unsigned long VAR_3,
          int VAR_4)
{
 struct drm_mm_node *VAR_5;

 VAR_5 = FUNC_1(VAR_0->mm, VAR_4);
 if (FUNC_2(VAR_5 == ((void*)0)))
  return ((void*)0);

 FUNC_0(VAR_0, VAR_5, VAR_1, VAR_2, VAR_3);

 return VAR_5;
}
