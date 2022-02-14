
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dstorg; } ;
struct TYPE_5__ {TYPE_3__ context_state; } ;
typedef TYPE_1__ drm_mga_sarea_t ;
struct TYPE_6__ {scalar_t__ front_offset; scalar_t__ back_offset; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_mga_private_t ;
typedef TYPE_3__ drm_mga_context_regs_t ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(drm_mga_private_t *VAR_1)
{
 drm_mga_sarea_t *VAR_2 = VAR_1->sarea_priv;
 drm_mga_context_regs_t *VAR_3 = &VAR_2->context_state;

 if (VAR_3->dstorg != VAR_1->front_offset &&
     VAR_3->dstorg != VAR_1->back_offset) {
  FUNC_0("*** bad DSTORG: %x (front %x, back %x)\n\n",
     VAR_3->dstorg, VAR_1->front_offset,
     VAR_1->back_offset);
  VAR_3->dstorg = 0;
  return -VAR_0;
 }

 return 0;
}
