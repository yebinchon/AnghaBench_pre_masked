
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int flags; TYPE_3__* ring_rptr; } ;
typedef TYPE_1__ drm_radeon_private_t ;
struct TYPE_5__ {scalar_t__ handle; } ;


 int FUNC_0 (TYPE_3__*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

void FUNC_2(drm_radeon_private_t *VAR_1, u32 VAR_2, u32 VAR_3)
{
 if (VAR_1->flags & VAR_0)
  FUNC_0(VAR_1->ring_rptr, VAR_2, VAR_3);
 else
  *(((volatile u32 *) VAR_1->ring_rptr->handle) +
    (VAR_2 / sizeof(u32))) = FUNC_1(VAR_3);
}
