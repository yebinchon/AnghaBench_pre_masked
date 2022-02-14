
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_i915_private {int gpio_mmio_base; int gmbus_wait_queue; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int VAR_5 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_8(struct drm_i915_private *VAR_7,
       u32 VAR_8,
       u32 VAR_9)
{
 int VAR_10;
 int VAR_11 = VAR_7->gpio_mmio_base;
 u32 VAR_12 = 0;
 FUNC_0(VAR_6);

 if (!FUNC_1(VAR_7->dev))
  VAR_9 = 0;




 FUNC_3(VAR_3 + VAR_11, VAR_9);

 for (VAR_10 = 0; VAR_10 < FUNC_5(50) + 1; VAR_10++) {
  FUNC_6(&VAR_7->gmbus_wait_queue, &VAR_6,
    VAR_5);

  VAR_12 = FUNC_2(VAR_2 + VAR_11);
  if (VAR_12 & (VAR_4 | VAR_8))
   break;

  FUNC_7(1);
 }
 FUNC_4(&VAR_7->gmbus_wait_queue, &VAR_6);

 FUNC_3(VAR_3 + VAR_11, 0);

 if (VAR_12 & VAR_4)
  return -VAR_0;
 if (VAR_12 & VAR_8)
  return 0;
 return -VAR_1;
}
