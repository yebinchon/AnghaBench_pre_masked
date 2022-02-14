
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int user_addr_t ;
typedef int uint64_t ;
typedef int hdr ;
struct TYPE_7__ {int dofh_loadsz; } ;
typedef TYPE_1__ dof_hdr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_3 (int,int,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static dof_hdr_t *
FUNC_5(user_addr_t VAR_7, int *VAR_8)
{
 dof_hdr_t VAR_9, *VAR_10;

 FUNC_0(&VAR_6, VAR_4);




 if (FUNC_1(VAR_7, &VAR_9, sizeof (VAR_9)) != 0) {
  FUNC_2(((void*)0), "failed to copyin DOF header");
  *VAR_8 = VAR_1;
  return (((void*)0));
 }





 if (VAR_9.dofh_loadsz >= (uint64_t)VAR_5) {
  FUNC_2(&VAR_9, "load size exceeds maximum");
  *VAR_8 = VAR_0;
  return (((void*)0));
 }

 if (VAR_9.dofh_loadsz < sizeof (VAR_9)) {
  FUNC_2(&VAR_9, "invalid load size");
  *VAR_8 = VAR_2;
  return (((void*)0));
 }

 VAR_10 = FUNC_3(VAR_9.dofh_loadsz, 8, VAR_3);

        if (FUNC_1(VAR_7, VAR_10, VAR_9.dofh_loadsz) != 0 ||
   VAR_10->dofh_loadsz != VAR_9.dofh_loadsz) {
     FUNC_4(VAR_10, VAR_9.dofh_loadsz);
     *VAR_8 = VAR_1;
     return (((void*)0));
 }

 return (VAR_10);
}
