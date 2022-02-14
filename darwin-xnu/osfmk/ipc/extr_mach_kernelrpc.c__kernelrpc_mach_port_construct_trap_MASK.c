
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
struct _kernelrpc_mach_port_construct_args {int name; int context; int options; int target; } ;
typedef int options ;
typedef int name ;
typedef int mach_port_options_t ;
typedef int mach_port_name_t ;
struct TYPE_5__ {int itk_space; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int ,int) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int ,int *,int ,int *) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

int
FUNC_6(struct _kernelrpc_mach_port_construct_args *VAR_3)
{
 task_t VAR_4 = FUNC_4(VAR_3->target);
 mach_port_name_t VAR_5;
 int VAR_6 = VAR_2;
 mach_port_options_t VAR_7;

 if (FUNC_0(VAR_3->options, (char *)&VAR_7, sizeof (VAR_7))) {
  VAR_6 = VAR_1;
  goto done;
 }

 if (VAR_4 != FUNC_2())
  goto done;

 VAR_6 = FUNC_3(VAR_4->itk_space, &VAR_7, VAR_3->context, &VAR_5);
 if (VAR_6 == VAR_0)
  VAR_6 = FUNC_1(&VAR_5, VAR_3->name, sizeof (VAR_5));

done:
 if (VAR_4)
  FUNC_5(VAR_4);
 return (VAR_6);
}
