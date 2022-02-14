
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_drm {struct drm_device* dev; } ;
struct drm_device {int pdev; } ;


 int FUNC_0 (int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct nouveau_drm *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 FUNC_1(VAR_1->pdev);
 FUNC_0(VAR_1->pdev, ((void*)0), ((void*)0), ((void*)0));
}
