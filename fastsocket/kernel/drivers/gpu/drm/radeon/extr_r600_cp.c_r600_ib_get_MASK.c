
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_buf {struct drm_file* file_priv; } ;


 int VAR_0 ;
 struct drm_buf* FUNC_0 (struct drm_device*) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_1,
   struct drm_file *VAR_2,
   struct drm_buf **VAR_3)
{
 struct drm_buf *VAR_4;

 *VAR_3 = ((void*)0);
 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4) {
  return -VAR_0;
 }
 VAR_4->file_priv = VAR_2;
 *VAR_3 = VAR_4;
 return 0;
}
