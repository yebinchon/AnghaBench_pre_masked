
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
struct TYPE_5__ {TYPE_3__ evm; } ;


 int FUNC_0 (char*,int) ;

void FUNC_1(csh VAR_0, cs_insn *VAR_1)
{
 cs_evm *VAR_2;


 if (VAR_1->detail == ((void*)0))
  return;

 VAR_2 = &(VAR_1->detail->evm);

 if (VAR_2->pop)
  FUNC_0("\tPop:     %u\n", VAR_2->pop);

 if (VAR_2->push)
  FUNC_0("\tPush:    %u\n", VAR_2->push);

 if (VAR_2->fee)
  FUNC_0("\tGas fee: %u\n", VAR_2->fee);
}
