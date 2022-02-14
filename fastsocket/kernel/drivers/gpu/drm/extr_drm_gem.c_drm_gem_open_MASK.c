
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int table_lock; int object_idr; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct drm_device *VAR_0, struct drm_file *VAR_1)
{
 FUNC_0(&VAR_1->object_idr);
 FUNC_1(&VAR_1->table_lock);
}
