
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_ctx_res {int count; int * contexts; } ;
struct drm_ctx {int handle; } ;
typedef int ctx ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,struct drm_ctx*,int) ;
 int FUNC_1 (struct drm_ctx*,int ,int) ;

int FUNC_2(struct drm_device *VAR_2, void *VAR_3,
        struct drm_file *VAR_4)
{
 struct drm_ctx_res *VAR_5 = VAR_3;
 struct drm_ctx VAR_6;
 int VAR_7;

 if (VAR_5->count >= VAR_0) {
  FUNC_1(&VAR_6, 0, sizeof(VAR_6));
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
   VAR_6.handle = VAR_7;
   if (FUNC_0(&VAR_5->contexts[VAR_7], &VAR_6, sizeof(VAR_6)))
    return -VAR_1;
  }
 }
 VAR_5->count = VAR_0;

 return 0;
}
