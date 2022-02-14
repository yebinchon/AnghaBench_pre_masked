
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int m68k_info ;
struct TYPE_6__ {scalar_t__ reg_1; scalar_t__ reg_0; } ;
struct TYPE_7__ {TYPE_1__ reg_pair; scalar_t__ reg; scalar_t__ type; } ;
typedef TYPE_2__ cs_m68k_op ;






 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_3(m68k_info *VAR_1, cs_m68k_op *VAR_2, int VAR_3)
{
 switch ((int)VAR_2->type) {
  case 130:
   FUNC_0(VAR_1, VAR_2->reg, VAR_3);
   break;

  case 131:
   FUNC_1(VAR_1, VAR_2, VAR_3);
   break;

  case 129:
   FUNC_2(VAR_1, VAR_2, VAR_3);
   break;

  case 128:
   FUNC_0(VAR_1, VAR_0 + VAR_2->reg_pair.reg_0, VAR_3);
   FUNC_0(VAR_1, VAR_0 + VAR_2->reg_pair.reg_1, VAR_3);
   break;
 }
}
