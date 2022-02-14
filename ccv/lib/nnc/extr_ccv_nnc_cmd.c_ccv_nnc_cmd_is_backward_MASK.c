
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cmd; } ;
typedef TYPE_1__ ccv_nnc_cmd_t ;
int FUNC_0(const ccv_nnc_cmd_t VAR_0)
{
 switch (VAR_0.cmd)
 {
  case 128:
   return 0;
  case 131:
  case 132:
  case 129:
  case 130:
  default:
   return !!(VAR_0.cmd & 0x1);
 }
}
