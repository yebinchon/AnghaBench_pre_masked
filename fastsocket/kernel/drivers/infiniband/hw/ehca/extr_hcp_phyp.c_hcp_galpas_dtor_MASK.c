
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fw_handle; } ;
struct TYPE_3__ {scalar_t__ fw_handle; } ;
struct h_galpas {TYPE_2__ kernel; TYPE_1__ user; } ;


 int FUNC_0 (scalar_t__) ;

int FUNC_1(struct h_galpas *VAR_0)
{
 if (VAR_0->kernel.fw_handle) {
  int VAR_1 = FUNC_0(VAR_0->kernel.fw_handle);
  if (VAR_1)
   return VAR_1;
 }

 VAR_0->user.fw_handle = VAR_0->kernel.fw_handle = 0;

 return 0;
}
