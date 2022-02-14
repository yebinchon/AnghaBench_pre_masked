
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct radeon_device {int flags; scalar_t__ family; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int FUNC_0 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct drm_device*,int,int) ;
 scalar_t__ FUNC_6 (struct drm_device*,int ) ;

__attribute__((used)) static void FUNC_7(struct drm_device *VAR_6)
{
 struct radeon_device *VAR_7 = VAR_6->dev_private;
 uint8_t VAR_8;
 uint16_t VAR_9;
 uint32_t VAR_10 = 0;
 uint32_t VAR_11 = 0;


 if (VAR_7->flags & VAR_4)
  return;


 VAR_9 = FUNC_6(VAR_6, VAR_1);
 if (VAR_9) {
  VAR_8 = FUNC_3(VAR_9);
  if (VAR_8 < 3) {
   VAR_11 = FUNC_2(VAR_9 + 1);
   VAR_10 = FUNC_1(VAR_9 + 5);
   if ((VAR_7->family < VAR_0) &&
       !FUNC_0(VAR_7))
    FUNC_4(VAR_5, VAR_11);
  }
 }

 if (!VAR_10) {
  VAR_9 =
      FUNC_6(VAR_6, VAR_2);
  if (VAR_9) {
   VAR_8 = FUNC_3(VAR_9 - 1);
   if (VAR_8 < 1) {
    if ((VAR_7->family < VAR_0)
        && !FUNC_0(VAR_7)) {
     int VAR_12 = 0;
     int VAR_13 = 0;

     while (FUNC_3(VAR_9)) {
      VAR_12 = FUNC_3(VAR_9);
      VAR_13 =
          FUNC_3(VAR_9 + 1);
      if (VAR_13 != 0x25)
       VAR_12 *= 2;
      VAR_10 =
          FUNC_5(VAR_6, VAR_12,
               VAR_13);
      if (VAR_10)
       break;
      VAR_9 += 2;
     }
    } else
     VAR_10 = FUNC_3(VAR_9);
   } else {
    VAR_10 = FUNC_3(VAR_9);
    VAR_10 *= 2;
   }
  }
 }

 VAR_10 *= (1024 * 1024);
 FUNC_4(VAR_3, VAR_10);
}
