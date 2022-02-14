
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int struct_mutex; int ctx_idr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct drm_device * VAR_0)
{
 FUNC_1(&VAR_0->struct_mutex);
 FUNC_0(&VAR_0->ctx_idr);
 FUNC_2(&VAR_0->struct_mutex);
}
