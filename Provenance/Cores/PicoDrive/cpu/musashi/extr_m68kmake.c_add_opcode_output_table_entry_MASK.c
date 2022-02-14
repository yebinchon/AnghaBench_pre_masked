
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int op_mask; int bits; int name; } ;
typedef TYPE_1__ opcode_struct ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(opcode_struct* VAR_3, char* VAR_4)
{
 opcode_struct* VAR_5;
 if(VAR_2 > VAR_0)
  FUNC_0("Opcode output table overflow");

 VAR_5 = VAR_1 + VAR_2++;

 *VAR_5 = *VAR_3;
 FUNC_2(VAR_5->name, VAR_4);
 VAR_5->bits = FUNC_1(VAR_5->op_mask);
}
