
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct nvbios_perf_fan {int pwm_divisor; } ;
struct nouveau_bios {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_bios*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct nouveau_bios*,int*,int*,int*,int*) ;

int
FUNC_2(struct nouveau_bios *VAR_1,
        struct nvbios_perf_fan *VAR_2)
{
 u8 VAR_3 = 0, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;
 u16 VAR_7 = FUNC_1(VAR_1, &VAR_3, &VAR_4, &VAR_5, &VAR_6);
 if (!VAR_7)
  return -VAR_0;

 if (VAR_3 >= 0x20 && VAR_3 < 0x40 && VAR_4 > 6)
  VAR_2->pwm_divisor = FUNC_0(VAR_1, VAR_7 + 6);
 else
  VAR_2->pwm_divisor = 0;

 return 0;
}
