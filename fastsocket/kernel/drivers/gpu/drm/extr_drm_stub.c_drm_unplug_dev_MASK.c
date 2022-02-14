
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {scalar_t__ open_count; int primary; int control; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct drm_device*) ;
 int VAR_1 ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct drm_device *VAR_2)
{

 if (FUNC_0(VAR_2, VAR_0))
  FUNC_3(VAR_2->control);
 FUNC_3(VAR_2->primary);

 FUNC_4(&VAR_1);

 FUNC_1(VAR_2);

 if (VAR_2->open_count == 0) {
  FUNC_2(VAR_2);
 }
 FUNC_5(&VAR_1);
}
