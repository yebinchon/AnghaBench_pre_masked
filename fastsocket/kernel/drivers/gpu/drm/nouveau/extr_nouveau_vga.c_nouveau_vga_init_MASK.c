
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_drm {struct drm_device* dev; } ;
struct drm_device {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct drm_device*,int *,int ) ;
 int FUNC_1 (int ,int *) ;

void
FUNC_2(struct nouveau_drm *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;
 FUNC_0(VAR_3->pdev, VAR_3, ((void*)0), VAR_1);
 FUNC_1(VAR_3->pdev, &VAR_0);
}
