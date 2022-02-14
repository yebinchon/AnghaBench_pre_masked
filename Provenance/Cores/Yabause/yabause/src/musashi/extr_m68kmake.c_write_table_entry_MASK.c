
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int op_mask; int op_match; int* cycles; } ;
typedef TYPE_1__ opcode_struct ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

void FUNC_1(FILE* VAR_1, opcode_struct* VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1, "\t{%-28s, 0x%04x, 0x%04x, {",
  VAR_2->name, VAR_2->op_mask, VAR_2->op_match);

 for(VAR_3=0;VAR_3<VAR_0;VAR_3++)
 {
  FUNC_0(VAR_1, "%3d", VAR_2->cycles[VAR_3]);
  if(VAR_3 < VAR_0-1)
   FUNC_0(VAR_1, ", ");
 }

 FUNC_0(VAR_1, "}},\n");
}
