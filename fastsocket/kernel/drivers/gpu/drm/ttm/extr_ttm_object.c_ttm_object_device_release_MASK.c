
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_object_device {int object_lock; int object_hash; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ttm_object_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ttm_object_device **VAR_0)
{
 struct ttm_object_device *VAR_1 = *VAR_0;

 *VAR_0 = ((void*)0);

 FUNC_2(&VAR_1->object_lock);
 FUNC_0(&VAR_1->object_hash);
 FUNC_3(&VAR_1->object_lock);

 FUNC_1(VAR_1);
}
