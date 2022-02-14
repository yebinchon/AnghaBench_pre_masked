
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct timeval {int dummy; } ;
struct drm_device {int * _vblank_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 struct timeval FUNC_2 (struct drm_device*,int,scalar_t__) ;

u32 FUNC_3(struct drm_device *VAR_0, int VAR_1,
         struct timeval *VAR_2)
{
 u32 VAR_3;






 do {
  VAR_3 = FUNC_0(&VAR_0->_vblank_count[VAR_1]);
  *VAR_2 = FUNC_2(VAR_0, VAR_1, VAR_3);
  FUNC_1();
 } while (VAR_3 != FUNC_0(&VAR_0->_vblank_count[VAR_1]));

 return VAR_3;
}
