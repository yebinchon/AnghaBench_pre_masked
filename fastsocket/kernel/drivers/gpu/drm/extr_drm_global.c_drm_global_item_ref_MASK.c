
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_global_reference {size_t global_type; int (* init ) (struct drm_global_reference*) ;int * object; int size; } ;
struct drm_global_item {scalar_t__ refcount; int * object; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct drm_global_item* VAR_2 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_global_reference*) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct drm_global_reference *VAR_3)
{
 int VAR_4;
 struct drm_global_item *VAR_5 = &VAR_2[VAR_3->global_type];
 void *VAR_6;

 FUNC_1(&VAR_5->mutex);
 if (VAR_5->refcount == 0) {
  VAR_5->object = FUNC_0(VAR_3->size, VAR_1);
  if (FUNC_4(VAR_5->object == ((void*)0))) {
   VAR_4 = -VAR_0;
   goto out_err;
  }

  VAR_3->object = VAR_5->object;
  VAR_4 = VAR_3->init(VAR_3);
  if (FUNC_4(VAR_4 != 0))
   goto out_err;

 }
 ++VAR_5->refcount;
 VAR_3->object = VAR_5->object;
 VAR_6 = VAR_5->object;
 FUNC_2(&VAR_5->mutex);
 return 0;
out_err:
 FUNC_2(&VAR_5->mutex);
 VAR_5->object = ((void*)0);
 return VAR_4;
}
