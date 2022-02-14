
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct drm_device {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct drm_device *VAR_2)
{
 u8 VAR_3;
 FUNC_0(VAR_2->pdev, VAR_1, &VAR_3);
 return (VAR_3 & VAR_0) == 0;
}
