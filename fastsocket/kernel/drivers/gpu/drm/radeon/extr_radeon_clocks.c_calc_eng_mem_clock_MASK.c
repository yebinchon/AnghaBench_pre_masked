
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_pll {int reference_div; int reference_freq; } ;
struct TYPE_2__ {struct radeon_pll spll; } ;
struct radeon_device {TYPE_1__ clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static uint32_t FUNC_1(struct radeon_device *VAR_2,
       uint32_t VAR_3,
       int *VAR_4, int *VAR_5)
{
 struct radeon_pll *VAR_6 = &VAR_2->clock.spll;
 int VAR_7 = VAR_6->reference_div;

 if (!VAR_7)
  VAR_7 =
      FUNC_0(VAR_1) &
      VAR_0;

 if (VAR_3 < 15000) {
  *VAR_5 = 8;
  VAR_3 *= 8;
 } else if (VAR_3 < 30000) {
  *VAR_5 = 4;
  VAR_3 *= 4;
 } else if (VAR_3 < 60000) {
  *VAR_5 = 2;
  VAR_3 *= 2;
 } else
  *VAR_5 = 1;

 VAR_3 *= VAR_7;
 VAR_3 += VAR_6->reference_freq;
 VAR_3 /= (2 * VAR_6->reference_freq);

 *VAR_4 = VAR_3 & 0xff;

 VAR_3 = (VAR_3 & 0xffff) << 1;
 VAR_3 *= VAR_6->reference_freq;
 VAR_3 /= VAR_7;
 VAR_3 /= *VAR_5;

 return VAR_3;
}
