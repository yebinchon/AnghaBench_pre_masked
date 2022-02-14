
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct _kernelrpc_mach_port_insert_member_args {int pset; int name; int target; } ;
struct TYPE_5__ {int itk_space; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(struct _kernelrpc_mach_port_insert_member_args *VAR_1)
{
 task_t VAR_2 = FUNC_2(VAR_1->target);
 int VAR_3 = VAR_0;

 if (VAR_2 != FUNC_0())
  goto done;

 VAR_3 = FUNC_1(VAR_2->itk_space, VAR_1->name, VAR_1->pset);

done:
 if (VAR_2)
  FUNC_3(VAR_2);
 return (VAR_3);
}
