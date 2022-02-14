
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int fw_handle; } ;
struct TYPE_3__ {scalar_t__ fw_handle; } ;
struct h_galpas {TYPE_2__ user; TYPE_1__ kernel; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct h_galpas *VAR_1, int VAR_2,
      u64 VAR_3, u64 VAR_4)
{
 if (!VAR_2) {
  VAR_1->kernel.fw_handle = FUNC_0(VAR_3);
  if (!VAR_1->kernel.fw_handle)
   return -VAR_0;
 } else
  VAR_1->kernel.fw_handle = 0;

 VAR_1->user.fw_handle = VAR_4;

 return 0;
}
