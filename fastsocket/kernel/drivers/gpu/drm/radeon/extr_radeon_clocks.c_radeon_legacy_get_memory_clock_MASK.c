
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_pll {int reference_freq; } ;
struct TYPE_2__ {struct radeon_pll mpll; } ;
struct radeon_device {TYPE_1__ clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;

uint32_t FUNC_1(struct radeon_device *VAR_5)
{
 struct radeon_pll *VAR_6 = &VAR_5->clock.mpll;
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_7 = FUNC_0(VAR_4);
 VAR_7 = (VAR_7 >> VAR_2) & VAR_1;
 VAR_7 <<= 1;
 VAR_7 *= VAR_6->reference_freq;

 VAR_8 =
     FUNC_0(VAR_4) & VAR_3;

 if (VAR_8 == 0)
  return 0;

 VAR_10 = VAR_7 / VAR_8;

 VAR_9 = FUNC_0(VAR_0) & 0x7;
 if (VAR_9 == 2)
  VAR_10 >>= 1;
 else if (VAR_9 == 3)
  VAR_10 >>= 2;
 else if (VAR_9 == 4)
  VAR_10 >>= 3;

 return VAR_10;
}
