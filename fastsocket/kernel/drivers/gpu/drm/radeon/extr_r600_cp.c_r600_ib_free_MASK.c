
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int master; } ;
struct drm_device {int * dev_private; } ;
struct drm_buf {int dummy; } ;
typedef int drm_radeon_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (struct drm_device*,struct drm_buf*,int ,int) ;
 int FUNC_2 (struct drm_device*,int ,struct drm_buf*) ;

__attribute__((used)) static void FUNC_3(struct drm_device *VAR_0, struct drm_buf *VAR_1,
   struct drm_file *VAR_2, int VAR_3, int VAR_4)
{
 drm_radeon_private_t *VAR_5 = VAR_0->dev_private;

 if (VAR_1) {
  if (!VAR_4)
   FUNC_1(VAR_0, VAR_1, 0, VAR_3 * 4);
  FUNC_2(VAR_0, VAR_2->master, VAR_1);
  FUNC_0();
 }
}
