
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_6,
       uint16_t VAR_7)
{
 struct radeon_device *VAR_8 = VAR_6->dev_private;
 uint32_t VAR_9;

 if (VAR_7) {
  uint8_t VAR_10 = FUNC_2(VAR_7);
  while (VAR_10 != 0xff) {
   VAR_7++;

   if (VAR_10 == 0x0f) {
    uint32_t VAR_11;

    if (FUNC_0(VAR_8))
     VAR_11 =
         VAR_0;
    else
     VAR_11 =
         VAR_2;
    VAR_9 = 20000;
    while (VAR_9--) {
     if ((FUNC_3(VAR_4) &
          VAR_11) ==
         VAR_11)
      break;
    }
   } else {
    uint32_t VAR_12 = FUNC_1(VAR_7);
    VAR_7 += 2;

    VAR_9 = FUNC_3(VAR_3);
    VAR_9 &= VAR_5;
    VAR_9 |= VAR_12;
    FUNC_4(VAR_3, VAR_9);

    VAR_12 = VAR_10 << 24;
    VAR_9 = FUNC_3(VAR_3);
    VAR_9 &= VAR_1;
    VAR_9 |= VAR_12;
    FUNC_4(VAR_3, VAR_9);
   }
   VAR_10 = FUNC_2(VAR_7);
  }
 }
}
