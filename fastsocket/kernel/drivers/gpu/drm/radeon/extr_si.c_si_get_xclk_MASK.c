
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int reference_freq; } ;
struct TYPE_4__ {TYPE_1__ spll; } ;
struct radeon_device {TYPE_2__ clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

u32 FUNC_1(struct radeon_device *VAR_5)
{
        u32 VAR_6 = VAR_5->clock.spll.reference_freq;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_1);
 if (VAR_7 & VAR_2)
  return VAR_3;

 VAR_7 = FUNC_0(VAR_0);
 if (VAR_7 & VAR_4)
  return VAR_6 / 4;

 return VAR_6;
}
