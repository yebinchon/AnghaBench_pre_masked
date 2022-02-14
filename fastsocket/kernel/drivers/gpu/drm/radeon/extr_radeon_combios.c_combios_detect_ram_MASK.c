
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static uint32_t FUNC_4(struct drm_device *VAR_3, int VAR_4,
       int VAR_5)
{
 struct radeon_device *VAR_6 = VAR_3->dev_private;
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9 = 0;

 VAR_7 = FUNC_0(VAR_0);
 if (VAR_7 & VAR_2)
  VAR_4 /= 2;
 VAR_8 = VAR_4;
 VAR_7 &= ~(0xff << 8);
 VAR_7 |= (VAR_5 & 0xff) << 8;
 FUNC_2(VAR_0, VAR_7);
 FUNC_0(VAR_0);




 while (VAR_4--) {
  VAR_9 = VAR_4 * 1024 * 1024;

  FUNC_3((VAR_9) | VAR_1, 0xdeadbeef);

  if (FUNC_1((VAR_9) | VAR_1) != 0xdeadbeef)
   return 0;
 }

 return VAR_8;
}
