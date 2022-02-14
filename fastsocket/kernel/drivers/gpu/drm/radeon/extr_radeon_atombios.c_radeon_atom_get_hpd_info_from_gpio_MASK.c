
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_gpio_rec {scalar_t__ reg; int mask; } ;
struct radeon_hpd {void* hpd; struct radeon_gpio_rec gpio; } ;
struct radeon_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (struct radeon_hpd*,int ,int) ;

__attribute__((used)) static struct radeon_hpd FUNC_3(struct radeon_device *VAR_10,
           struct radeon_gpio_rec *VAR_11)
{
 struct radeon_hpd VAR_12;
 u32 VAR_13;

 FUNC_2(&VAR_12, 0, sizeof(struct radeon_hpd));

 if (FUNC_1(VAR_10))
  VAR_13 = VAR_9;
 else if (FUNC_0(VAR_10))
  VAR_13 = VAR_1;
 else
  VAR_13 = VAR_0;

 VAR_12.gpio = *VAR_11;
 if (VAR_11->reg == VAR_13) {
  switch(VAR_11->mask) {
  case (1 << 0):
   VAR_12.hpd = VAR_2;
   break;
  case (1 << 8):
   VAR_12.hpd = VAR_3;
   break;
  case (1 << 16):
   VAR_12.hpd = VAR_4;
   break;
  case (1 << 24):
   VAR_12.hpd = VAR_5;
   break;
  case (1 << 26):
   VAR_12.hpd = VAR_6;
   break;
  case (1 << 28):
   VAR_12.hpd = VAR_7;
   break;
  default:
   VAR_12.hpd = VAR_8;
   break;
  }
 } else
  VAR_12.hpd = VAR_8;
 return VAR_12;
}
