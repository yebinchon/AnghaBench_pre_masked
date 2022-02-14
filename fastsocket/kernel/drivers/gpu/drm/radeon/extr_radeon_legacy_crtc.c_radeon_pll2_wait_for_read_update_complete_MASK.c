
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_2)
{
 struct radeon_device *VAR_3 = VAR_2->dev_private;
 int VAR_4 = 0;






 for (VAR_4 = 0;
      (VAR_4 < 10000 &&
       FUNC_0(VAR_1) & VAR_0);
      VAR_4++);
}
