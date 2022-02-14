
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int op_match; int op_mask; int spec_ea; int * cycles; } ;
typedef TYPE_1__ opcode_struct ;
struct TYPE_7__ {char* fname_add; int match_add; int mask_add; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

void FUNC_3(opcode_struct* VAR_4, opcode_struct* VAR_5, int VAR_6)
{
 int VAR_7;

 *VAR_5 = *VAR_4;

 for(VAR_7=0;VAR_7<VAR_1;VAR_7++)
  VAR_5->cycles[VAR_7] = FUNC_0(VAR_5, VAR_6, VAR_7);
 if(FUNC_2(VAR_5->spec_ea, VAR_2) == 0 && VAR_6 != VAR_0)
  FUNC_1(VAR_5->spec_ea, "%s", VAR_3[VAR_6].fname_add);
 VAR_5->op_mask |= VAR_3[VAR_6].mask_add;
 VAR_5->op_match |= VAR_3[VAR_6].match_add;
}
