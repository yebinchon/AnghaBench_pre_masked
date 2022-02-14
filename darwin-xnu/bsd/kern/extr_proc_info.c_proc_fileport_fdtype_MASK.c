
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fileport_fdtype_args {TYPE_1__* ffa_pfi; TYPE_1__* ffa_pfi_end; } ;
struct fileglob {int dummy; } ;
typedef int mach_port_name_t ;
typedef scalar_t__ file_type_t ;
struct TYPE_2__ {int proc_fileport; scalar_t__ proc_fdtype; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct fileglob*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_1(mach_port_name_t VAR_2, struct fileglob *VAR_3, void *VAR_4)
{
 struct fileport_fdtype_args *VAR_5 = VAR_4;

 if (VAR_5->ffa_pfi != VAR_5->ffa_pfi_end) {
  file_type_t VAR_6 = FUNC_0(VAR_3);

  VAR_5->ffa_pfi->proc_fdtype = (VAR_6 != VAR_0) ?
   VAR_6 : VAR_1;
  VAR_5->ffa_pfi->proc_fileport = VAR_2;
  VAR_5->ffa_pfi++;
  return (0);
 } else
  return (-1);
}
