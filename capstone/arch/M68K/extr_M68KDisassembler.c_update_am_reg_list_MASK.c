
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int m68k_info ;
struct TYPE_4__ {int base_reg; int index_reg; } ;
struct TYPE_5__ {int address_mode; TYPE_1__ mem; int reg; } ;
typedef TYPE_2__ cs_m68k_op ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(m68k_info *VAR_0, cs_m68k_op *VAR_1, int VAR_2)
{
 switch (VAR_1->address_mode) {
  case 129:
  case 128:
   FUNC_0(VAR_0, VAR_1->reg, VAR_2);
   break;

  case 131:
  case 130:
   FUNC_0(VAR_0, VAR_1->reg, 1);
   break;

  case 133:
  case 132:
   FUNC_0(VAR_0, VAR_1->reg, 0);
   break;

  case 141:
  case 140:
  case 139:
  case 138:
  case 137:
  case 136:
  case 134:
  case 135:
   FUNC_0(VAR_0, VAR_1->mem.index_reg, 0);
   FUNC_0(VAR_0, VAR_1->mem.base_reg, 0);
   break;


  default:
   break;
 }
}
