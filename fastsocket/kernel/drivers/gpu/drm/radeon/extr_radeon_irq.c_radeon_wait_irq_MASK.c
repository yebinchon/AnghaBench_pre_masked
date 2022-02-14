
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_3__ {int boxes; } ;
struct TYPE_4__ {int swi_queue; TYPE_1__ stats; } ;
typedef TYPE_2__ drm_radeon_private_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct drm_device * VAR_3, int VAR_4)
{
 drm_radeon_private_t *VAR_5 =
     (drm_radeon_private_t *) VAR_3->dev_private;
 int VAR_6 = 0;

 if (FUNC_1(VAR_2) >= VAR_4)
  return 0;

 VAR_5->stats.boxes |= VAR_1;

 FUNC_0(VAR_6, VAR_5->swi_queue, 3 * VAR_0,
      FUNC_1(VAR_2) >= VAR_4);

 return VAR_6;
}
