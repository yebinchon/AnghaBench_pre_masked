
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct proc {int dummy; } ;
struct kdebug_trace_args {int arg4; int arg3; int arg2; int arg1; int code; } ;
struct kdebug_trace64_args {int arg4; int arg3; int arg2; int arg1; int code; } ;
typedef int int32_t ;


 int FUNC_0 (struct proc*,struct kdebug_trace64_args*,int *) ;

int
FUNC_1(struct proc *VAR_0, struct kdebug_trace_args *VAR_1, int32_t *VAR_2)
{
 struct kdebug_trace64_args VAR_3;

 VAR_3 = VAR_1->code;
 VAR_3 = VAR_1->arg1;
 VAR_3 = VAR_1->arg2;
 VAR_3 = VAR_1->arg3;
 VAR_3 = VAR_1->arg4;

 return FUNC_0(VAR_0, &VAR_3, VAR_2);
}
