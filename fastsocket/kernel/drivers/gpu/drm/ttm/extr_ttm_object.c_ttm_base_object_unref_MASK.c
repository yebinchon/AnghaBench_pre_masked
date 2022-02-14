
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_object_device {int object_lock; } ;
struct ttm_base_object {int refcount; TYPE_1__* tfile; } ;
struct TYPE_2__ {struct ttm_object_device* tdev; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ttm_base_object **VAR_1)
{
 struct ttm_base_object *VAR_2 = *VAR_1;
 struct ttm_object_device *VAR_3 = VAR_2->tfile->tdev;

 *VAR_1 = ((void*)0);






 FUNC_1(&VAR_3->object_lock);
 FUNC_0(&VAR_2->refcount, VAR_0);
 FUNC_2(&VAR_3->object_lock);
}
