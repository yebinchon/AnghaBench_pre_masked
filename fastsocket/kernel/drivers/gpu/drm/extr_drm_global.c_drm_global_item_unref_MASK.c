
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_global_reference {size_t global_type; int (* release ) (struct drm_global_reference*) ;int * object; } ;
struct drm_global_item {scalar_t__ refcount; int mutex; int * object; } ;


 int FUNC_0 (int) ;
 struct drm_global_item* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_global_reference*) ;

void FUNC_4(struct drm_global_reference *VAR_1)
{
 struct drm_global_item *VAR_2 = &VAR_0[VAR_1->global_type];

 FUNC_1(&VAR_2->mutex);
 FUNC_0(VAR_2->refcount == 0);
 FUNC_0(VAR_1->object != VAR_2->object);
 if (--VAR_2->refcount == 0) {
  VAR_1->release(VAR_1);
  VAR_2->object = ((void*)0);
 }
 FUNC_2(&VAR_2->mutex);
}
