
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_ring_buffer {struct drm_device* dev; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct drm_device*) ;
 scalar_t__ FUNC_1 (struct drm_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct intel_ring_buffer*) ;
 int FUNC_3 (struct intel_ring_buffer*,int) ;
 int FUNC_4 (struct intel_ring_buffer*,int) ;

__attribute__((used)) static int
FUNC_5(struct intel_ring_buffer *VAR_8,
         u32 VAR_9,
         u32 VAR_10)
{
 struct drm_device *VAR_11 = VAR_8->dev;
 u32 VAR_12;
 int VAR_13;
 VAR_12 = VAR_4 | VAR_7;
 if ((VAR_9|VAR_10) & VAR_2)
  VAR_12 &= ~VAR_7;
 if (VAR_9 & VAR_1)
  VAR_12 |= VAR_3;

 if (VAR_9 & VAR_0 &&
     (FUNC_0(VAR_11) || FUNC_1(VAR_11)))
  VAR_12 |= VAR_5;

 VAR_13 = FUNC_3(VAR_8, 2);
 if (VAR_13)
  return VAR_13;

 FUNC_4(VAR_8, VAR_12);
 FUNC_4(VAR_8, VAR_6);
 FUNC_2(VAR_8);

 return 0;
}
