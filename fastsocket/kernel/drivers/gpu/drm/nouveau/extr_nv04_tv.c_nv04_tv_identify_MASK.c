
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_i2c {int (* identify ) (struct nouveau_i2c*,int,char*,int ,int *) ;} ;
struct nouveau_drm {int device; } ;
struct drm_device {int dummy; } ;


 struct nouveau_drm* FUNC_0 (struct drm_device*) ;
 struct nouveau_i2c* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct nouveau_i2c*,int,char*,int ,int *) ;

int FUNC_3(struct drm_device *VAR_1, int VAR_2)
{
 struct nouveau_drm *VAR_3 = FUNC_0(VAR_1);
 struct nouveau_i2c *VAR_4 = FUNC_1(VAR_3->device);

 return VAR_4->identify(VAR_4, VAR_2, "TV encoder",
        VAR_0, ((void*)0));
}
