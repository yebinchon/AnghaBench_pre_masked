
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct drm_device {int dummy; } ;


 int FUNC_0 (struct drm_device*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct drm_device *VAR_0, uint32_t VAR_1,
      uint32_t VAR_2[4][7])
{
 int VAR_3, VAR_4;
 uint32_t VAR_5[] = { VAR_1, VAR_1 + 0x1c, VAR_1 + 0x40, VAR_1 + 0x5c };

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  for (VAR_4 = 0; VAR_4 < 7; VAR_4++)
   FUNC_0(VAR_0, VAR_5[VAR_3]+4*VAR_4, VAR_2[VAR_3][VAR_4]);
 }
}
