
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int csh ;
typedef int cs_mode ;
struct TYPE_6__ {TYPE_1__* detail; } ;
typedef TYPE_2__ cs_insn ;
struct TYPE_7__ {scalar_t__ fee; scalar_t__ push; scalar_t__ pop; } ;
typedef TYPE_3__ cs_evm ;
struct TYPE_5__ {TYPE_3__ evm; } ;


 int FUNC_0 (char**,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;

char *FUNC_2(csh *VAR_0, cs_mode VAR_1, cs_insn *VAR_2)
{
 cs_evm *VAR_3;
 char *VAR_4;

 VAR_4 = (char *)FUNC_1(sizeof(char));
 VAR_4[0] = '\0';

 if (VAR_2->detail == ((void*)0))
  return VAR_4;

 VAR_3 = &(VAR_2->detail->evm);

 if (VAR_3->pop)
  FUNC_0(&VAR_4, " ; Pop: %u", VAR_3->pop);

 if (VAR_3->push)
  FUNC_0(&VAR_4, " ; Push: %u", VAR_3->push);

 if (VAR_3->fee)
  FUNC_0(&VAR_4, " ; Gas fee: %u", VAR_3->fee);

 return VAR_4;
}
