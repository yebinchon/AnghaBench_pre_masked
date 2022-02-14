
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int flags; int clock; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,int,int) ;

__attribute__((used)) static int FUNC_3(struct drm_connector *VAR_5,
    struct drm_display_mode *VAR_6)
{
 struct drm_device *VAR_7 = VAR_5->dev;

 int VAR_8 = 0;
 if (VAR_6->flags & VAR_0)
  return VAR_3;

 if (VAR_6->clock < 25000)
  return VAR_2;

 if (FUNC_1(VAR_7))
  VAR_8 = 350000;
 else
  VAR_8 = 400000;
 if (VAR_6->clock > VAR_8)
  return VAR_1;


 if (FUNC_0(VAR_7) &&
     (FUNC_2(VAR_6->clock, 270000, 24) > 2))
  return VAR_1;

 return VAR_4;
}
