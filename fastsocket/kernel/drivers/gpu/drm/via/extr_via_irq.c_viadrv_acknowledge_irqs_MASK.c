
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int irq_pending_mask; } ;
typedef TYPE_1__ drm_via_private_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static __inline__ void FUNC_2(drm_via_private_t *VAR_1)
{
 u32 VAR_2;

 if (VAR_1) {

  VAR_2 = FUNC_0(VAR_0);
  FUNC_1(VAR_0, VAR_2 |
     VAR_1->irq_pending_mask);
 }
}
