
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_device {int struct_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,struct drm_file*) ;
 scalar_t__ FUNC_1 (struct drm_device*,int ) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_2, void *VAR_3,
       struct drm_file *VAR_4)
{
 int VAR_5;

 if (FUNC_1(VAR_2, VAR_0))
  return -VAR_1;

 FUNC_0(VAR_2, VAR_4);

 FUNC_3(&VAR_2->struct_mutex);
 VAR_5 = FUNC_2(VAR_2);
 FUNC_4(&VAR_2->struct_mutex);

 return VAR_5;
}
