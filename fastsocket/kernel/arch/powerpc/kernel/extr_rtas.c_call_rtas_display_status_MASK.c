
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtas_args {int token; int nargs; int nret; unsigned char* args; int * rets; } ;
typedef int rtas_arg_t ;
struct TYPE_2__ {int base; struct rtas_args args; } ;


 int FUNC_0 (struct rtas_args*) ;
 int FUNC_1 (int ) ;
 unsigned long FUNC_2 () ;
 TYPE_1__ VAR_0 ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(char VAR_1)
{
 struct rtas_args *VAR_2 = &VAR_0.args;
 unsigned long VAR_3;

 if (!VAR_0.base)
  return;
 VAR_3 = FUNC_2();

 VAR_2->token = 10;
 VAR_2->nargs = 1;
 VAR_2->nret = 1;
 VAR_2->rets = (rtas_arg_t *)&(VAR_2->args[1]);
 VAR_2->args[0] = (unsigned char)VAR_1;

 FUNC_1(FUNC_0(VAR_2));

 FUNC_3(VAR_3);
}
