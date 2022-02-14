
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_global_item {scalar_t__ refcount; int * object; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct drm_global_item* VAR_1 ;

void FUNC_1(void)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  struct drm_global_item *VAR_3 = &VAR_1[VAR_2];
  FUNC_0(VAR_3->object != ((void*)0));
  FUNC_0(VAR_3->refcount != 0);
 }
}
