
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_short ;
typedef int u16 ;
struct apm_bios_call {int ebx; int ecx; int err; int edx; int func; } ;
struct TYPE_2__ {scalar_t__ get_power_status_swabinminutes; scalar_t__ get_power_status_broken; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct apm_bios_call*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(u_short *VAR_5, u_short *VAR_6, u_short *VAR_7)
{
 struct apm_bios_call VAR_8;

 VAR_8.func = VAR_2;
 VAR_8.ebx = VAR_1;
 VAR_8.ecx = 0;

 if (VAR_4.get_power_status_broken)
  return VAR_0;
 if (FUNC_0(&VAR_8))
  return VAR_8.err;
 *VAR_5 = VAR_8.ebx;
 *VAR_6 = VAR_8.ecx;
 if (VAR_4.get_power_status_swabinminutes) {
  *VAR_7 = FUNC_1((u16)VAR_8.edx);
  *VAR_7 |= 0x8000;
 } else
  *VAR_7 = VAR_8.edx;
 return VAR_3;
}
