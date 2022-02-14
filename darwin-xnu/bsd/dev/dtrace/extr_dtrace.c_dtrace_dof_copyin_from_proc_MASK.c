
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int uint64_t ;
typedef int proc_t ;
typedef int hdr ;
struct TYPE_7__ {int dofh_loadsz; } ;
typedef TYPE_1__ dof_hdr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_2 (int,int,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*,int,int ) ;

__attribute__((used)) static dof_hdr_t *
FUNC_5(proc_t* VAR_8, user_addr_t VAR_9, int *VAR_10)
{
 dof_hdr_t VAR_11, *VAR_12;

 FUNC_0(&VAR_7, VAR_5);




 if (FUNC_4(VAR_8, &VAR_11, sizeof(VAR_11), VAR_9) != VAR_3) {
  FUNC_1(((void*)0), "failed to copyin DOF header");
  *VAR_10 = VAR_1;
  return (((void*)0));
 }





 if (VAR_11.dofh_loadsz >= (uint64_t)VAR_6) {
  FUNC_1(&VAR_11, "load size exceeds maximum");
  *VAR_10 = VAR_0;
  return (((void*)0));
 }

 if (VAR_11.dofh_loadsz < sizeof (VAR_11)) {
  FUNC_1(&VAR_11, "invalid load size");
  *VAR_10 = VAR_2;
  return (((void*)0));
 }

 VAR_12 = FUNC_2(VAR_11.dofh_loadsz, 8, VAR_4);

 if (FUNC_4(VAR_8, VAR_12, VAR_11.dofh_loadsz, VAR_9) != VAR_3) {
  FUNC_3(VAR_12, VAR_11.dofh_loadsz);
  *VAR_10 = VAR_1;
  return (((void*)0));
 }

 return (VAR_12);
}
