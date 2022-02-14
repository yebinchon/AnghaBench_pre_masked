
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct _kernelrpc_mach_port_allocate_args {int name; int right; int target; } ;
typedef int name ;
typedef int mach_port_name_t ;
struct TYPE_5__ {int itk_space; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int ,int ,int *) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(struct _kernelrpc_mach_port_allocate_args *VAR_2)
{
 task_t VAR_3 = FUNC_3(VAR_2->target);
 mach_port_name_t VAR_4;
 int VAR_5 = VAR_1;

 if (VAR_3 != FUNC_1())
  goto done;

 VAR_5 = FUNC_2(VAR_3->itk_space, VAR_2->right, &VAR_4);
 if (VAR_5 == VAR_0)
  VAR_5 = FUNC_0(&VAR_4, VAR_2->name, sizeof (VAR_4));


done:
 if (VAR_3)
  FUNC_4(VAR_3);
 return (VAR_5);
}
