
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_ring_buffer {int mmio_base; TYPE_1__* dev; } ;
typedef int drm_i915_private_t ;
struct TYPE_2__ {int * dev_private; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct intel_ring_buffer*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int,int) ;

__attribute__((used)) static void FUNC_10(struct intel_ring_buffer *VAR_4,
         u32 VAR_5)
{
 drm_i915_private_t *VAR_6 = VAR_4->dev->dev_private;






 FUNC_2(VAR_3,
     FUNC_8(VAR_2));


 FUNC_3(VAR_0, 0x0);


 if (FUNC_9((FUNC_1(VAR_3) &
        VAR_1) == 0,
       50))
  FUNC_0("timed out waiting for the BSD ring to wake up\n");


 FUNC_4(VAR_4, VAR_5);
 FUNC_5(FUNC_6(VAR_4->mmio_base));




 FUNC_2(VAR_3,
     FUNC_7(VAR_2));
}
