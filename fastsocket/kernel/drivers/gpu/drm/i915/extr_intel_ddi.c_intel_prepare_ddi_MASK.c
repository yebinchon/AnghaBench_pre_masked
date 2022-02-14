
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*,int,int) ;

void FUNC_2(struct drm_device *VAR_2)
{
 int VAR_3;

 if (!FUNC_0(VAR_2))
  return;

 for (VAR_3 = VAR_0; VAR_3 < VAR_1; VAR_3++)
  FUNC_1(VAR_2, VAR_3, 0);





 FUNC_1(VAR_2, VAR_1, 1);
}
