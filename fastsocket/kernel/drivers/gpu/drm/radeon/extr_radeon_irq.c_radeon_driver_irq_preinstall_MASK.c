
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;

void FUNC_2(struct drm_device * VAR_5)
{
 drm_radeon_private_t *VAR_6 =
     (drm_radeon_private_t *) VAR_5->dev_private;
 u32 VAR_7;

 if ((VAR_6->flags & VAR_3) >= VAR_0)
  return;


 if ((VAR_6->flags & VAR_3) >= VAR_1)
  FUNC_0(VAR_2, 0);
 FUNC_0(VAR_4, 0);


 FUNC_1(VAR_6, &VAR_7);
}
