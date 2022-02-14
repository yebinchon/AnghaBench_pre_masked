
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct drm_pending_vblank_event {int pipe; } ;
struct drm_device {int dummy; } ;


 unsigned int FUNC_0 (struct drm_device*,int,struct timeval*) ;
 struct timeval FUNC_1 () ;
 int FUNC_2 (struct drm_device*,struct drm_pending_vblank_event*,unsigned int,struct timeval*) ;

void FUNC_3(struct drm_device *VAR_0, int VAR_1,
  struct drm_pending_vblank_event *VAR_2)
{
 struct timeval VAR_3;
 unsigned int VAR_4;
 if (VAR_1 >= 0) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, &VAR_3);
 } else {
  VAR_4 = 0;

  VAR_3 = FUNC_1();
 }
 VAR_2->pipe = VAR_1;
 FUNC_2(VAR_0, VAR_2, VAR_4, &VAR_3);
}
