
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvc0_pm_clock {int dsrc; int ddiv; int mdiv; int ssel; int freq; int coef; } ;
struct drm_device {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct drm_device*,int,int,int,int*) ;
 int FUNC_2 (struct drm_device*,int,int,int *) ;
 int FUNC_3 (struct drm_device*,int,int,int*,int*) ;
 int FUNC_4 (struct drm_device*,int) ;

__attribute__((used)) static int
FUNC_5(struct drm_device *VAR_0, int VAR_1, struct nvc0_pm_clock *VAR_2, u32 VAR_3)
{
 u32 VAR_4, VAR_5, VAR_6, VAR_7 = 0;
 u32 VAR_8, VAR_9 = 0;


 if (!VAR_3)
  return 0;


 VAR_8 = FUNC_3(VAR_0, VAR_1, VAR_3, &VAR_4, &VAR_5);
 VAR_8 = FUNC_1(VAR_0, VAR_1, VAR_8, VAR_3, &VAR_6);


 if (VAR_8 != VAR_3 && (0x00004387 & (1 << VAR_1))) {
  if (VAR_1 < 7)
   VAR_9 = FUNC_2(VAR_0, VAR_1, VAR_3, &VAR_2->coef);
  else
   VAR_9 = FUNC_4(VAR_0, 0x1370e0);
  VAR_9 = FUNC_1(VAR_0, VAR_1, VAR_9, VAR_3, &VAR_7);
 }


 if (FUNC_0((int)VAR_3 - VAR_8) <= FUNC_0((int)VAR_3 - VAR_9)) {
  VAR_2->dsrc = VAR_4;
  if (VAR_5) {
   VAR_2->ddiv |= 0x80000000;
   VAR_2->ddiv |= VAR_5 << 8;
   VAR_2->ddiv |= VAR_5;
  }
  if (VAR_6) {
   VAR_2->mdiv |= 0x80000000;
   VAR_2->mdiv |= VAR_6;
  }
  VAR_2->ssel = 0;
  VAR_2->freq = VAR_8;
 } else {
  if (VAR_7) {
   VAR_2->mdiv |= 0x80000000;
   VAR_2->mdiv |= VAR_7 << 8;
  }
  VAR_2->ssel = (1 << VAR_1);
  VAR_2->freq = VAR_9;
 }

 return 0;
}
