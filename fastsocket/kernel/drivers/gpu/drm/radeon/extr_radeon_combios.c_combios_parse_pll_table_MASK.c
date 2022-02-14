
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct drm_device *VAR_5, uint16_t VAR_6)
{
 struct radeon_device *VAR_7 = VAR_5->dev_private;

 if (VAR_6) {
  while (FUNC_1(VAR_6)) {
   uint8_t VAR_8 = ((FUNC_1(VAR_6) & 0xc0) >> 6);
   uint8_t VAR_9 = (FUNC_1(VAR_6) & 0x3f);
   uint32_t VAR_10, VAR_11, VAR_12;
   uint32_t VAR_13, VAR_14;

   VAR_6++;
   switch (VAR_8) {
   case 0:
    VAR_10 = FUNC_0(VAR_6);
    VAR_6 += 4;
    FUNC_3(VAR_9, VAR_10);
    break;
   case 1:
    VAR_11 = FUNC_1(VAR_6) * 8;
    VAR_6++;
    VAR_13 = FUNC_1(VAR_6) << VAR_11;
    VAR_13 |= ~(0xff << VAR_11);
    VAR_6++;
    VAR_14 = FUNC_1(VAR_6) << VAR_11;
    VAR_6++;
    VAR_12 = FUNC_2(VAR_9);
    VAR_12 &= VAR_13;
    VAR_12 |= VAR_14;
    FUNC_3(VAR_9, VAR_12);
    break;
   case 2:
   case 3:
    VAR_12 = 1000;
    switch (VAR_9) {
    case 1:
     FUNC_5(150);
     break;
    case 2:
     FUNC_4(1);
     break;
    case 3:
     while (VAR_12--) {
      if (!
          (FUNC_2
           (VAR_1) &
           VAR_4))
       break;
     }
     break;
    case 4:
     while (VAR_12--) {
      if (FUNC_2
          (VAR_1) &
          VAR_2)
       break;
     }
     break;
    case 5:
     VAR_12 =
         FUNC_2(VAR_1);
     if (VAR_12 & VAR_0) {
      FUNC_3
          (VAR_1,
           VAR_12 &
           ~VAR_0);
      FUNC_4(10);
     }
     break;
    default:
     break;
    }
    break;
   default:
    break;
   }
  }
 }
}
