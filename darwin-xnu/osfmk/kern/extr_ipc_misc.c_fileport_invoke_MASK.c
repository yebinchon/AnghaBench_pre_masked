
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* task_t ;
typedef struct fileglob fileglob ;
typedef int mach_port_name_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_port_t ;
typedef int ipc_object_t ;
struct TYPE_3__ {int itk_space; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct fileglob* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct fileglob*,void*) ;

kern_return_t
FUNC_4(task_t VAR_3, mach_port_name_t VAR_4,
 int (*VAR_5)(mach_port_name_t, struct fileglob *, void *),
 void *VAR_6, int *VAR_7)
{
 kern_return_t VAR_8;
 ipc_port_t VAR_9;
 struct fileglob *VAR_10;

 VAR_8 = FUNC_1(VAR_3->itk_space, VAR_4,
     VAR_2, (ipc_object_t *)&VAR_9);
 if (VAR_8 != VAR_1)
  return (VAR_8);

 if ((VAR_10 = FUNC_0(VAR_9)) != ((void*)0))
  *VAR_7 = (*VAR_5)(VAR_4, VAR_10, VAR_6);
 else
  VAR_8 = VAR_0;
 FUNC_2(VAR_9);
 return (VAR_8);
}
