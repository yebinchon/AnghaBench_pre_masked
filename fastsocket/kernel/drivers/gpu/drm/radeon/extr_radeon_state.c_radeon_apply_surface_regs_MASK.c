
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* surfaces; int mmio; } ;
typedef TYPE_2__ drm_radeon_private_t ;
struct TYPE_5__ {int upper; int lower; int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(int VAR_3,
          drm_radeon_private_t *VAR_4)
{
 if (!VAR_4->mmio)
  return;

 FUNC_1(VAR_4);

 FUNC_0(VAR_0 + 16 * VAR_3,
       VAR_4->surfaces[VAR_3].flags);
 FUNC_0(VAR_1 + 16 * VAR_3,
       VAR_4->surfaces[VAR_3].lower);
 FUNC_0(VAR_2 + 16 * VAR_3,
       VAR_4->surfaces[VAR_3].upper);
}
