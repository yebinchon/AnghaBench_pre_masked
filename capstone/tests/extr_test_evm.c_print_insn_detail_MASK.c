
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int csh ;
struct TYPE_6__ {TYPE_1__* detail; } ;
typedef TYPE_2__ cs_insn ;
struct TYPE_7__ {int pop; int push; int fee; } ;
typedef TYPE_3__ cs_evm ;
struct TYPE_5__ {int groups_count; int * groups; TYPE_3__ evm; } ;


 char* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(csh VAR_1, cs_insn *VAR_2)
{
 cs_evm *VAR_3;


 if (VAR_2->detail == ((void*)0))
  return;

 VAR_3 = &(VAR_2->detail->evm);

 if (VAR_3->pop)
  FUNC_1("\tPop:     %u\n", VAR_3->pop);

 if (VAR_3->push)
  FUNC_1("\tPush:    %u\n", VAR_3->push);

 if (VAR_3->fee)
  FUNC_1("\tGas fee: %u\n", VAR_3->fee);

 if (VAR_2->detail->groups_count) {
  int VAR_4;

  FUNC_1("\tGroups: ");
  for(VAR_4 = 0; VAR_4 < VAR_2->detail->groups_count; VAR_4++) {
   FUNC_1("%s ", FUNC_0(VAR_0, VAR_2->detail->groups[VAR_4]));
  }
  FUNC_1("\n");
 }
}
