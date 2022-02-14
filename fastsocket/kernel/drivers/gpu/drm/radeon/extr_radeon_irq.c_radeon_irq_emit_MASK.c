
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ drm_radeon_private_t ;
struct TYPE_4__ {int irq_seq; } ;
typedef TYPE_2__ drm_radeon_irq_emit_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int*,int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct drm_device*,struct drm_file*) ;
 int VAR_3 ;
 int FUNC_3 (struct drm_device*) ;

int FUNC_4(struct drm_device *VAR_4, void *VAR_5, struct drm_file *VAR_6)
{
 drm_radeon_private_t *VAR_7 = VAR_4->dev_private;
 drm_radeon_irq_emit_t *VAR_8 = VAR_5;
 int VAR_9;

 if (!VAR_7) {
  FUNC_1("called with no initialization\n");
  return -VAR_2;
 }

 if ((VAR_7->flags & VAR_3) >= VAR_0)
  return -VAR_2;

 FUNC_2(VAR_4, VAR_6);

 VAR_9 = FUNC_3(VAR_4);

 if (FUNC_0(VAR_8->irq_seq, &VAR_9, sizeof(int))) {
  FUNC_1("copy_to_user\n");
  return -VAR_1;
 }

 return 0;
}
