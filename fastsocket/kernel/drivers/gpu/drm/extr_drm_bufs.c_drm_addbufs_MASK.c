
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_buf_desc {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_device*,struct drm_buf_desc*) ;
 int FUNC_1 (struct drm_device*,struct drm_buf_desc*) ;
 int FUNC_2 (struct drm_device*,struct drm_buf_desc*) ;
 int FUNC_3 (struct drm_device*,struct drm_buf_desc*) ;
 int FUNC_4 (struct drm_device*,int ) ;

int FUNC_5(struct drm_device *VAR_5, void *VAR_6,
  struct drm_file *VAR_7)
{
 struct drm_buf_desc *VAR_8 = VAR_6;
 int VAR_9;

 if (!FUNC_4(VAR_5, VAR_0))
  return -VAR_1;






 if (VAR_8->flags & VAR_4)
  VAR_9 = FUNC_3(VAR_5, VAR_8);
 else if (VAR_8->flags & VAR_3)
  VAR_9 = FUNC_1(VAR_5, VAR_8);
 else
  VAR_9 = FUNC_2(VAR_5, VAR_8);

 return VAR_9;
}
