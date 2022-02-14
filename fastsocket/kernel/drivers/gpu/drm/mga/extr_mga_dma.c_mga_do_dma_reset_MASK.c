
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ last_wrap; } ;
typedef TYPE_1__ drm_mga_sarea_t ;
struct TYPE_7__ {scalar_t__ last_flush; int size; int space; scalar_t__ tail; } ;
struct TYPE_6__ {TYPE_3__ prim; TYPE_1__* sarea_priv; } ;
typedef TYPE_2__ drm_mga_private_t ;
typedef TYPE_3__ drm_mga_primary_buffer_t ;


 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(drm_mga_private_t *VAR_0)
{
 drm_mga_sarea_t *VAR_1 = VAR_0->sarea_priv;
 drm_mga_primary_buffer_t *VAR_2 = &VAR_0->prim;

 FUNC_0("\n");



 VAR_2->tail = 0;
 VAR_2->space = VAR_2->size;
 VAR_2->last_flush = 0;

 VAR_1->last_wrap = 0;







 return 0;
}
