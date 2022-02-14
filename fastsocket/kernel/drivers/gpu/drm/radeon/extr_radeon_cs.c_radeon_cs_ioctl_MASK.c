
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int exclusive_lock; int family; int dev; int accel_working; } ;
struct radeon_cs_parser {int family; int dev; struct radeon_device* rdev; struct drm_file* filp; } ;
struct drm_file {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct radeon_cs_parser*,int ,int) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (struct radeon_device*,struct radeon_cs_parser*) ;
 int FUNC_5 (struct radeon_device*,struct radeon_cs_parser*) ;
 int FUNC_6 (struct radeon_cs_parser*,int) ;
 int FUNC_7 (struct radeon_cs_parser*,void*) ;
 int FUNC_8 (struct radeon_cs_parser*) ;
 int FUNC_9 (int *) ;

int FUNC_10(struct drm_device *VAR_2, void *VAR_3, struct drm_file *VAR_4)
{
 struct radeon_device *VAR_5 = VAR_2->dev_private;
 struct radeon_cs_parser VAR_6;
 int VAR_7;

 FUNC_1(&VAR_5->exclusive_lock);
 if (!VAR_5->accel_working) {
  FUNC_9(&VAR_5->exclusive_lock);
  return -VAR_0;
 }

 FUNC_2(&VAR_6, 0, sizeof(struct radeon_cs_parser));
 VAR_6.filp = VAR_4;
 VAR_6.rdev = VAR_5;
 VAR_6.dev = VAR_5->dev;
 VAR_6.family = VAR_5->family;
 VAR_7 = FUNC_7(&VAR_6, VAR_3);
 if (VAR_7) {
  FUNC_0("Failed to initialize parser !\n");
  FUNC_6(&VAR_6, VAR_7);
  FUNC_9(&VAR_5->exclusive_lock);
  VAR_7 = FUNC_3(VAR_5, VAR_7);
  return VAR_7;
 }
 VAR_7 = FUNC_8(&VAR_6);
 if (VAR_7) {
  if (VAR_7 != -VAR_1)
   FUNC_0("Failed to parse relocation %d!\n", VAR_7);
  FUNC_6(&VAR_6, VAR_7);
  FUNC_9(&VAR_5->exclusive_lock);
  VAR_7 = FUNC_3(VAR_5, VAR_7);
  return VAR_7;
 }
 VAR_7 = FUNC_4(VAR_5, &VAR_6);
 if (VAR_7) {
  goto out;
 }
 VAR_7 = FUNC_5(VAR_5, &VAR_6);
 if (VAR_7) {
  goto out;
 }
out:
 FUNC_6(&VAR_6, VAR_7);
 FUNC_9(&VAR_5->exclusive_lock);
 VAR_7 = FUNC_3(VAR_5, VAR_7);
 return VAR_7;
}
